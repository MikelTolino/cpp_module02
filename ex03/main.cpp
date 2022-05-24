/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 20:16:57 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/05/24 18:46:33 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const p);

int main(void)
{
	Point a();
	Point b(1.23f, 3.15f);
	Point c(3, 1);

	bsp(a, b, c, Point(4, 5));
	return 0;
}
