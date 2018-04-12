/*
** EPITECH PROJECT, 2018
** arcade
** File description:
** arcade
*/

/*!
 * @file TextBox.hpp
 * @brief TextBox class, similar to a text rectangle
 * @authors https://github.com/EPITECH-Strasbourg-2021/CPP-Arcade-Spec
 *
 * Class used by games and graphic libraries, similar to a text rectangle.
 * All functions must be implemented correctly for libraries to function properly.
 *
 */

#pragma once

#include <string>
#include "Color.hpp"
#include "Vect.hpp"

/*!
 * @namespace Arcade
 * @brief Arcade project namespace
 */
namespace Arcade {

	/*!
	 * @class TextBox
	 * @brief TextBox class
	 *
	 * Class used to represent a rectangle of text
	 *
	 */
	class TextBox {
	public:

		/*!
		 * @brief TextBox class's constructor
		 * @param text : characters to be apply on the textBox
		 * @param pos : Vect<size_t> containing both x and y offsets. Used to place the textBox on the rendering support
		 * @param fontSize : size of the text
		 * @param color : color of the text
		 * @param backgroundColor : background color of the text
		 *
		 * Creates a new textBox class instance.
		 * The first text argument defines the value of the text within the textBox.
		 * The Vect<size_t> pos argument defines the coordinates
		 * of the textBox's position on the rendering support.
		 * It will be the offset applied when rendering it.
		 * The third fontSize argument defines the size in which the text should be printed.
		 * The color's argument defines in which color the characters will be printed.
		 * The backgroundColor's argument defines the background color of the characters.
		 */
		TextBox(std::string const &text, Vect<size_t> pos,
			size_t fontSize = 30,
			Color color = Color(255, 255, 255, 255),
			Color backgroundColor = Color(0, 0, 0, 255));

		/*!
		 * @brief PixelBox class's destructor
		 */
		~TextBox() = default;

		/*!
		 * @brief TextBox text's value's getter
		 * @return the value of the text within textBox
		 */
		const std::string &getValue() const;

		/*!
		 * @brief Sets the textBox text's value
		 * @param text : new value to assign
		 */
		void setValue(std::string const &text);

		/*!
		 * @brief TextBox positions's getter
		 * @return a Vect<size_t> containing the offsetX (x) and the offsetY (y) of the textBox.
		 */
		Vect<size_t> getPos() const;

		/*!
		 * @brief TextBox positions's setter
		 * @param pos : new positions of the textBox
		 *
		 * Takes both new positions as parameter, within a Vect<size_t>
		 *
		 */
		void setPos(Vect<size_t> pos);

		/*!
		 * @brief TextBox X offset's getter
		 */
		size_t getX() const;

		/*!
		 * @brief TextBox Y offset's getter
		 */
		size_t getY() const;

		/*!
		 * @brief TextBox X offset's setter
		 */
		void setX(size_t x);

		/*!
		 * @brief TextBox Y offset's setter
		 */
		void setY(size_t y);

		/*!
		 * @brief TextBox's font size's getter
		 * @return the font size
		 */
		size_t getFontSize() const;

		/*!
		 * @brief TextBox's font size's setter
		 * @param size : new font size to be assigned
		 */
		void setFontSize(size_t size);

		/*!
		 * @brief TextBox's text color's getter
		 * @return the textBox's text's color
		 */
		Color getColor() const;

		/*!
		 * @brief TextBox's text color's setter
		 * @param color : new color to apply to text
		 */
		void setColor(Color color);

		/*!
		 * @brief TextBox's text background color's getter
		 * @return the textBox's text's background color
		 */
		Color getBackgroundColor() const;

		/*!
		 * @brief TextBox's text background color's setter
		 * @param color : new background color to apply to text
		 */
		void setBackgroundColor(Color color);

	private:
		std::string _value;
		Vect<size_t> _pos;
		size_t _size;
		Color _color;
		Color _bgColor;
	};
};
