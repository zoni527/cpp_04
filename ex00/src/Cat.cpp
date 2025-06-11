/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 17:09:22 by jvarila           #+#    #+#             */
/*   Updated: 2025/06/11 17:10:36 by jvarila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#import "Cat.hpp"
#import "ansi_colors.hpp"
#include <iostream>

std::string const	cat_str = C_B_HI_B "Cat" C_RST;

// ------------------------------------------------------------ member functions

void Cat:: makeSound( void ) const {
	std::cout << cat_str + " makes a sound: \"Meow!\"" << std::endl;
}

// ---------------------------------------------------------------- constructors

Cat:: Cat( void ) {
	std::cout << cat_str + " default constructor called" << std::endl;
	_type = "Cat";
}

Cat:: Cat( Cat const &src ) : Animal( src ) {
	std::cout << cat_str + " copy constructor called" << std::endl;
}

// ------------------------------------------------------------------ destructor

Cat:: ~Cat( void ) {
	std::cout << cat_str + " destructor called" << std::endl;
}

// ---------------------------------------------------------- operator overloads

Cat &Cat:: operator = ( Cat const &src ) {
	std::cout << cat_str + " assignment operator called" << std::endl;
	if (this == &src)
		return *this;
	Animal:: operator=( src );
	return *this;
}
