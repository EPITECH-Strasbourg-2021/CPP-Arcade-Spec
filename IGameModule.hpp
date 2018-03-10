/*
** EPITECH PROJECT, 2018
** arcade
** File description:
** arcade
*/

#pragma once

#include "IGraphicLib.hpp"

namespace Arcade {
	class IGameModule {
	public:
		/* Resource Handling */
		// Initializes the Graphics library for this game
		virtual void loadRessource(IGraphicLib *graphicsLib) = 0;

		// Unloads the Graphics library for this game
		virtual void freeRessource(IGraphicLib *graphicsLib) = 0;


		/* Rendering functions */
		// Updates the game state according to the player inputs
		virtual void update(IGraphicLib *graphicsLib) = 0;

		// Renders the game state to the screen
		virtual void render(IGraphicLib *graphicsLib) = 0;
	};
};
