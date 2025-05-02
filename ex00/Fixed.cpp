/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svereten <svereten@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 15:36:44 by svereten          #+#    #+#             */
/*   Updated: 2025/05/02 16:01:48 by svereten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(): _value(0) {
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(Fixed &fixed): _value(fixed._value) {
	std::cout << "Copy constructor called\n";
}

Fixed &Fixed::operator=(Fixed &fixed) {
	std::cout << "Copy assignment operator called\n";
	if (this != &fixed) {
		_value = fixed.getRawBits();
	}
	return *this;
}

Fixed::~Fixed() {
	std::cout << "Destructor called\n";
}

int	Fixed::getRawBits(void) {
	std::cout << "getRawBits member function called\n";
	return (_value);
}

void	Fixed::setRawBits(const int raw) {
	_value = raw;
}
