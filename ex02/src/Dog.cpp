/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 13:54:30 by jvarila           #+#    #+#             */
/*   Updated: 2025/06/11 13:55:14 by jvarila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#import "Dog.hpp"
#import "ansi_colors.hpp"
#include <iostream>

std::string const	dog_str = C_B_HI_R "Dog" C_RST;

// ------------------------------------------------------------ member functions

void Dog:: makeSound( void ) const {
	std::cout << dog_str + "	makes a sound: \"Woof!\"" << std::endl;
}

// ---------------------------------------------------------------- constructors

Dog:: Dog( void ) : _brain( new Brain() ) {
	std::cout << dog_str + "	default constructor called" << std::endl;
	_type = "Dog";
}

Dog:: Dog( Dog const &src ) : AAnimal( src ), _brain( new Brain( *src._brain ) ) {
	std::cout << dog_str + "	copy constructor called" << std::endl;
}

// ------------------------------------------------------------------ destructor

Dog:: ~Dog( void ) {
	std::cout << dog_str + "	destructor called" << std::endl;
	delete _brain;
}

// ---------------------------------------------------------- operator overloads

Dog &Dog:: operator = ( Dog const &src ) {
	std::cout << dog_str + "	assignment operator called" << std::endl;
	if (this == &src)
		return *this;
	AAnimal:: operator=( src );
	*_brain = *src._brain;
	return *this;
}
