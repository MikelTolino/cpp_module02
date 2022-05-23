/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 20:17:11 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/05/23 23:53:20 by mmateo-t         ###   ########.fr       */
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

Fixed &Fixed::operator=(const Fixed &number)
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

float Fixed::toFloat(void) const
{
	return (((float)this->_value / (1 << this->_fractBits)));
}

int Fixed::toInt(void) const
{
	return (this->_value >> this->_fractBits);
}

std::ostream &operator<<(std::ostream &out, const Fixed &value)
{
	out << value.toFloat();
	return (out);
}

bool Fixed::operator>(const Fixed &n)
{
	if (this->_value > n._value)
		return true;
	return false;
}

bool Fixed::operator>=(const Fixed &n)
{
	if (this->_value >= n._value)
		return true;
	return false;
}

bool Fixed::operator<(const Fixed &n)
{
	if (this->_value < n._value)
		return true;
	return false;
}

bool Fixed::operator<=(const Fixed &n)
{
	if (this->_value <= n._value)
		return true;
	return false;
}

bool Fixed::operator==(const Fixed &n)
{
	if (this->_value == n._value)
		return true;
	return false;
}
bool Fixed::operator!=(const Fixed &n)
{
	if (this->_value != n._value)
		return true;
	return false;
}

Fixed &Fixed::operator+(const Fixed &n)
{
	this->_value += n._value;
	return (*this);
}

Fixed &Fixed::operator-(const Fixed &n)
{
	this->_value -= n._value;
	return (*this);
}

Fixed &Fixed::operator*(const Fixed &n)
{
	long tmp1 = (long)this->getRawBits();
	long tmp2 = (long)n.getRawBits();

	this->setRawBits((tmp1 * tmp2) / (1 << this->_fractBits));
	return (*this);
}

Fixed &Fixed::operator/(const Fixed &n)
{
	long tmp = (long)this->getRawBits();
	long tmp2 = (long)n.getRawBits();

	this->setRawBits((tmp * (1 << this->_fractBits)) / tmp2);
	return (*this);
}

// prefix increment
Fixed & Fixed::operator++()
{
	this->_value++;// actual increment takes place here
	return *this; // return new value by reference
}

// postfix increment
Fixed Fixed::operator++(int)
{
	Fixed old = *this; // copy old value
	operator++();  // prefix increment
	return old;	   // return old value
}

// prefix decrement
Fixed &Fixed::operator--()
{
	this->_value--;// actual decrement takes place here
	return *this; // return new value by reference
}

// postfix decrement
Fixed Fixed::operator--(int)
{
	Fixed old = *this; // copy old value
	operator--();  // prefix decrement
	return old;	   // return old value
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a._value > b._value)
		return (b);
	return (a);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a._value > b._value)
		return (b);
	return (a);
}

Fixed const &min(Fixed const &a, Fixed const &b)
{
	return (Fixed::min(a, b));
}

Fixed &min(Fixed &a, Fixed &b)
{
	return (Fixed::min(a, b));
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a._value > b._value)
		return (a);
	return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a._value > b._value)
		return (a);
	return (b);
}

Fixed const &max(Fixed const &a, Fixed const &b)
{
	return (Fixed::max(a, b));
}

Fixed &max(Fixed &a, Fixed &b)
{
	return (Fixed::max(a, b));
}