/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 21:47:46 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/05/23 21:52:24 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void ) : _x(0), _y(0)
{
	return;
}

Point::~Point( void )
{
	return;
}

Point::Point( float const x, float const y ) : _x(x), _y(y)
{
	return;
}

Point::Point( Point const & p)
{
	
}
