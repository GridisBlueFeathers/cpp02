/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svereten <svereten@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 12:57:47 by svereten          #+#    #+#             */
/*   Updated: 2025/05/02 14:27:39 by svereten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point {
public:
	Point();
	Point(const float x, const float y);
	Point(const Point &point);
	~Point();

	// Doesn't really work because all members are const
	Point &operator=(const Point &point);

	const Fixed	&getX(void) const;
	const Fixed	&getY(void) const;

private:
	const Fixed _x;
	const Fixed _y;
};

#endif 
