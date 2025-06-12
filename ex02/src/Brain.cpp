/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 11:51:00 by jvarila           #+#    #+#             */
/*   Updated: 2025/06/12 12:16:04 by jvarila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "ansi_colors.hpp"
#include <cstdlib>
#include <iostream>

// -----------------------------------------------------------------------------

std::string const	random_ideas[] = {
	"\"I am hungry\"",
	"\"SQUIRREL!\"",
	"\"I hate my owner...\"",
	"\"I love my owner!\"",
	"\":(\"",
	"\":)\"",
	"\"I wonder if I could break that vase...\"",
	"\"Lick lick\"",
	"\"Derp\"",
	"\"Herp\"",
	"\"This would be an excellent opportunity to escape...\"",
};

std::string const	brain_str = C_B_HI_Y "Brain" C_RST;

// -----------------------------------------------------------------------------

Brain:: Brain( void ) {

	std::cout << brain_str + "	default constructor called" << std::endl;

	srand( time( NULL ));
	size_t number_of_random_ideas = sizeof( random_ideas ) / sizeof( random_ideas[0] );
	for ( int i = 0; i < N_IDEAS; ++i )
		_ideas[i] = random_ideas[ rand() % number_of_random_ideas ];
}

Brain:: Brain( Brain const &src ) {

	std::cout << brain_str + "	copy constructor called" << std::endl;

	if ( this == &src )
		return;
	for ( int i = 0; i < N_IDEAS; ++i )
		_ideas[i] = src._ideas[i];
}

// -----------------------------------------------------------------------------

Brain:: ~Brain( void ) {

	std::cout << brain_str + "	destructor called" << std::endl;
}

// -----------------------------------------------------------------------------

Brain &Brain:: operator = ( Brain const &src ) {

	std::cout << brain_str + "	copy assignment operator called" << std::endl;

	if ( this == &src )
		return *this;
	for ( int i = 0; i < N_IDEAS; ++i )
		_ideas[i] = src._ideas[i];
	return *this;
}
