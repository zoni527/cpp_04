/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 09:46:37 by jvarila           #+#    #+#             */
/*   Updated: 2025/06/09 11:56:15 by jvarila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "ansi_colors.hpp"
#include <iostream>

static std::string	n_chars( char c, size_t n );
static void			print_test_name( std::string str );

int main( void ) {

	print_test_name( "Test: subject's main (with better formatting)" );
	{
		const Animal* meta = new Animal();
		std::cout << "\n";
		const Animal* j = new Dog();
		std::cout << "\n";
		const Animal* i = new Cat();
		std::cout << "\n";

		std::cout << j->getType() << " " << std::endl;
		std::cout << "\n";
		std::cout << i->getType() << " " << std::endl;
		std::cout << "\n";

		i->makeSound(); //will output the cat sound!
		std::cout << "\n";
		j->makeSound();
		std::cout << "\n";
		meta->makeSound();
		std::cout << "\n";

		delete meta;
		delete i;
		delete j;
	}
	print_test_name( "Test: default costructor" );
	{
		Animal	a;
		Dog		d;
		Cat		c;
	}
	print_test_name( "Test: copy constructor" );
	{
		Animal	a1;
		Animal	a2( a1 );
		Dog		d1;
		Dog		d2( d1 );
		Cat		c1;
		Cat		c2( c1 );
	}
	print_test_name( "Test: copy assignment operator" );
	{
		Animal	a1, a2;
		a1 = a2;
		Dog		d1, d2;
		d1 = d2;
		Cat		c1, c2;
		c1 = c2;
	}
	print_test_name( "Test: makeSound()" );
	{
		Animal().makeSound();
		Dog().makeSound();
		Cat().makeSound();
	}
	std::cout << std::endl;
	return 0;
}

// ------------------------------------------------------------ static functions

static void print_test_name( std::string str ) {

	for ( char &c : str )
		c = std::toupper( c );

	size_t width = str.length() + 10;

	std::string separator = n_chars( '-', width );
	std::cout << "\n" C_HI_Y << separator << "\n";
	std::cout << "**** " << str << " ****";
	std::cout << "\n" << separator << C_RST "\n";
	std::cout << std::endl;
}

static std::string n_chars( char c, size_t n ) {
	std::string str = "";
	while ( n-- )
		str += c;
	return str;
}
