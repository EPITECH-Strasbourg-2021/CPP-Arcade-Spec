/*
** EPITECH PROJECT, 2018
** arcade
** File description:
** arcade
*/

/*!
 * @file IGameLib.hpp
 * @brief Game libraries dedicated class interface
 * @authors https://github.com/EPITECH-Strasbourg-2021/CPP-Arcade-Spec
 *
 * Interface used by game libraries.
 * All functions must be implemented correctly for the kernel to handle the game libraries.
 *
 */

#pragma once

#include "IGraphicLib.hpp"

/*!
 * @namespace Arcade
 * @brief Arcade project namespace
 */
namespace Arcade {

	/*!
	 * @class IGameLib
	 * @brief Game libraries virtual class
	 *
	 * Purely virtual class that serves as the basis for all game libraries
	 *
	 */

	class IGameLib {
	public:

		/*!
		 * @brief Destructor
		 *
		 * IGameLib class's destructor
		 *
		 */
		virtual ~IGameLib() = default;

		/*!
		 * @brief Game name's getter
		 * @return a string containing the name of the game
		 */
		virtual const std::string getName() const = 0;
		
		/* Resources handling */
		/*!
		 * @brief Init the resources needed by the game to run
		 * @return true if succeed, otherwise returns false
		 */
		virtual bool init() = 0;

		/*!
		 * @brief Unloads the library
		 * @return true if succeed, otherwise returns false
		 */
		virtual bool stop() = 0;

		/*!
		 * @brief Processes the key obtained by the IGraphicLib from the user to update the game state
		 * @param key : enum value of the obtained key
		 * @return true if the game is still in progress, false in case of defeat
		 */
		virtual bool applyEvent(Arcade::Keys key) = 0;
		
		/*!
		 * @brief Updates the game state.
		 * @return true if the game is still in progress, false in case of defeat
		 *
		 * Move the player forward and/or move the NPCs, according to the game's rules
		 *
		 */
		virtual bool update() = 0;
		
		/*!
		 * Renders the game state to the screen.
		 * @param graphicLib : Loaded graphics library used for rendering.
		 *
		 * This should call IGraphicLib::refresh() to display content to the user.
		 *
		 */
		virtual void refresh(IGraphicLib &graphicLib) = 0;

		/*!
		 * @brief Current player score's getter
		 * @return the player score
		 *
		 * To call at the end of the execution of the game (after the player loose or win) for getting his score
		 *
		 */
		virtual size_t getScore() = 0;
	};
};
