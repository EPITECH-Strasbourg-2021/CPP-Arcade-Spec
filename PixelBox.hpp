/*
** EPITECH PROJECT, 2018
** arcade
** File description:
** arcade
*/

/*!
 * @file PixelBox.hpp
 * @brief PixelBox class, similar to a rectangle of pixels
 * @authors https://github.com/EPITECH-Strasbourg-2021/CPP-Arcade-Spec
 *
 * Class used by games and graphic libraries, similar to a rectangle of pixels.
 * All functions must be implemented correctly for libraries to function properly.
 *
 */

#pragma once

#include <string>
#include <vector>
#include "Color.hpp"
#include "Vect.hpp"

/*!
 * @namespace Arcade
 * @brief Arcade project namespace
 */
namespace Arcade {

	/*!
	 * @class PixelBox
	 * @brief PixelBox class
	 *
	 * Class used to represent a rectangle of pixels
	 *
	 */
	class PixelBox {
	public:

		/*!
		 * @brief PixelBox class's constructor
		 * @param size : Vect<size_t> containing the width (x) and the height (y) of the pixelBox
		 * @param pos : Vect<size_t> containing both x and y offsets. Used to place the pixelBox on the rendering support
		 * @param col : the color with which the array of pixels inside the pixelBox will be created
		 *
		 * Creates a new pixelBox class instance.
		 * The first Vect<size_t> size argument defines the dimensions of the pixelBox.
		 * The second Vect<size_t> pos argument defines the coordinates
		 * of the pixelBox's position on the rendering support.
		 * It will be the offset applied when rendering it.
		 * The third argument defines the color in which the pixels will be created.
		 *
		 */
		explicit PixelBox(Vect<size_t> size = Vect<size_t>(),
			Vect<size_t> pos = Vect<size_t>(),
			Color col = Color(255, 255, 255, 255));

		/*!
		 * @brief PixelBox class's destructor
		 */
		~PixelBox() = default;

		/*!
		 * @brief PixelBox height's getter
		 * @return the pixelBox's height
		 */
		size_t getHeight() const;

		/*!
		 * @brief PixelBox Y offset's getter
		 * @return the pixelBox Y's offset
		 */
		size_t getY() const;

		/*!
		 * @brief PixelBox height setter
		 */
		void setHeight(size_t height);

		/*!
		 * @brief PixelBox Y offset's getter
		 */
		void setY(size_t y);

		/*!
		 * @brief PixelBox width's getter
		 * @return the pixelBox's height
		 */
		size_t getWidth() const;

		/*!
		 * @brief PixelBox X offset's getter
		 * @return the pixelBox X's offset
		 */
		size_t getX() const;

		/*!
		 * @brief PixelBox height's setter
		 */
		void setWidth(size_t width);

		/*!
		 * @brief PixelBox X offset's setter
		 */
		void setX(size_t x);

		/*!
		 * @brief PixelBox dimensions's getter
		 * @return a Vect<size_t> containing the width (x) and the height (y) of the pixelBox.
		 */
		Vect<size_t> getSize() const;

		/*!
		 * @brief PixelBox dimensions's getter
		 * @param size : new dimensions of the pixelBox pixels's array
		 *
		 * Takes both new dimensions as parameter, within a Vect<size_t>
		 *
		 */
		void setSize(Vect<size_t> size);

		/*!
		 * @brief PixelBox positions's getter
		 * @return a Vect<size_t> containing the offsetX (x) and the offsetY (y) of the pixelBox.
		 */
		Vect<size_t> getPos() const;

		/*!
		 * @brief PixelBox positions's setter
		 * @param pos : new positions of the pixelBox pixels's array
		 *
		 * Takes both new positions as parameter, within a Vect<size_t>
		 *
		 */
		void setPos(Vect<size_t> pos);

		/*!
		 * @brief Sets the color of the pixel at the given position
		 * @param pos : The position of the pixel to be modified
		 * @param col : The new color of the pixel to be modified
		 */
		void putPixel(Vect<size_t> pos, Color col);

		/*!
		 * @brief Getter from pixel color to given position
		 * @param pos : The position of the pixel from which the color is requested
		 * @return the color of the requested pixel
		 */
		Color getPixel(Vect<size_t> pos) const;

		/*!
		 * @brief Sets the color of many pixels within the pixelBox pixels's array
		 * @param pos : The position from which the new color has to be applied
		 * @param size : The dimensions of the chunk of pixels to be modified
		 * @param col : The new color to apply
		 */
		void putRect(Vect<size_t> pos, Vect<size_t> size, Color col);

		/*!
		 * @brief Getter of the pixels array
		 * @return a vector of all the pixels of the pixelBox.
		 */
		std::vector<Color> const &getPixelArray() const;

	private:
		std::vector<Color> _colorFrame;
		Vect<size_t> _size;
		Vect<size_t> _pos;
	};
};
