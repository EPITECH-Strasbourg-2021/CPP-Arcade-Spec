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


		/* Events handling */
		// Gets the last saved event (used in render loop)
		virtual Keys getLastEvent() = 0;
		
		// Saves the event in the Graphics library
		virtual bool pollEvents() = 0;
		
		// Deletes the last event
		virtual void cleanEvents() = 0;

		
		/* Context Info */
		// get the X and Y max of the windows
		virtual Vect<size_t> getScreenSize() const = 0;
		
		// get the Y max of the windows
		virtual int getMaxY() const = 0;
		
		// get the X max of the windows
		virtual int getMaxX() const = 0;
	};
};
