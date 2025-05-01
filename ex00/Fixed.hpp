/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svereten <svereten@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 15:36:47 by svereten          #+#    #+#             */
/*   Updated: 2025/05/01 19:18:24 by svereten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed {
public:
	Fixed();
	Fixed(Fixed &fixed);
	Fixed &operator=(Fixed &fixed);
	~Fixed();

	int		getRawBits(void);
	void	setRawBits(int const raw);

private:
	static const int	_fractionNum = 8;
	int			_value;
};

#endif
