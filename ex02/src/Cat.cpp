/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 17:09:22 by jvarila           #+#    #+#             */
/*   Updated: 2025/06/27 11:12:49 by jvarila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "ansi_colors.hpp"
#include <iostream>

std::string const	id_str = C_B_HI_B "Cat" C_RST;

// ------------------------------------------------------------ member functions

void Cat:: makeSound( void ) const {

	std::cout << id_str + "	makes a sound: \"Meow!\"" << std::endl;
}

std::string Cat:: get_idea( size_t index ) {

	return _brain->get_idea( index );
}

std::string Cat:: get_random_idea( void ) {

	return _brain->get_random_idea();
}

// ---------------------------------------------------------------- constructors

Cat:: Cat( void ) : _brain( new Brain() ) {

	std::cout << id_str + "	Default constructor called" << std::endl;
	_type = "Cat";
}

Cat:: Cat( Cat const &src ) : AAnimal( src ), _brain( new Brain( *src._brain ) ) {

	std::cout << id_str + "	Copy constructor called" << std::endl;
}

// ------------------------------------------------------------------ destructor

Cat:: ~Cat( void ) {

	std::cout << id_str + "	Destructor called" << std::endl;
	delete _brain;
}

// ---------------------------------------------------------- operator overloads

Cat &Cat:: operator = ( Cat const &src ) {

	std::cout << id_str + "	Copy assignment operator called" << std::endl;
	if (this != &src) {
		AAnimal:: operator=( src );
		*_brain = *src._brain;
	}
	return *this;
}
