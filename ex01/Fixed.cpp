/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeixner <konstantin.meixner@freenet.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 17:56:36 by kmeixner          #+#    #+#             */
/*   Updated: 2022/06/26 15:31:34 by kmeixner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
Fixed::Fixed(void) : _val(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int src) : _val(src << this->_bits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float src)
{
	std::cout << "Float constructor called" << std::endl;
	this->_val = roundf(src * (1 << this->_bits));
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_val);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_val = raw;
}

Fixed &Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_val = rhs.getRawBits();
	return *this;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

float Fixed::toFloat(void) const
{
	return (((float)_val) / (1 << this->_bits));
}

int Fixed::toInt(void) const
{
	return (_val >> this->_bits);
}

std::ostream &operator<<(std::ostream &o, Fixed const &i)
{
	std::cout << i.toFloat();
	return (o);
}
