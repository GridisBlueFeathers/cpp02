/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svereten <svereten@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 15:57:00 by svereten          #+#    #+#             */
/*   Updated: 2025/04/30 21:01:10 by svereten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Fixed.hpp"
#include <iostream>
#include <cmath>

int	Fixed::_fractionNum = 8;

Fixed::Fixed(): _value(0) {
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &fixed) {
	std::cout << "Copy constructor called\n";

	*this = fixed;
}

Fixed::Fixed(const int value) {
	std::cout << "Int constructor called\n";

	_value = value;
	_value <<= 8;
}

Fixed::Fixed(const float value) {
	std::cout << "Float constructor called\n";
	
	_value = static_cast<int>(roundf(value * 256));
}

Fixed &Fixed::operator=(const Fixed &fixed) {
	std::cout << "Copy assignment operator called\n";
	if (this != &fixed) {
		_fractionNum = fixed._fractionNum;
		_value = fixed._value;
	}
	return *this;
}

Fixed::~Fixed() {
	std::cout << "Destructor called\n";
}

float	Fixed::toFloat(void) const {
	float	res;

	res = static_cast<float>(_value) / (1 << 8);
	return (res);
}

int	Fixed::toInt(void) const {
	int	res;

	res = _value >> 8;
	return (res);
}

int	Fixed::getRawBits(void) {
	std::cout << "getRawBits member function called\n";
	return (_value);
}

void	Fixed::setRawBits(const int raw) {
	_value = raw;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed) {
	out << fixed.toFloat();
	return (out);
}
