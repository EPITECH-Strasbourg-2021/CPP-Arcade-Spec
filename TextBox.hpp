/*
** EPITECH PROJECT, 2018
** arcade
** File description:
** arcade
*/

#pragma once

#include <string>
#include "Vect.hpp"

namespace Arcade {
	class TextBox {
	public:
		TextBox(std::string const &text, Vect<size_t> size,
			Vect<size_t> pos);
		~TextBox() = default;

		const std::string &getValue() const;
		void setValue(std::string const &text);

		size_t getHeight() const;
		size_t getY() const;
		void setHeight(size_t height);
		void setY(size_t y);

		size_t getWidth() const;
		size_t getX() const;
		void setWidth(size_t width);
		void setX(size_t x);

		Vect<size_t> getPos() const;
		void setPos(Vect<size_t> pos);

		Vect<size_t> getSize() const;
		void setSize(Vect<size_t> size);

	private:
		std::string _value;
		Vect<size_t> _size;
		Vect<size_t> _pos;
	};
};
