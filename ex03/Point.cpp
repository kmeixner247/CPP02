/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeixner <konstantin.meixner@freenet.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 18:02:19 by kmeixner          #+#    #+#             */
/*   Updated: 2022/06/26 17:05:34 by kmeixner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0)
{
}

Point::Point(float const x, float const y) : _x(x), _y(y)
{
}

Point::Point(Point const &src) : _x(src.getX()), _y(src.getY())
{
}

Point &Point::operator=(Point const &)
{
	return (*this);
}

Point Point::operator+(Point const &rhs) const
{
	float const newx = this->_x.toFloat() + rhs._x.toFloat();
	float const newy = this->_y.toFloat() + rhs._y.toFloat();
	Point p(newx, newy);
	return (p);
}

Point Point::operator-(Point const &rhs) const
{
	float const newx = this->_x.toFloat() - rhs._x.toFloat();
	float const newy = this->_y.toFloat() - rhs._y.toFloat();
	Point p(newx, newy);
	return (p);
}

Point::~Point(void)
{
}

Fixed const &Point::getX(void) const
{
	return (this->_x);
}

Fixed const &Point::getY(void) const
{
	return (this->_y); 
}

std::ostream &operator<<(std::ostream &o, Point const &i)
{
	std::cout << "(" << i.getX() << "," << i.getY() << ")";
	return (o);
}