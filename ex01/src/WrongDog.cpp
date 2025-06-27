/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 10:17:43 by jvarila           #+#    #+#             */
/*   Updated: 2025/06/27 10:01:05 by jvarila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#import "WrongDog.hpp"
#import "ansi_colors.hpp"
#include <iostream>

std::string const	id_str = C_B_HI_P "WrongDog" C_RST;

// ------------------------------------------------------------ member functions

void WrongDog:: makeSound( void ) const {

	std::cout << id_str + "	makes a sound: \"Woof!\"" << std::endl;
}

// ---------------------------------------------------------------- constructors

WrongDog:: WrongDog( void ) {

	std::cout << id_str + "	default constructor called" << std::endl;
	_type = "WrongDog";
}

WrongDog:: WrongDog( WrongDog const &src ) : WrongAnimal( src ) {

	std::cout << id_str + "	copy constructor called" << std::endl;
}

// ------------------------------------------------------------------ destructor

WrongDog:: ~WrongDog( void ) {

	std::cout << id_str + "	destructor called"	<< std::endl;
}

// ---------------------------------------------------------- operator overloads

WrongDog &WrongDog:: operator = ( WrongDog const &src ) {

	std::cout << id_str + "	copy assignment operator called" << std::endl;
	if (this != &src)
		WrongAnimal:: operator=( src );
	return *this;
}
