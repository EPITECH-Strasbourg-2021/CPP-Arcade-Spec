/*
** EPITECH PROJECT, 2018
** arcade
** File description:
** arcade
*/

/*!
 * @file IGraphicLib.hpp
 * @brief Graphic libraries dedicated class interface
 * @authors https://github.com/EPITECH-Strasbourg-2021/CPP-Arcade-Spec
 *
 * Interface used by graphic libraries
 * All functions must be implemented correctly for the kernel to handle the graphic libraries.
 *
 */

#pragma once

#include <string>
#include "Vect.hpp"
#include "PixelBox.hpp"
#include "TextBox.hpp"
#include "Keys.hpp"

/*!
 * @namespace Arcade
 * @brief Arcade project namespace
 */
namespace Arcade {

	/*!
	 * @class IGraphicLib
	 * @brief Graphic libraries virtual class
	 *
	 * Purely virtual class that serves as the basis for all graphic libraries
	 *
	 */
	class IGraphicLib {
	public:

		/*!
		 * @brief Destructor
		 *
		 * IGraphicLib class's destructor
		 *
		 */
		virtual ~IGraphicLib() = default;

		/*!
		 * @brief Graphic library name's getter
		 * @return a string containing the name of the graphic library
		 */
		virtual std::string getName() const = 0;

		/* Window handling */
		/*!
		 * @brief Specifies whether the window is open or not
		 * @return true if open, otherwise returns false
		 */
		virtual bool isOpen() const = 0;

		/*!
		 * @brief Closes the rendering support
		 *
		 * Usually closes a window.
		 * Some graphic library uses other rendering support.
		 *
		 */
		virtual void closeRenderer() = 0;

		/*!
		 * @brief Opens the rendering support
		 * @param title : Title of the rendering support if supported
		 *
		 * Usually opens a window.
		 * Some graphic library uses other rendering support.
		 *
		 */
		virtual void openRenderer(std::string const &title) = 0;

		/*!
		 * @brief Clears the rendering support
		 */
		virtual void clearWindow() = 0;

		/*!
		 * @brief Displays the buffered frame to the screen
		 */
		virtual void refreshWindow() = 0;

		/* Rendering functions */
		/*!
		 * @brief Draws a PixelBox
		 */
		virtual void drawPixelBox(PixelBox const &) = 0;

		/*!
		 * @brief Draws a TextBox
		 */
		virtual void drawText(TextBox const &) = 0;

		/* EVENT HANDLING */
		/*!
		 * @brief Fetches the events from the user and saves it
		 * @return true if at least one command has been fetched, otherwise returns false
		 *
		 * Fetched commands are usually stored inside a std::vector<Arcade::Keys> or std::list<Arcade::Keys>
		 *
		 */
		virtual bool pollEvents() = 0;

		/*!
		 * @brief Getter of the oldest command in memory
		 * @return the first event of the list.
		 *
		 * The function deletes the command if it succeed to retrieves one,
		 * using front() and pop_front() methods
		 *
		 */
		virtual Keys getLastEvent() = 0;

		/*!
		 * @brief Clears the pending commands
		 *
		 * The function deletes all the commands currently stored.
		 * They wont be accessible anymore, even with the getLastEvent() method.
		 *
		 */
		virtual void clearEvents() = 0;

		/* Context Info */
		/*!
		 * @brief Getter from the rendering support dimensions
		 * @return a two dimensions vector containing the width and the height of the rendering support
		 */
		virtual Vect<size_t> getScreenSize() const = 0;

		/*!
		 * @brief Getter from the rendering support height
		 * @return the height of the rendering support
		 */
		virtual size_t getMaxY() const = 0;

		/*!
		 * @brief Getter from the rendering support width
		 * @return the width of the rendering support
		 */
		virtual size_t getMaxX() const = 0;
	};
};
