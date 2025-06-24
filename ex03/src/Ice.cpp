/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 10:34:00 by jvarila           #+#    #+#             */
/*   Updated: 2025/06/24 11:55:29 by jvarila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ansi_colors.hpp"
#include <iostream>

std::string const	id_str = C_B_HI_C "Ice" C_RST;

// -----------------------------------------------------------------------------

Ice *Ice:: clone( void ) const {

	return new Ice();
}

void Ice:: use( ICharacter &target ) {
	
	std::string output = C_HI_C "* shoots an ice bolt at " C_RST;
	output += target.getName() + C_HI_C + " *" + C_RST;
	std::cout << output << std::endl;
}

// -----------------------------------------------------------------------------

Ice:: Ice( void )
: AMateria( "ice" ) {

	std::cout << id_str << "		Default constructor called" << std::endl;
}
