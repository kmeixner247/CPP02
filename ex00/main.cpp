/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeixner <konstantin.meixner@freenet.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 09:49:14 by kmeixner          #+#    #+#             */
/*   Updated: 2022/06/26 13:38:14 by kmeixner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	std::cout << "____________________________________________" << std::endl;
	Fixed b(a);
	std::cout << "____________________________________________" << std::endl;
	Fixed c;
	std::cout << "____________________________________________" << std::endl;
	std::cout << "assigning b to c" << std::endl;
	c = b;
	std::cout << "____________________________________________" << std::endl;
	std::cout << "a is " << a.getRawBits() << std::endl;
	std::cout << "____________________________________________" << std::endl;
	std::cout << "b is " << b.getRawBits() << std::endl;
	std::cout << "____________________________________________" << std::endl;
	std::cout << "c is " << c.getRawBits() << std::endl;
	std::cout << "____________________________________________" << std::endl;
	std::cout << "setting a to 5" << std::endl;
	a.setRawBits(5);
	std::cout << "____________________________________________" << std::endl;
	std::cout << "assigning a to b" << std::endl;
	b = a;
	std::cout << "____________________________________________" << std::endl;
	std::cout << "a is " << a.getRawBits() << std::endl;
	std::cout << "____________________________________________" << std::endl;
	std::cout << "b is " << b.getRawBits() << std::endl;
	std::cout << "____________________________________________" << std::endl;
	std::cout << "c is " << c.getRawBits() << std::endl;
	std::cout << "____________________________________________" << std::endl;
}
