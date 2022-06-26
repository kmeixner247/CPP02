/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeixner <konstantin.meixner@freenet.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 17:51:29 by kmeixner          #+#    #+#             */
/*   Updated: 2022/06/26 16:53:51 by kmeixner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
class Fixed {
public:
			Fixed(void);
			Fixed(const int src);
			Fixed (float src);
			~Fixed(void);
			Fixed(Fixed const & src);
	Fixed	&operator=(Fixed const &rhs);
	bool	operator>(Fixed const &rhs) const;
	bool	operator<(Fixed const &rhs) const;
	bool	operator>=(Fixed const &rhs) const;
	bool	operator<=(Fixed const &rhs) const;
	bool	operator==(Fixed const &rhs) const;
	bool	operator!=(Fixed const &rhs) const;
	Fixed	operator*(Fixed const &rhs) const;
	Fixed	operator/(Fixed const &rhs) const;
	Fixed	operator+(Fixed const &rhs) const;
	Fixed	operator-(Fixed const &rhs) const;
	Fixed	&operator++(void);
	Fixed	operator++(int);
	Fixed	&operator--(void);
	Fixed	operator--(int);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
	static Fixed	&min(Fixed &n1, Fixed &n2);
	static Fixed	const &min(Fixed const &n1, Fixed const &n2);
	static Fixed	&max(Fixed &n1, Fixed &n2);
	static Fixed	const &max(Fixed const &n1, Fixed const &n2);
	
private:
	int _val;
	static const int _bits = 8;

};
std::ostream &operator<<(std::ostream &o, Fixed const &i);
#endif
