/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 20:17:11 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/05/23 00:22:05 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed() : _integer(0)
{
	std::cout << "Default constructor called\n";
}

Fixed & Fixed::operator= (const Fixed &number)
{
	std::cout << "Assignation operator called\n";
	this->_integer = number.getRawBits();
	return (*this);
}

Fixed::Fixed(const Fixed &number)
{
	std::cout << "Copy constructor called\n";
	*this = number;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
	return;
}

void Fixed::setRawBits(int const raw)
{
	this->_integer = raw;
}

int Fixed::getRawBits(void) const
{

	std::cout << "getRawBits member function called\n";
	return this->_integer;
}