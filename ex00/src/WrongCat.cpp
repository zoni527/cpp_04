/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 10:05:12 by jvarila           #+#    #+#             */
/*   Updated: 2025/06/12 10:15:54 by jvarila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#import "WrongCat.hpp"
#import "ansi_colors.hpp"
#include <iostream>

std::string const	wrongcat_str = C_B_HI_G "WrongCat" C_RST;

// ------------------------------------------------------------ member functions

void WrongCat:: makeSound( void ) const {
	std::cout << wrongcat_str + "	makes a sound: \"Meow!\"" << std::endl;
}

// ---------------------------------------------------------------- constructors

WrongCat:: WrongCat( void ) {
	std::cout << wrongcat_str + "	default constructor called" << std::endl;
	_type = "WrongCat";
}

WrongCat:: WrongCat( WrongCat const &src ) : WrongAnimal( src ) {
	std::cout << wrongcat_str + "	copy constructor called" << std::endl;
}

// ------------------------------------------------------------------ destructor

WrongCat:: ~WrongCat( void ) {
	std::cout << wrongcat_str + "	destructor called" << std::endl;
}

// ---------------------------------------------------------- operator overloads

WrongCat &WrongCat:: operator = ( WrongCat const &src ) {
	std::cout << wrongcat_str + "	assignment operator called" << std::endl;
	if (this == &src)
		return *this;
	WrongAnimal:: operator=( src );
	return *this;
}
