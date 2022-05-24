/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 20:16:57 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/05/24 17:24:51 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	{
		Fixed a;
		Fixed const b(Fixed(5.05f) * Fixed(2));

		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;

		std::cout << Fixed::max(a, b) << std::endl;
	}

	{
		std::cout << "\n";
		Fixed a(3);
		Fixed b(4.23f);

		std::cout << "A: " << a << std::endl;
		std::cout << "B: " << b << std::endl;

		std::cout << "Min: " << Fixed::min(a, b) << std::endl;
		std::cout << "Max: " << Fixed::max(a, b) << std::endl;
		if (a > b || a >= b)
			std::cout << "(a > b || a >= b)? KO\n";
		if (a < b || a <= b)
			std::cout << "(a < b || a <= b)? OK\n";
		if (a != b)
			std::cout << "(a != b) OK\n";
		if (a == b)
			std::cout << "(a == b) KO\n";
	}
	return 0;
}
