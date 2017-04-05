#include <iostream>
#include "Fixed.hpp"

int main( void ) {

	Fixed 			e;
	Fixed const 	f( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << e << std::endl;
	std::cout << ++e << std::endl;
	std::cout << e << std::endl;
	std::cout << e++ << std::endl;
	std::cout << e << std::endl;
	
	std::cout << f << std::endl;
	
	std::cout << Fixed::max( e, f ) << std::endl;

	Fixed 			g(-10);
	Fixed const 	h( Fixed( -5.05f ) * Fixed( 2 ) );

	std::cout << g << std::endl;
	std::cout << --g << std::endl;
	std::cout << g << std::endl;
	std::cout << g-- << std::endl;
	std::cout << g << std::endl;
	
	std::cout << h << std::endl;
	
	std::cout << Fixed::min( g, h ) << std::endl;

	Fixed a(10);
	Fixed b(3);
	Fixed toto;
	
	toto = a + b;
	std::cout << toto << std::endl;

	toto = a - b;
	std::cout << toto << std::endl;

	toto = a * b;
	std::cout << toto << std::endl;

	toto = a / b;
	std::cout << toto << std::endl;

	if (a != b)
		std::cout << "a != b" << std::endl;

	if (a == b)
		std::cout << "a == b" << std::endl;

	if (a > b)
		std::cout << "a > b" << std::endl;

	if (a < b)
		std::cout << "a < b" << std::endl;

	if (b < a)
		std::cout << "b < a" << std::endl;

	if (b > a)
		std::cout << "b > a" << std::endl;

	Fixed	c(1235);
	Fixed	d(1235);

	if (c != d)
		std::cout << "c != d" << std::endl;

	if (c == d)
		std::cout << "c == d" << std::endl;

	if (c >= d)
		std::cout << "c >= d" << std::endl;

	if (c <= d)
		std::cout << "c <= d" << std::endl;

	if (d >= c)
		std::cout << "d >= c" << std::endl;

	if (d <= c)
		std::cout << "d <= c" << std::endl;

	return 0;
}
