/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 20:17:11 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/04/27 12:36:21 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed()
{
	this->integer = 0;
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int integer )
{
	int fpart = 0;
	int fract = integer;
	fract = fract << fract_bits;
	this->integer = integer >> fract_bits;
	int i = -1;
	while (fract)
	{
		if (fract % 2)
		{
			fpart += (int) pow(2, i);
		}
		fract /= 2;
	}
	std::cout << "<Integer>.<fractional>\n" << this->integer << "." << fpart << "\n";
}

Fixed::Fixed(const float integer )
{
	this->integer = (int) integer;
	return;
}

Fixed& Fixed::operator= (const Fixed& number) {

	this->integer = number.integer;
	std::cout << "Assignation operator called\n";
	return *this;
}

Fixed::Fixed (const Fixed& number) {

	this->integer = number.integer;
	std::cout << "Copy constructor called\n";
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
	return;
}

void Fixed::setRawBits ( int const raw) {

	this->integer = raw;
}

int Fixed::getRawBits ( void ) const {

	std::cout << "getRawBits member function called\n";
	return this->integer;
}

/* int Fixed::toInt( void )
{
	this->integer
	return;
}

float Fixed::operator<< ( const Fixed& num )
{
	return toInt
	return;
} */