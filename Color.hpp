/*
** EPITECH PROJECT, 2018
** arcade
** File description:
** arcade
*/

#pragma once

namespace Arcade {
	class Color {
	public:
		Color(unsigned char red = 0, unsigned char green = 0,
			unsigned char blue = 0, unsigned char alpha = 0);
		void setColor(unsigned char red = 0, unsigned char green = 0,
			unsigned char blue = 0, unsigned char alpha = 0);
		unsigned char getRed() const;
		unsigned char getGreen() const;
		unsigned char getBlue() const;
		unsigned char getAlpha() const;
		void setRed(unsigned char red);
		void setGreen(unsigned char green);
		void setBlue(unsigned char blue);
		void setAlpha(unsigned char alpha);
		operator unsigned char *();
		bool operator==(const Arcade::Color &other) const;

	private:
		unsigned char _red;
		unsigned char _green;
		unsigned char _blue;
		unsigned char _alpha;
	};
};
