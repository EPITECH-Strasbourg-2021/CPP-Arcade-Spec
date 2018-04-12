/*
** EPITECH PROJECT, 2018
** arcade
** File description:
** arcade
*/

/*!
 * @file Vect.hpp
 * @brief Project-specific vector template
 * @authors https://github.com/EPITECH-Strasbourg-2021/CPP-Arcade-Spec
 *
 * Template used to store and perform arithmetic operations on coordinates.
 *
 */

#pragma once

/*!
 * @namespace Arcade
 * @brief Arcade project namespace
 */
namespace Arcade {
	template<typename T>
	/*!
	 * @class Vect
	 * @brief Vect class template
	 *
	 * Mainly used to store and manage 2 coordinates
	 *
	 */
	class Vect {
	public:

		/*!
		 * @brief Vect class template's constructor
		 * @param x : coordinate X
		 * @param y : coordinate Y
		 */
		explicit Vect(T x = 0, T y = 0)
		{
			setXY(x, y);
		};

		/*!
		 * @brief Vect class template's coordinates's setter
		 * @param x : new X coordinate
		 * @param y : new Y coordinate
		 */
		void setXY(T x = 0, T y = 0)
		{
			setX(x);
			setY(y);
		};

		/*!
		 * @brief Vect class template's X coordinate's setter
		 * @param x : new X coordinate
		 */
		void setX(T x = 0)
		{
			_x = x;
		};

		/*!
		 * @brief Vect class template's Y coordinate's setter
		 * @param x : new Y coordinate
		 */
		void setY(T y = 0)
		{
			_y = y;
		};

		/*!
		 * @brief Vect class template's X coordinate's getter
		 * @return the value of the X coordinate
		 */
		T getX() const
		{
			return _x;
		};

		/*!
		 * @brief Vect class template's Y coordinate's getter
		 * @return the value of the Y coordinate
		 */
		T getY() const
		{
			return _y;
		};

		/*!
		 * @brief Overloading the comparison operator
		 * @param other : the Vect object to compare with
		 * @return true if equal, otherwise returns false
		 */
		bool operator==(const Vect<T> &other) const
		{
			return (_x == other._x && _y == other._y);
		}

		/*!
		 * Overloading the addition operator
		 * @param other : the Vect object to perform the addition with
		 * @return a new object resulting from the addition of the Vect
		 */
		Vect<T> operator+(const Vect<T> &other) const
		{
			return Vect<T>(_x + other._x, _y + other._y);
		}

		/*!
		 * Overloading the subtraction operator
		 * @param other : the Vect object to perform the subtraction with
		 * @return a new object resulting from the subtraction of the Vect
		 */
		Vect<T> operator-(const Vect<T> &other) const
		{
			return Vect<T>(_x - other._x, _y - other._y);
		}

		/*!
		 * Overloading the multiplication operator
		 * @param other : the Vect object to perform the multiplication with
		 * @return a new object resulting from the multiplication of the Vect
		 */
		Vect<T> operator*(const Vect<T> &other) const
		{
			return Vect<T>(_x * other._x, _y * other._y);
		}

		/*!
		 * Overloading the division operator
		 * @param other : the Vect object to perform the division with
		 * @return a new object resulting from the division of the Vect
		 */
		Vect<T> operator/(const Vect<T> &other) const
		{
			return Vect<T>(_x / other._x, _y / other._y);
		}

		/*!
		 * Overloading the addition assignment operator
		 * @param other : the Vect object to perform the addition with
		 * @return the object from which this function was called
		 */
		Vect<T> &operator+=(const Vect<T> &other)
		{
			_x += other._x;
			_y += other._y;
			return *this;
		}

		/*!
		 * Overloading the subtraction assignment operator
		 * @param other : the Vect object to perform the subtraction with
		 * @return the object from which this function was called
		 */
		Vect<T> &operator-=(const Vect<T> &other)
		{
			_x -= other._x;
			_y -= other._y;
			return *this;
		}

		/*!
		 * Overloading the multiplication assignment operator
		 * @param other : the Vect object to perform the multiplication with
		 * @return the object from which this function was called
		 */
		Vect<T> &operator*=(const Vect<T> &other)
		{
			_x *= other._x;
			_y *= other._y;
			return *this;
		}

		/*!
		 * Overloading the division assignment operator
		 * @param other : the Vect object to perform the division with
		 * @return the object from which this function was called
		 */
		Vect<T> &operator/=(const Vect<T> &other)
		{
			_x /= other._x;
			_y /= other._y;
			return *this;
		}

		/*!
		 * Overloading the addition operator
		 * @param other : the T variable to perform the addition with
		 * @return a new object resulting from the addition
		 */
		Vect<T> operator+(const T &other) const
		{
			return Vect<T>(_x + other, _y + other);
		}

		/*!
		 * Overloading the subtraction operator
		 * @param other : the T variable to perform the subtraction with
		 * @return a new object resulting from the subtraction
		 */
		Vect<T> operator-(const T &other) const
		{
			return Vect<T>(_x - other, _y - other);
		}

		/*!
		 * Overloading the multiplication operator
		 * @param other : the T variable to perform the multiplication with
		 * @return a new object resulting from the multiplication
		 */
		Vect<T> operator*(const T &other) const
		{
			return Vect<T>(_x * other, _y * other);
		}

		/*!
		* Overloading the division operator
		* @param other : the T variable to perform the division with
		* @return a new object resulting from the division
		*/
		Vect<T> operator/(const T &other) const
		{
			return Vect<T>(_x / other, _y / other);
		}

		/*!
		 * Overloading the addition assignment operator
		 * @param other : the T variable to perform the addition with
		 * @return the object from which this function was called
		 */
		Vect<T> &operator+=(const T &other)
		{
			_x += other;
			_y += other;
			return *this;
		}

		/*!
		 * Overloading the subtraction assignment operator
		 * @param other : the T variable to perform the subtraction with
		 * @return the object from which this function was called
		 */
		Vect<T> &operator-=(const T &other)
		{
			_x -= other;
			_y -= other;
			return *this;
		}

		/*!
		 * Overloading the multiplication assignment operator
		 * @param other : the T variable to perform the multiplication with
		 * @return the object from which this function was called
		 */
		Vect<T> &operator*=(const T &other)
		{
			_x *= other;
			_y *= other;
			return *this;
		}

		/*!
		 * Overloading the division assignment operator
		 * @param other : the T variable to perform the division with
		 * @return the object from which this function was called
		 */
		Vect<T> &operator/=(const T &other)
		{
			_x /= other;
			_y /= other;
			return *this;
		}

	private:
		T _x;
		T _y;
	};
};
