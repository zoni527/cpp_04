/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 17:11:57 by jvarila           #+#    #+#             */
/*   Updated: 2025/06/24 12:10:44 by jvarila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "ansi_colors.hpp"
#include <iostream>

std::string const id_str = C_B_HI_Y "MateriaSource" C_RST;

// -----------------------------------------------------------------------------

void MateriaSource:: learnMateria( AMateria *materia ) {

	if ( _learned[ N_SOURCEMATERIA - 1 ] != nullptr ) {
		std::cout << id_str << "	Materia slots are full" << std::endl;
		return;
	}
	for ( size_t i = 0; i < N_SOURCEMATERIA; ++i ) {
		if ( _learned[i] != nullptr )
			continue;
		_learned[i] = materia->clone();
		delete materia;
		std::cout
			<< id_str << "	Learned materia: " << _learned[i]->getType()
			<< std::endl;
		break;
	}
}

AMateria *MateriaSource:: createMateria( std::string const &type ) {

	for ( size_t i = 0; i < N_SOURCEMATERIA && _learned[i] != nullptr; ++i )
		if ( _learned[i]->getType() == type ) {
			std::cout
				<< id_str << "	Creating materia:" << type
				<< std::endl;
			return _learned[i]->clone();
		}
	return 0;
}

// -----------------------------------------------------------------------------

MateriaSource:: MateriaSource( void )
: _learned{} {
}

MateriaSource:: MateriaSource( MateriaSource const &src )
: _learned{} {

	for ( size_t i = 0; i < N_SOURCEMATERIA && src._learned[i]; ++i )
		_learned[i] = src._learned[i]->clone();
}

// -----------------------------------------------------------------------------

MateriaSource:: ~MateriaSource( void ) {

	for ( auto p = std::begin( _learned ); p != std::end( _learned ) && *p != nullptr; ++p )
		delete *p;
}

// -----------------------------------------------------------------------------

MateriaSource &MateriaSource:: operator = ( MateriaSource const &src ) {

	if ( this != &src ) {
		for ( AMateria *p : _learned ) {
			if ( p == nullptr )
				break;
			delete p;
			p = nullptr;
		}
		for ( size_t i = 0; i < N_SOURCEMATERIA && src._learned[i]; ++i )
			_learned[i] = src._learned[i]->clone();
	}
	return *this;
}
