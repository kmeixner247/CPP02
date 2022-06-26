/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeixner <konstantin.meixner@freenet.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 17:51:29 by kmeixner          #+#    #+#             */
/*   Updated: 2022/06/26 15:20:28 by kmeixner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#include <iostream>
class Fixed {
public:
			Fixed(void);
			Fixed(const int src);
			Fixed (float src);
			~Fixed(void);
			Fixed(Fixed const & src);
	Fixed	&operator=(Fixed const &rhs);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt (void) const;
	
private:
	int _val;
	static const int _bits = 8;

};
std::ostream &operator<<(std::ostream &o, Fixed const &i);
#endif
