/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 20:17:11 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/05/23 20:06:00 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed() : _value(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(int const n)
{
	std::cout << "Integer constructor called\n";
	this->_value = n << this->_fractBits;
	return;
}

Fixed::Fixed(float const n)
{
	std::cout << "Float constructor called\n";
	this->_value = (int)roundf(n * (1 << this->_fractBits));
	return;
}


Fixed & Fixed::operator= (const Fixed &number)
{
	std::cout << "Assignation operator called\n";
	this->_value = number.getRawBits();
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
	this->_value = raw;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return this->_value;
}

float Fixed::toFloat( void ) const
{
	return (((float)this->_value / (1 << this->_fractBits)));
}

int Fixed::toInt( void ) const
{
	return (this->_value >> this->_fractBits);
}

std::ostream &operator<<(std::ostream &out, const Fixed &value)
{
	out << value.toFloat();
	return (out);
}

bool Fixed::operator> (const Fixed & n)
{
	if (this->_value > n._value)
		return true;
	return false;
}

bool Fixed::operator>= (const Fixed &n)
{
	if (this->_value >= n._value)
		return true;
	return false;

}

bool Fixed::operator< (const Fixed &n)
{
	if (this->_value < n._value)
		return true;
	return false;
}

bool Fixed::operator<= (const Fixed &n)
{
	if (this->_value <= n._value)
		return true;
	return false;
}

bool Fixed::operator== (const Fixed &n)
{
	if (this->_value == n._value)
		return true;
	return false;
}
bool Fixed::operator!= (const Fixed &n)
{
	if (this->_value != n._value)
		return true;
	return false;
}

Fixed & Fixed::operator+(const Fixed &n)
{
	this->_value += n._value;
	return (*this);
}

Fixed & Fixed::operator-(const Fixed &n)
{
	this->_value -= n._value;
	return (*this);
}

Fixed & Fixed::operator*(const Fixed &n)
{
	long tmp1 = (long)this->getRawBits();
	long tmp2 = (long)n.getRawBits();

	this->setRawBits((tmp1 * tmp2) / (1 << this->_fractBits));
    return (*this);
}

Fixed & Fixed::operator/(const Fixed &n)
{
	long tmp = (long)this->getRawBits();
	long tmp2 = (long)n.getRawBits();

	this->setRawBits((tmp * (1 << this->_fractBits)) / tmp2);
	return (*this);
}

//FIXME: Revisar que este bien

void Fixed::operator++ ( void )
{
	this->_value++;
}

void Fixed::operator++ ( int n )
{
	this->_value++;
}

void Fixed::operator-- ( void )
{
	this->_value--;
}

void Fixed::operator-- ( int )
{
	this->_value--;
}

Fixed::min(Fixed & n1, Fixed & n2)
{

}