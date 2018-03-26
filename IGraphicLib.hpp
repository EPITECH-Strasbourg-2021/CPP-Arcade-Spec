/*
** EPITECH PROJECT, 2018
** arcade
** File description:
** arcade
*/

#pragma once

#include <string>
#include "Vect.hpp"
#include "PixelBox.hpp"
#include "TextBox.hpp"
#include "Keys.hpp"

namespace Arcade {
	class IGraphicLib {
	public:
		virtual ~IGraphicLib() = default;

		/* Get the name of the library */
		virtual std::string getName() const = 0;

		/* Window handling */
		// Main loop condition
		virtual bool isOpen() const = 0;

		// Closes the window => stop loop (go menu)
		virtual void closeRenderer() = 0;

		// Opens the window => start loop
		virtual void openRenderer() = 0;

		// Clears the screen
		virtual void clearWindow() = 0;

		// Displays the buffered frame to the screen
		virtual void refreshWindow() = 0;

		/* Rendering functions */
		// Draws a PixelBox or the sprite if supported
		virtual void drawPixelBox(PixelBox &) = 0;

		// Draws a TextBox
		virtual void drawText(TextBox &) = 0;

		/* EVENT HANDLING */
		/* */
		/* This part can seem complicated but the implementation is quite simple. */
		/* */
		/* pollEvent() fetches the events from the user and saves it */
		/* inside an std::vector<Arcade::Keys> or std::list<Arcade::Keys>. */
		/* It returns true if at least one new event was added to the list, false otherwise. */
		/* */
		/* getLastEvent() returns the first event of the list. (using front() and pop_front() methods) */
		/* or Arcade::Keys::NONE if the list is empty. */
		/* */
		/* clearEvents() clears the list (using clear() method). */
		/* */
		virtual bool pollEvents() = 0;
		virtual Keys getLastEvent() = 0;
		virtual void clearEvents() = 0;

		/* Context Info */
		// get the X and Y max of the windows
		virtual Vect<size_t> getScreenSize() const = 0;

		// get the Y max of the windows
		virtual int getMaxY() const = 0;

		// get the X max of the windows
		virtual int getMaxX() const = 0;
	};
};
