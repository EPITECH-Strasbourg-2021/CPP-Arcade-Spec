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
		virtual const std::string getName() const = 0;
		
		/* Resources handling */
		// Initializes the library
		virtual bool init() = 0;

		// Unloads the library
		virtual bool stop() = 0;

		// Processes the key obtained by the IGraphicLib from the user to update the game state
		virtual bool applyEvent(Keys key) = 0;
		
		// Updates the game state. (Move the player forward and/or move the NPCs)
		virtual bool update() = 0;
		
		// Renders the game state to the screen. This should call IGraphicLib::refresh() to display content to the user.
		virtual void refresh(IGraphicLib &graphicLib) = 0;
		
		// To call at the end of the execution of the game (after the player loose or win) for getting his score
		virtual size_t getScore() = 0;
	};
};
