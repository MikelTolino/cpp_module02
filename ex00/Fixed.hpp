/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 20:17:02 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/04/25 13:02:03 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Fixed
{
private:
	int integer;
	static const int fract_bits = 8;
public:
	Fixed();
	Fixed(const Fixed& );
	Fixed& operator= (const Fixed& );
	~Fixed();
	int getRawBits( void ) const;
	void setRawBits ( int const );
};
