/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeixner <konstantin.meixner@freenet.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 09:49:14 by kmeixner          #+#    #+#             */
/*   Updated: 2022/06/26 17:15:12 by kmeixner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
bool bsp( Point const a, Point const b, Point const c, Point const p);

int main( void )
{
	Point const a(4, 3);
	Point const b(7, 3);
	Point const c(5, 5);
	Point const p1(5, 3.5); //inside
	Point const p2(4.5, 4); //on the edge
	Point const p3(6.5, 4.5); //outside
	Point const p4(4.5, 4.002); //barely outside
	std::cout << "Triangle: a" << a << " b" << b << " c" << c << std::endl;
	std::cout << "Point " << p1 << (bsp(a, b, c, p1) ? " is " : " is NOT ") << "inside the triangle" << std::endl;
	std::cout << "Point " << p2 << (bsp(a, b, c, p2) ? " is " : " is NOT ") << "inside the triangle" << std::endl;
	std::cout << "Point " << p3 << (bsp(a, b, c, p3) ? " is " : " is NOT ") << "inside the triangle" << std::endl;
	std::cout << "Point " << p4 << (bsp(a, b, c, p4) ? " is " : " is NOT ") << "inside the triangle" << std::endl;
	return (0);
}