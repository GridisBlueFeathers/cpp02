/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svereten <svereten@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 13:00:14 by svereten          #+#    #+#             */
/*   Updated: 2025/05/02 15:37:33 by svereten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Point.hpp"

Point::Point(): _x(0), _y(0) {}

Point::Point(const float x, const float y): _x(x), _y(y) {}

Point::Point(const Point &point): _x(point._x), _y(point._y) {}

Point::~Point(void) {}

Point	&Point::operator=(const Point &point) {
	(void)point;
	return (*this);
}

const Fixed	&Point::getX(void) const {
	return (_x);
}

const Fixed	&Point::getY(void) const {
	return (_y);
}
