/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svereten <svereten@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 15:36:47 by svereten          #+#    #+#             */
/*   Updated: 2025/05/01 18:44:03 by svereten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FIXED_HPP
# define FIXED_HPP

# include <ostream>

# ifndef DEBUG
#  define DEBUG 1
#endif

class Fixed {
public:
	Fixed();
	Fixed(const Fixed &fixed);
	Fixed(const int value);
	Fixed(const float value);
	~Fixed();

	Fixed				&operator=(const Fixed &fixed);

	bool				operator<(const Fixed &fixed) const;
	bool				operator>(const Fixed &fixed) const;
	bool				operator<=(const Fixed &fixed) const;
	bool				operator>=(const Fixed &fixed) const;
	bool				operator!=(const Fixed &fixed) const;
	bool				operator==(const Fixed &fixed) const;

	Fixed				operator+(const Fixed &fixed) const;
	Fixed				operator-(const Fixed &fixed) const;
	Fixed				operator*(const Fixed &fixed) const;
	Fixed				operator/(const Fixed &fixed) const;

	Fixed				operator++();
	Fixed				operator++(int);
	Fixed				operator--();
	Fixed				operator--(int);

	static Fixed		&min(Fixed &one, Fixed &two);
	static const Fixed	&min(const Fixed &one, const Fixed &two);
	static Fixed		&max(Fixed &one, Fixed &two);
	static const Fixed	&max(const Fixed &one, const Fixed &two);

	int		getRawBits(void);
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

private:
	static const int	_fractionNum = 8;
	int					_value;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);
#endif
