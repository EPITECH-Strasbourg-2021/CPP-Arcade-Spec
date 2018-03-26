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
		TextBox(std::string const &text, Vect<size_t> pos,
			size_t fontSize = 30,
			Color color = Color(255, 255, 255, 255),
			Color backgroundColor = Color(0, 0, 0, 255));
		~TextBox() = default;

		const std::string &getValue() const;
		void setValue(std::string const &text);

		Vect<size_t> getPos() const;
		void setPos(Vect<size_t> pos);

		size_t getX() const;
		size_t getY() const;
		void setX(size_t x);
		void setY(size_t y);

		size_t getFontSize() const;
		void setFontSize(size_t size);

		Color getColor() const;
		void setColor(Color color);

		Color getBackgroundColor() const;
		void setBackgroundColor(Color color);

	private:
		std::string _value;
		Vect<size_t> _pos;
		size_t _size;
		Color _color;
		Color _bgColor;
	};
};
