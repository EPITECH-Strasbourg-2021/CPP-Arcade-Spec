/*
** EPITECH PROJECT, 2018
** arcade
** File description:
** arcade
*/

#pragma once

namespace Arcade {
	template<typename T>
	class Vect {
	public:
		Vect(T x = 0, T y = 0)
		{
			setXY(x, y);
		};


		void setXY(T x = 0, T y = 0)
		{
			setX(x);
			setY(y);
		};

		void setX(T x = 0)
		{
			_x = x;
		};

		void setY(T y = 0)
		{
			_y = y;
		};


		T getX() const
		{
			return _x;
		};

		T getY() const
		{
			return _y;
		};


		bool operator==(const Vect<T> &other) const
		{
			return (_x == other._x && _y == other._y);
	    	}
	private:
		T _x;
		T _y;
	};
};
