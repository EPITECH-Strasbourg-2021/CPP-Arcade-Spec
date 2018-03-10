/*
** EPITECH PROJECT, 2018
** arcade
** File description:
** arcade
*/

#pragma once

#include <string>
#include "Color.hpp"
#include "Vect.hpp"

namespace Arcade {
	class PixelBox {
	public:
		PixelBox(size_t height, size_t width, size_t posW,
			size_t posH);
		size_t getH() const;
		size_t getPosH() const;
		void setH(size_t height);
		void setPosH(size_t posH);

		size_t getW() const;
		size_t getPosW() const;
		void setW(size_t width);
		void setPosW(size_t posW);

		void setColor(Color &color);
		Color &getColor();
		void setSprite(void *sprite);
		void *getSprite();

	private:
		void *_sprite;
		Color _color;
		Vect<size_t> _size;
		Vect<size_t> _pos;
	};
};
