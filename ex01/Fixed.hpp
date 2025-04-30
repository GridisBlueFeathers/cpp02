/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svereten <svereten@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 15:36:47 by svereten          #+#    #+#             */
/*   Updated: 2025/04/30 16:12:04 by svereten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FIXED_HPP
# define FIXED_HPP

# include <ostream>

class Fixed {
public:
	Fixed();
	Fixed(const Fixed &fixed);
	Fixed(const int value);
	Fixed(const float value);
	Fixed &operator=(const Fixed &fixed);
	~Fixed();

	int		getRawBits(void);
	void	setRawBits(int const raw);
	float	toFloat(void);
	int		toInt(void);

private:
	static int	_fractionNum;
	int			_value;
};

std::ostream &operator<<(std::ostream &out, Fixed &fixed);

#endif
