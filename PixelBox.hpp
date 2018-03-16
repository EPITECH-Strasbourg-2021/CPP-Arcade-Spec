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
		size_t &getHeight() const;
		size_t &getY() const;
		void setHeight(size_t height);
		void setY(size_t y);

		size_t &getWidth() const;
		size_t &getX() const;
		void setWidth(size_t width);
		void setX(size_t x);

		void putPixel(Vect<size_t> pos, Color col);
		Color &getPixel(Vect<size_t> pos) const;

		const Color *getPixels() const;
	private:
		Color *_colorTab;
		Vect<size_t> _size;
		Vect<size_t> _pos;
	};
};
