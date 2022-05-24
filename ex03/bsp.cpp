/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 18:21:35 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/05/24 23:39:57 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float sign(Point const p1, Point const p2, Point const p3)
{
	return (p1.getX().toFloat() - p3.getX().toFloat()) * (p2.getY().toFloat() - p3.getY().toFloat())
	- (p2.getX().toFloat() - p3.getX().toFloat()) * (p1.getY().toFloat() - p3.getY().toFloat());
}

bool bsp(const Point v1, const Point v2, const Point v3, const Point pt)
{
	float d1;
	float d2;
	float d3;
	bool b1;
	bool b2;

	d1 = sign(pt, v1, v2);
	d2 = sign(pt, v2, v3);
	d3 = sign(pt, v3, v1);

	b1 = (d1 < 0) || (d2 < 0) || (d3 < 0);
	b2 = (d1 > 0) || (d2 > 0) || (d3 > 0);
	return (!(b1 && b2));
}
