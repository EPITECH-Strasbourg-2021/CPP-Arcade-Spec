/*
** EPITECH PROJECT, 2018
** arcade
** File description:
** arcade
*/

/*!
 * @file Color.hpp
 * @brief Color class, pixel-like
 * @authors https://github.com/EPITECH-Strasbourg-2021/CPP-Arcade-Spec
 *
 * Class used by games and graphic libraries, as a color's array
 * All functions must be implemented correctly for libraries to function properly.
 *
 */

#pragma once

/*!
 * @namespace Arcade
 * @brief Arcade project namespace
 */
namespace Arcade {

	/*!
	 * @class Color
	 * @brief Color class
	 *
	 * Class used to represent a pixel
	 *
	 */
	class Color {
	public:

		/*!
		 * @brief Color class's constructor
		 * @param red
		 * @param green
		 * @param blue
		 * @param alpha
		 *
		 * Creates a new color class instance, each argument being a
		 * value between 0-255, representing the value of one of the subpixels
		 * (red, green, blue and alpha).
		 *
		 */
		explicit Color(unsigned char red = 0, unsigned char green = 0,
			unsigned char blue = 0, unsigned char alpha = 0);

		/*!
		 * @brief Sets the color's subpixels value
		 * @param red
		 * @param green
		 * @param blue
		 * @param alpha
		 *
		 * Sets the color's object subpixels value, each argument being a
		 * value between 0-255, representing the value of one of the subpixels
		 * (red, green, blue and alpha).
		 *
		 */
		void setColor(unsigned char red = 0, unsigned char green = 0,
			unsigned char blue = 0, unsigned char alpha = 0);

		/*!
		 * @brief Red subpixel's getter
		 * @return the red subpixel's value
		 */
		unsigned char getRed() const;

		/*!
		 * @brief Green subpixel's getter
		 * @return the green subpixel's value
		 */
		unsigned char getGreen() const;

		/*!
		 * @brief Blue subpixel's getter
		 * @return the blue subpixel's value
		 */
		unsigned char getBlue() const;

		/*!
		 * @brief Alpha subpixel's getter
		 * @return the alpha subpixel's value
		 */
		unsigned char getAlpha() const;

		/*!
		 * @brief Red subpixel's setter
		 *
		 * Sets the value of the red's subpixel
		 *
		 */
		void setRed(unsigned char red);

		/*!
		 * @brief Green subpixel's setter
		 *
		 * Sets the value of the green's subpixel
		 *
		 */
		void setGreen(unsigned char green);

		/*!
		 * @brief Blue subpixel's setter
		 *
		 * Sets the value of the blue's subpixel
		 *
		 */
		void setBlue(unsigned char blue);

		/*!
		 * @brief Alpha subpixel's setter
		 *
		 * Sets the value of the alpha's subpixel
		 *
		 */
		void setAlpha(unsigned char alpha);

		/*!
		 * Overloading the cast operator to unsigned char *
		 * @return an array of unsigned char * composed of 4 elements, each representing one of the subpixels
		 */
		explicit operator unsigned char *();

		/*!
		 * Overloading the comparison operator
		 * @param other : the color object to compare with
		 * @return true if equal, otherwise returns false
		 */
		bool operator==(const Arcade::Color &other) const;

	private:
		unsigned char _red;
		unsigned char _green;
		unsigned char _blue;
		unsigned char _alpha;
	};
};
