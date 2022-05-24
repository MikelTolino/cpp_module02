/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 20:17:02 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/05/24 17:13:20 by mmateo-t         ###   ########.fr       */
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

	//Constructors
		Fixed( void );
		Fixed ( int const );
		Fixed ( float const );
		Fixed(const Fixed& );
		Fixed & operator= (const Fixed & );

	//Destructor
		~Fixed();

	//Member functions
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

		// + - * / ++ --
		Fixed & operator+(const Fixed &);
		Fixed & operator-(const Fixed &);
		Fixed & operator*(const Fixed &);
		Fixed & operator/(const Fixed &);
		Fixed & operator++ ( void );
		Fixed operator++(int);
		Fixed & operator-- ( void );
		Fixed operator-- ( int );

		//Max, min
		static Fixed const &min(Fixed const &a, Fixed const &b);
		static Fixed const &max(Fixed const &a, Fixed const &b);
		static Fixed &min(Fixed &a, Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
};

std::ostream &operator<<(std::ostream &, const Fixed &);

#endif
