/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeixner <konstantin.meixner@freenet.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 17:51:29 by kmeixner          #+#    #+#             */
/*   Updated: 2022/06/26 16:54:31 by kmeixner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed {
public:
	Fixed(void);
	~Fixed(void);
	Fixed(Fixed const & src);
	Fixed &operator=(Fixed const & rhs);

	int getRawBits(void) const;
	void setRawBits(int const raw);

private:
	int _val;
	static const int _bits = 8;

};
#endif
