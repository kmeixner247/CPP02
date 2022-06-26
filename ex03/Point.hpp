/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeixner <konstantin.meixner@freenet.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 18:02:22 by kmeixner          #+#    #+#             */
/*   Updated: 2022/06/26 17:04:34 by kmeixner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP
#include "Fixed.hpp"
class Point {
public:
	Point(void);
	Point(float const x, float const y);
	~Point(void);
	Point(Point const &src);
	Point &operator=(Point const &);
	Point operator+(Point const &rhs) const;
	Point operator-(Point const &rhs) const;
	Fixed const &getX(void) const;
	Fixed const &getY(void) const;
private:
	Fixed const _x;
	Fixed const _y;
};
std::ostream &operator<<(std::ostream &o, Point const &i);
#endif