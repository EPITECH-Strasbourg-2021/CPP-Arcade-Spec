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
		virtual ~IGameLib() = default;

		/* Get the name of the game */
		virtual const std::string &getName() const = 0;


		/* Resources handling */
		// Initializes the library
		virtual bool init() = 0;

		// Unloads the library
		virtual bool stop() = 0;

		// Closes the game => stop loop (go menu)
		virtual bool close() = 0;

		// Opens the game => start loop
		virtual bool open() = 0;

		// Main loop of the game, called by a while in the core
		// Returns false if the game has to be ended
		virtual bool loop(IGraphicLib *graphicsLib) = 0;
	};
};
