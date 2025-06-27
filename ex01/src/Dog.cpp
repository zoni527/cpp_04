/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 13:54:30 by jvarila           #+#    #+#             */
/*   Updated: 2025/06/27 11:14:55 by jvarila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#import "Dog.hpp"
#import "ansi_colors.hpp"
#include <iostream>

std::string const	id_str = C_B_HI_R "Dog" C_RST;

// ------------------------------------------------------------ member functions

void Dog:: makeSound( void ) const {

	std::cout << id_str + "	makes a sound: \"Woof!\"" << std::endl;
}

std::string Dog:: get_idea( size_t index ) {

	return _brain->get_idea( index );
}

std::string Dog:: get_random_idea( void ) {

	return _brain->get_random_idea();
}

// ---------------------------------------------------------------- constructors

Dog:: Dog( void ) : _brain( new Brain() ) {

	std::cout << id_str + "	default constructor called" << std::endl;
	_type = "Dog";
}

Dog:: Dog( Dog const &src ) : Animal( src ), _brain( new Brain( *src._brain ) ) {

	std::cout << id_str + "	copy constructor called" << std::endl;
}

// ------------------------------------------------------------------ destructor

Dog:: ~Dog( void ) {

	std::cout << id_str + "	destructor called" << std::endl;
	delete _brain;
}

// ---------------------------------------------------------- operator overloads

Dog &Dog:: operator = ( Dog const &src ) {

	std::cout << id_str + "	copy assignment operator called" << std::endl;
	if (this != &src) {
		Animal:: operator=( src );
		*_brain = *src._brain;
	}
	return *this;
}
