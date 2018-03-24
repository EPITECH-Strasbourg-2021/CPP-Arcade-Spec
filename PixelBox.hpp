/*
** EPITECH PROJECT, 2018
** arcade
** File description:
** arcade
*/

#pragma once

#include <string>
#include <vector>
#include "Color.hpp"
#include "Vect.hpp"

namespace Arcade {
	class PixelBox {
	public:
		PixelBox(Vect<size_t> size = Vect<size_t>(),
			Vect<size_t> pos = Vect<size_t>(),
			Color col = Color(255, 255, 255, 255));
		~PixelBox() = default;

		size_t getHeight() const;
		size_t getY() const;
		void setHeight(size_t height);
		void setY(size_t y);

		size_t getWidth() const;
		size_t getX() const;
		void setWidth(size_t width);
		void setX(size_t x);

		Vect<size_t> getSize() const;
		void setSize(Vect<size_t> size);
		Vect<size_t> getPos() const;
		void setPos(Vect<size_t> pos);

		void putPixel(Vect<size_t> pos, Color col);
		Color getPixel(Vect<size_t> pos) const;

		void putRect(Vect<size_t> pos, Vect<size_t> size, Color col);

		std::vector<Color> &getPixelArray();

	private:
		std::vector<Color> _colorFrame;
		Vect<size_t> _size;
		Vect<size_t> _pos;
	};
};
