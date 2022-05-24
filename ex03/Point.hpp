/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 21:45:00 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/05/24 18:20:14 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP
# include "Fixed.hpp"

class Point
{
private:
	Fixed const _x;
	Fixed const _y;
public:
	Point( void );
	Point( float const, float const);
	Point( Point const &);
	Point &operator= (const Point &);
	~Point( void );
	Fixed const &getX( void ) const;
	Fixed const &getY( void ) const;
};

#endif