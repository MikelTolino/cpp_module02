/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 20:17:11 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/04/25 13:01:46 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed()
{
	this->integer = 0;
	std::cout << "Default constructor called\n";
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