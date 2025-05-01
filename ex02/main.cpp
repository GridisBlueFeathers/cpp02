/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svereten <svereten@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 15:58:00 by svereten          #+#    #+#             */
/*   Updated: 2025/05/01 19:14:31 by svereten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Fixed.hpp"
#include <cmath>
#include <iostream>

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;

	std::cout << "a < b: " << (a < b) << std::endl;
	std::cout << "a > b: " << (a > b) << std::endl;
	std::cout << "a <= b: " << (a <= b) << std::endl;
	std::cout << "a >= b: " << (a >= b) << std::endl;
	std::cout << "a != b: " << (a != b) << std::endl;
	std::cout << "a == b: " << (a == b) << std::endl;

	std::cout << "a: " << a << std::endl;
	std::cout << "a: " << ++a << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "a: " << a++ << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;

	std::cout << "a + b: " << (a + b) << std::endl;
	std::cout << "a - b: " << (a - b) << std::endl;
	std::cout << "a * b: " << (a * b) << std::endl;
	std::cout << "a / b: " << (a / b) << std::endl;
	std::cout << "b / a: " << (b / a) << std::endl;

	Fixed	c(0.4f);
	std::cout << "c: " << c << std::endl;
	std::cout << "0.4f: " << 0.4 * 256 << std::endl;
	std::cout << "0.4f: " << roundf(0.4 * 256) << std::endl;
	std::cout << "0.4f: " << roundf(0.4 * 256) / 256 << std::endl;

	Fixed	d;
	
	std::cout << "d: " << d << std::endl;
	std::cout << "d: " << --d << std::endl;
	std::cout << "d: " << d << std::endl;
	std::cout << "d: " << d-- << std::endl;
	std::cout << "d: " << d << std::endl;

	Fixed	overflow;

	overflow.setRawBits(2147483647);

	std::cout << "overflow: " << overflow << std::endl;
	std::cout << "overflow: " << ++overflow << std::endl;

	std::cout << "Fixed::max(a, b): " << Fixed::max( a, b ) << std::endl;
	std::cout << "Fixed::min(a, b): " << Fixed::min( a, b ) << std::endl;
	return 0;
}
