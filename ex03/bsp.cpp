/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeixner <konstantin.meixner@freenet.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 18:18:05 by kmeixner          #+#    #+#             */
/*   Updated: 2022/06/26 17:05:59 by kmeixner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float	crossProduct_2d(Point v1, Point v2)
{
	float ret;
	ret = (v1.getX().toFloat() * v2.getY().toFloat()) - (v1.getY().toFloat() * v2.getX().toFloat());
	return (ret);
}

bool sameSide(Point p1, Point p2, Point a, Point b)
{
	float cp1, cp2;
	cp1 = crossProduct_2d(b - a, p1 - a);
	cp2 = crossProduct_2d(b - a, p2 - a);
	if (cp1 * cp2 > 0)
		return (true);
	else
		return (false);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	return (sameSide(point, a, b, c) && sameSide(point, b, a, c) && sameSide(point, c, a, b));
}
