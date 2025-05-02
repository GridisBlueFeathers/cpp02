/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svereten <svereten@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 15:58:00 by svereten          #+#    #+#             */
/*   Updated: 2025/05/02 15:58:03 by svereten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Point.hpp"
#include <cmath>
#include <iostream>

bool	bsp(Point const a, Point const b, Point const c, Point const point);

int	main(void) {
	Point a(0, 0);
	Point b(2, 0);
	Point c(0, 2);
	Point point(1, 1);

	std::cout << bsp(a, b, c, point) << std::endl;

	return (0);
}
