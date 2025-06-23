/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 17:11:57 by jvarila           #+#    #+#             */
/*   Updated: 2025/06/23 17:36:51 by jvarila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "ansi_colors.hpp"

std::string const id_str = C_B_HI_G "MateriaSource" C_RST;

void MateriaSource:: learnMateria( AMateria *materia ) {

	for ( size_t i = 0; i < N_MATERIA; ++i ) {
		if ( _list[i] )
			continue;
	}
}

MateriaSource:: MateriaSource( void ) {

	for ( size_t i = 0; i < N_MATERIA; ++i )
		_list[i] = nullptr;
}

MateriaSource:: MateriaSource( MateriaSource const &src ) {

	for ( auto *p : _list ) {
		delete p;
		p = nullptr;
	}
	for ( size_t i = 0; i < N_MATERIA && src._list[i]; ++i )
		_list[i] = src._list[i]->clone();
}

MateriaSource:: ~MateriaSource( void ) {

	for ( auto *p : _list )
		delete p;
}

MateriaSource &MateriaSource::operator = ( MateriaSource const &src ) {

	if ( this != &src ) {
		for ( auto *p : _list ) {
			delete p;
			p = nullptr;
		}
		for ( size_t i = 0; i < N_MATERIA && src._list[i]; ++i )
			_list[i] = src._list[i]->clone();
	}
	return *this;
}
