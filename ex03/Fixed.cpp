/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svereten <svereten@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 15:57:00 by svereten          #+#    #+#             */
/*   Updated: 2025/05/02 16:04:23 by svereten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(): _value(0) {
	if (DEBUG)
		std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &fixed): _value(fixed._value) {
	if (DEBUG)
		std::cout << "Copy constructor called\n";
}

Fixed::Fixed(const int value) {
	if (DEBUG)
		std::cout << "Int constructor called\n";

	_value = value;
	_value <<= _fractionNum;
}

Fixed::Fixed(const float value) {
	if (DEBUG)
		std::cout << "Float constructor called\n";
	
	_value = static_cast<int>(roundf(value * (1 << _fractionNum)));
}

Fixed::~Fixed() {
	if (DEBUG)
		std::cout << "Destructor called\n";
}

Fixed &Fixed::operator=(const Fixed &fixed) {
	if (DEBUG)
		std::cout << "Copy assignment operator called\n";
	if (this != &fixed) {
		_value = fixed._value;
	}
	return *this;
}

bool	Fixed::operator<(const Fixed &fixed) const {
	return (_value < fixed._value);
}

bool	Fixed::operator>(const Fixed &fixed) const {
	return (_value > fixed._value);
}

bool	Fixed::operator<=(const Fixed &fixed) const {
	return (_value <= fixed._value);
}

bool	Fixed::operator>=(const Fixed &fixed) const {
	return (_value >= fixed._value);
}

bool	Fixed::operator!=(const Fixed &fixed) const {
	return (_value != fixed._value);
}

bool	Fixed::operator==(const Fixed &fixed) const {
	return (_value == fixed._value);
}

Fixed	Fixed::operator+(const Fixed &fixed) const {
	Fixed	res;

	res.setRawBits(_value + fixed._value);
	return (res);
}

Fixed	Fixed::operator-(const Fixed &fixed) const {
	Fixed	res;

	res.setRawBits(_value - fixed._value);
	return (res);
}

Fixed	Fixed::operator*(const Fixed &fixed) const {
	return (Fixed(this->toFloat() * fixed.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &fixed) const {
	return (Fixed(this->toFloat() / fixed.toFloat()));
}

Fixed	Fixed::operator++() {
	_value++;
	return (*this);
}

Fixed	Fixed::operator++(int) {
	Fixed	tmp(*this);
	_value++;
	return (tmp);
}

Fixed	Fixed::operator--() {
	_value--;
	return (*this);
}

Fixed	Fixed::operator--(int) {
	Fixed	tmp(*this);
	_value--;
	return (tmp);
}

Fixed	&Fixed::min(Fixed &one, Fixed &two) {
	return (one < two ? one : two);
}

const Fixed	&Fixed::min(const Fixed &one, const Fixed &two) {
	return (one < two ? one : two);
}

Fixed	&Fixed::max(Fixed &one, Fixed &two) {
	return (one > two ? one : two);
}

const Fixed	&Fixed::max(const Fixed &one, const Fixed &two) {
	return (one > two ? one : two);
}

float	Fixed::toFloat(void) const {
	float	res;

	res = static_cast<float>(_value) / (1 << _fractionNum);
	return (res);
}

int	Fixed::toInt(void) const {
	int	res;

	res = _value >> _fractionNum;
	return (res);
}

int	Fixed::getRawBits(void) const {
	if (DEBUG)
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
