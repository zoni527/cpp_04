/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 13:12:32 by jvarila           #+#    #+#             */
/*   Updated: 2025/06/27 11:12:43 by jvarila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#import "Animal.hpp"
#import "ansi_colors.hpp"
#include <iostream>

std::string const	id_str = C_B_HI_W "Animal" C_RST;

// ------------------------------------------------------------ member functions

void Animal:: makeSound( void ) const {

	std::cout << id_str + "	makes a sound: \"Yolo!\"" << std::endl;
}

std::string Animal:: getType( void ) const {

	return _type;
}

// ---------------------------------------------------------------- constructors

Animal:: Animal( void ) : _type( "Animal" ) {

	std::cout << id_str + "	default constructor called" << std::endl;
}

Animal:: Animal( Animal const &src ) {

	std::cout << id_str + "	copy constructor called" << std::endl;
	_type = src._type;
}

// ------------------------------------------------------------------ destructor

Animal:: ~Animal( void ) {

	std::cout << id_str + "	destructor called" << std::endl;
}

// ---------------------------------------------------------- operator overloads

Animal &Animal:: operator = ( Animal const &src ) {

	std::cout << id_str + "	copy assignment operator called" << std::endl;
	if (this != &src)
		_type = src._type;
	return *this;
}
