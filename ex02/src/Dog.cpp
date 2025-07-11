/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 13:54:30 by jvarila           #+#    #+#             */
/*   Updated: 2025/06/27 11:12:57 by jvarila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "ansi_colors.hpp"
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

	std::cout << id_str + "	Default constructor called" << std::endl;
	_type = "Dog";
}

Dog:: Dog( Dog const &src ) : AAnimal( src ), _brain( new Brain( *src._brain ) ) {

	std::cout << id_str + "	Copy constructor called" << std::endl;
}

// ------------------------------------------------------------------ destructor

Dog:: ~Dog( void ) {

	std::cout << id_str + "	Destructor called" << std::endl;
	delete _brain;
}

// ---------------------------------------------------------- operator overloads

Dog &Dog:: operator = ( Dog const &src ) {

	std::cout << id_str + "	Copy assignment operator called" << std::endl;
	if (this != &src) {
		AAnimal:: operator=( src );
		*_brain = *src._brain;
	}
	return *this;
}
