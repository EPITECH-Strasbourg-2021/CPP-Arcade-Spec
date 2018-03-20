/*
** EPITECH PROJECT, 2018
** arcade
** File description:
** arcade
*/

#pragma once

#include <string>
#include <unordered_map>
#include <vector>
#include "Color.hpp"
#include "Vect.hpp"

namespace Arcade {
	class PixelBox {
	public:
		PixelBox(size_t height, size_t width, size_t posW,
			size_t posH);
		~PixelBox() = default;

		size_t getHeight() const;
		size_t getY() const;
		void setHeight(size_t height);
		void setY(size_t y);

		size_t getWidth() const;
		size_t getX() const;
		void setWidth(size_t width);
		void setX(size_t x);

		void putPixel(Vect<size_t> pos, Color col);
		Color getPixel(Vect<size_t> pos);

		std::vector<Color> getPixelArray();
		std::unordered_map<Vect<size_t>, Color> &getPixelMap();
	private:
		std::unordered_map<Vect<size_t>, Color> _colorTab;
		Vect<size_t> _size;
		Vect<size_t> _pos;
	};
};
