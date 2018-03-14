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
		IGraphicLib() {};
		virtual ~IGraphicLib() = 0;

		/* Get the name of the library */
		virtual std::string getName() = 0;

		/* Module info: Used to optimize initialization */
		virtual bool supportSprite() const = 0;
		virtual bool supportSound() const = 0;
		virtual bool needFont() const = 0;


		/* Window handling */
		// Main loop condition
		virtual bool isOpen() const = 0;

		
		// Closes the window => stop loop (go menu)
		virtual bool closeRendering() = 0;
		
		// Opens the window => start loop
		virtual bool openRendering() = 0;
		
		// Clears the screen
		virtual void clearWindow() = 0;
		
		// Displays the buffered frame to the screen
		virtual void refreshWindow() = 0;
		
		/* Resources handling */
		// Initializes the library
		virtual bool initRenderer() = 0;
		
		// Unloads the library
		virtual bool stopRenderer() = 0;

		
		/* Rendering functions */
		// Draws a PixelBox or the sprite if supported
		virtual void drawPixelBox(PixelBox *) = 0;
		
		// Draws a TextBox
		virtual void drawText(TextBox *) = 0;

		
		/* Sound functions */
		// Plays sound passed in arg
		virtual void playSound(void *) = 0;
		
		// Pauses sound passed in arg
		virtual void pauseSound(void *) = 0;
		
		// Stops sound passed in arg
		virtual void stopSound(void *) = 0;

		
		/* Loading functions */
		// Returns a text font in the Graphics library format
		// or NULL if not supported
		virtual void *loadTextFont(std::string path) = 0;
		
		// Returns a sprite in the Graphics library format
		// or NULL if not supported
		virtual void *loadSprite(std::string path) = 0;
		
		// Returns a sound in the Graphics library format
		// or NULL if not supported
		virtual void *loadSound(std::string path) = 0;

		
		/* Events handling */
		// Gets the last saved event (used in render loop)
		virtual Keys getLastEvent() = 0;
		
		// Saves the event in the Graphics library
		virtual void pollEvent() = 0;
		
		// Deletes the last event
		virtual void cleanEvent() = 0;

		
		/* Context Info */
		// get the X and Y max of the windows
		virtual Vect<size_t> getScreenSize() const = 0;
		
		// get the Y max of the windows
		virtual int getMaxY() const = 0;
		
		// get the X max of the windows
		virtual int getMaxX() const = 0;
	};
};
