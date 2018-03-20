/*
** EPITECH PROJECT, 2018
** arcade
** File description:
** arcade
*/

#pragma once

#include "IGraphicLib.hpp"

namespace Arcade {
	class IGameLib {
	public:
		IGameLib() {};
		virtual ~IGameLib() {};

		/* Get the name of the game */
		virtual std::string getName() = 0;


		/* Resources handling */
		// Initializes the library
		virtual bool initGame() = 0;

		// Unloads the library
		virtual bool stopGame() = 0;

		// Closes the game => stop loop (go menu)
		virtual bool closeGame() = 0;

		// Opens the game => start loop
		virtual bool openGame() = 0;

		// Main loop of the game, called by a while in the core
		// Returns false if the game has to be ended
		virtual bool loop(IGraphicLib *graphicsLib) = 0;
	};
};
