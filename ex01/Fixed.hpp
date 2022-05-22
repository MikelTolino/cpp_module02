/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 20:17:02 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/04/27 12:35:21 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cmath>

class Fixed
{
private:
	int integer;
	static const int fract_bits = 8;
public:
	Fixed();
	Fixed(const Fixed& );
	Fixed( const int );
	Fixed( const float );
	Fixed& operator= (const Fixed& );
	float operator<< ( const Fixed& );
	~Fixed();
	int getRawBits( void ) const;
	void setRawBits ( int const );
/* 	float toFloat( void ) const;
	int toInt( void ) const; */
};
