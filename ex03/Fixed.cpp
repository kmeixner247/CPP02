/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeixner <konstantin.meixner@freenet.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 17:56:36 by kmeixner          #+#    #+#             */
/*   Updated: 2022/06/26 17:05:45 by kmeixner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
Fixed::Fixed(void) : _val(0)
{
}

Fixed::Fixed(int src) : _val(src << this->_bits)
{
}

Fixed::Fixed(float src)
{
	this->_val = roundf(src * (1 << this->_bits));
}

Fixed::Fixed(Fixed const & src)
{
	*this = src;
}

int	Fixed::getRawBits(void) const
{
	return (this->_val);
}

void Fixed::setRawBits(int const raw)
{
	this->_val = raw;
}

Fixed &Fixed::operator=(Fixed const & rhs)
{
	this->_val = rhs.getRawBits();
	return (*this);
}

bool Fixed::operator>(Fixed const & rhs) const
{
	return (this->_val > rhs.getRawBits());
}

bool Fixed::operator<(Fixed const & rhs) const
{
	return (this->_val < rhs.getRawBits());
}

bool Fixed::operator>=(Fixed const & rhs) const
{
	return (this->_val >= rhs.getRawBits());
}

bool Fixed::operator<=(Fixed const & rhs) const
{
	return (this->_val <= rhs.getRawBits());
}

bool Fixed::operator==(Fixed const &rhs) const
{
	return (this->_val == rhs.getRawBits());
}

bool Fixed::operator!=(Fixed const &rhs) const
{
	return (this->_val != rhs.getRawBits());
}

Fixed Fixed::operator*(Fixed const &rhs) const
{
	Fixed ret;

	ret.setRawBits((this->getRawBits() * rhs.getRawBits()) >> this->_bits);
	return (ret);
}

Fixed Fixed::operator/(Fixed const &rhs) const
{
	return(this->toFloat() / rhs.toFloat());
}

Fixed Fixed::operator+(Fixed const &rhs) const
{
	Fixed ret;

	ret.setRawBits(this->getRawBits() + rhs.getRawBits());
	return (ret);
}

Fixed Fixed::operator-(Fixed const &rhs) const
{
	Fixed ret;

	ret.setRawBits(this->getRawBits() - rhs.getRawBits());
	return (ret);
}

Fixed &Fixed::operator++(void)
{
	this->_val++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed ret(*this);

	this->_val++;
	return (ret);
}

Fixed &Fixed::operator--(void) {
	this->_val--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed ret(*this);

	this->_val--;
	return (ret);
}

Fixed::~Fixed(void)
{
}

float Fixed::toFloat(void) const
{
	return (((float)_val) / (1 << this->_bits));
}

int Fixed::toInt(void) const
{
	return (_val >> this->_bits);
}

Fixed &Fixed::min(Fixed &n1, Fixed &n2)
{
	if (n1 < n2)
		return (n1);
	else
		return (n2);
}

Fixed const &Fixed::min( Fixed const &n1, Fixed const &n2)
{
	if (n1 < n2)
		return (n1);
	else
		return (n2);
}

Fixed &Fixed::max(Fixed &n1, Fixed &n2)
{
	if (n1 > n2)
		return (n1);
	else
		return (n2);
}

Fixed const &Fixed::max(Fixed const &n1, Fixed const &n2)
{
	if (n1 > n2)
		return (n1);
	else
		return (n2);
}

std::ostream &operator<<(std::ostream &o, Fixed const &i)
{
	std::cout << i.toFloat();
	return (o);
}