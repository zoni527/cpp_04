/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 09:52:33 by jvarila           #+#    #+#             */
/*   Updated: 2025/06/12 09:59:20 by jvarila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#import "WrongAnimal.hpp"
#import "ansi_colors.hpp"
#include <iostream>

std::string const	wronganimal_str = C_B_HI_BL "WrongAnimal" C_RST;

// ------------------------------------------------------------ member functions

void WrongAnimal:: makeSound( void ) const {
	std::cout << wronganimal_str + "	makes a sound: \"Yolo!\"" << std::endl;
}

std::string WrongAnimal:: getType( void ) const {
	return _type;
}

// ---------------------------------------------------------------- constructors

WrongAnimal:: WrongAnimal( void ) : _type( "WrongAnimal" ) {
	std::cout << wronganimal_str + "	default constructor called" << std::endl;
}

WrongAnimal:: WrongAnimal( WrongAnimal const &src ) {
	std::cout << wronganimal_str + "	copy constructor called" << std::endl;
	_type = src._type;
}

// ------------------------------------------------------------------ destructor

WrongAnimal:: ~WrongAnimal( void ) {
	std::cout << wronganimal_str + "	destructor called" << std::endl;
}

// ---------------------------------------------------------- operator overloads

WrongAnimal &WrongAnimal:: operator = ( WrongAnimal const &src ) {
	std::cout << wronganimal_str + "	assignment operator called" << std::endl;
	if (this == &src)
		return *this;
	_type = src._type;
	return *this;
}
