/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 20:17:02 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/05/23 00:22:53 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	private:
		int _integer;
		static const int _fractBits = 8;
	public:
		Fixed( void );
		Fixed(const Fixed& );
		Fixed & operator= (const Fixed & );
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits ( int const );
};

#endif
