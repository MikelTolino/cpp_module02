/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 20:16:57 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/05/24 23:52:44 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#define X 5
#define Y 5

bool bsp(Point const a, Point const b, Point const c, Point const p);

int main(void)
{
	Point a;
	Point b(1.23f, 3.15f);
	Point c(3, 1);

	if (bsp(a, b, c, Point(X, Y)))
		std::cout << "P[" << X << ", " << Y << "] -> It's in triangle\n";
	else
		std::cout << "P[" << X << ", " << Y << "] -> It's not in triangle\n";
	return 0;
}
