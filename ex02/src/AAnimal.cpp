/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 13:12:32 by jvarila           #+#    #+#             */
/*   Updated: 2025/06/27 11:14:11 by jvarila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#import "AAnimal.hpp"
#import "ansi_colors.hpp"
#include <iostream>

std::string const	animal_str = C_B_HI_W "AAnimal" C_RST;

// ------------------------------------------------------------ member functions

std::string AAnimal:: getType( void ) const {
	return _type;
}

// ---------------------------------------------------------------- constructors

AAnimal:: AAnimal( void ) : _type( "AAnimal" ) {
	std::cout << animal_str + "	default constructor called" << std::endl;
}

AAnimal:: AAnimal( AAnimal const &src ) {
	std::cout << animal_str + "	copy constructor called" << std::endl;
	_type = src._type;
}

// ------------------------------------------------------------------ destructor

AAnimal:: ~AAnimal( void ) {
	std::cout << animal_str + "	destructor called" << std::endl;
}

// ---------------------------------------------------------- operator overloads

AAnimal &AAnimal:: operator = ( AAnimal const &src ) {
	std::cout << animal_str + "	assignment operator called" << std::endl;
	if (this == &src)
		return *this;
	_type = src._type;
	return *this;
}
