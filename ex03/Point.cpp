/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 21:47:46 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/05/24 18:40:46 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0)
{
	return;
}

Point::~Point(void)
{
	return;
}

Point::Point(float const x, float const y) : _x(x), _y(y)
{
	return;
}

Point::Point(Point const &p)
{
	*this = p;
	return;
}

Point &Point::operator=(Point const &p)
{
	if (this != &p)
	{
		(Fixed) this->_x = (Fixed)p._x;
		(Fixed) this->_y = (Fixed)p._y;
	}
	return *this;
}

Fixed const &Point::getX(void) const
{
	return this->_x;
}

Fixed const &Point::getY(void) const
{
	return this->_y;
}