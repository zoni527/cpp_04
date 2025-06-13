/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 10:49:59 by jvarila           #+#    #+#             */
/*   Updated: 2025/06/13 10:50:07 by jvarila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "ansi_colors.hpp"

std::string const	amateria_str = C_B_HI_W "AMateria" C_RST;

// -----------------------------------------------------------------------------

std::string const &AMateria::getType( void ) const {
	return _type;
}

void AMateria:: use( ICharacter &target ) {
	std::cout
		<< "* uses materia of type " << _type << " on " << target.getName()
		<< std::endl;
}

// -----------------------------------------------------------------------------

AMateria:: AMateria( std::string const &type ) : _type( type ) {
	std::cout << amateria_str + "	string constructor called" << std::endl;
}

AMateria:: AMateria( AMateria const &src ) : _type( src._type ) {
	std::cout << amateria_str + "	copy constructor called" << std::endl;
}

AMateria:: ~AMateria( void ) {
	std::cout << amateria_str + "	destructor called" << std::endl;
}

// -----------------------------------------------------------------------------

AMateria &AMateria:: operator = ( AMateria const &src ) {
	std::cout << amateria_str + "	copy assignment operator called" << std::endl;
	if ( this == &src )
		return *this;
	_type = src._type;
	return *this;
}
