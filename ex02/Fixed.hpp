/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 20:17:02 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/05/23 20:05:21 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int _value;
		static const int _fractBits = 8;
	public:
		Fixed( void );
		Fixed ( int const );
		Fixed ( float const );
		Fixed(const Fixed& );
		Fixed & operator= (const Fixed & );
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits ( int const );
		float toFloat( void ) const;
		int toInt( void ) const;
		// >, <, >=, <=, == y
		bool operator> (const Fixed &);
		bool operator>= (const Fixed &);
		bool operator< (const Fixed &);
		bool operator<= (const Fixed &);
		bool operator== (const Fixed &);
		bool operator!= (const Fixed &);
		Fixed & operator+(const Fixed &);
		Fixed & operator-(const Fixed &);
		Fixed & operator*(const Fixed &);
		Fixed & operator/(const Fixed &);
		void operator++ ( void );
		void operator++(int);
		void operator-- ( void );
		void operator-- ( int );

		static Fixed & min(Fixed & const, Fixed & const);
		static Fixed & max(Fixed & const, Fixed & const);
};

std::ostream &operator<<(std::ostream &, const Fixed &);

#endif
