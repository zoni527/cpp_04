/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 10:17:43 by jvarila           #+#    #+#             */
/*   Updated: 2025/06/12 10:19:22 by jvarila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#import "WrongDog.hpp"
#import "ansi_colors.hpp"
#include <iostream>

std::string const	wrongdog_str = C_B_HI_P "WrongDog" C_RST;

// ------------------------------------------------------------ member functions

void WrongDog:: makeSound( void ) const {
	std::cout << wrongdog_str + "	makes a sound: \"Woof!\""	<< std::endl;
}

// ---------------------------------------------------------------- constructors

WrongDog:: WrongDog( void ) {
	std::cout << wrongdog_str + "	default constructor called"	<< std::endl;
	_type = "WrongDog";
}

WrongDog:: WrongDog( WrongDog const &src ) : WrongAnimal( src ) {
	std::cout << wrongdog_str + "	copy constructor called"	<< std::endl;
}

// ------------------------------------------------------------------ destructor

WrongDog:: ~WrongDog( void ) {
	std::cout << wrongdog_str + "	destructor called"	<< std::endl;
}

// ---------------------------------------------------------- operator overloads

WrongDog &WrongDog:: operator = ( WrongDog const &src ) {
	std::cout << wrongdog_str + "	assignment operator called"	<< std::endl;
	if (this == &src)
		return *this;
	WrongAnimal:: operator=( src );
	return *this;
}
