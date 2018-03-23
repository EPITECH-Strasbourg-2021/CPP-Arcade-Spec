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
	class TextBox {
	public:
		TextBox(std::string const &text, size_t h, size_t w,
			size_t posH, size_t posW);
		~TextBox() = default;
		const std::string &getValue() const;
		void setValue(std::string const &text);

		size_t getH() const;
		size_t getPosH() const;
		void setH(size_t height);
		void setPosH(size_t posH);

		size_t getW() const;
		size_t getPosW() const;
		void setW(size_t width);
		void setPosW(size_t posW);

		Color getColor() const;
		void setColor(Color color);
	private:
		std::string _value;
		Color _color;
		Vect<size_t> _size;
		Vect<size_t> _pos;
	};
};
