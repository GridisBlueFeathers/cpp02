/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svereten <svereten@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 13:40:42 by svereten          #+#    #+#             */
/*   Updated: 2025/05/02 15:58:05 by svereten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Point.hpp"

static Fixed	triangle_area(Point const a, Point const b, Point const c) {
	Fixed res;

	res = a.getX() * (b.getY() - c.getY())
		+ b.getX() * (c.getY() - a.getY())
		+ c.getX() * (a.getY() - b.getY());
	if (res.toFloat() < 0)
		res = res * -1;
	res = res / 2;
	return (res);
}

static bool	pointOnLine(Point const a, Point const b, Point const point) {
	bool	res;

	res = (a.getX() - point.getX())*(point.getY() - b.getY())
		== (point.getX() - b.getX())*(a.getY() - point.getY());
	return (res);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point) {
	if(pointOnLine(a, b, point) || pointOnLine(a, c, point)
		|| pointOnLine(b, c, point))
		return (false);

	Fixed	area = triangle_area(a, b, c);
	Fixed	sub_area_sum = triangle_area(a, b, point)
		+ triangle_area(a, c, point)
		+ triangle_area(b, c, point);

	if (area == sub_area_sum)
		return (true);
	return (false);
}
