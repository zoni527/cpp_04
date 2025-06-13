/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 11:51:57 by jvarila           #+#    #+#             */
/*   Updated: 2025/06/13 12:37:31 by jvarila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Character.hpp"
#include "AMateria.hpp"
#include "ansi_colors.hpp"

std::string const	character_str = C_B_HI_P "Character" C_RST;

// -----------------------------------------------------------------------------

void	Character:: use( int idx, ICharacter &target ) {

	if ( idx < 0 || idx >= N_MATERIA ) {
		std::cout
			<< C_B_HI_R "ERROR!" C_RST
			<< " Character:: use: Invalid materia index: " << idx
			<< std::endl;
		return;
	} else if ( _inventory[idx] == nullptr ) {
		std::cout
			<< C_B_HI_R "ERROR!" C_RST
			<< " Character:: use: No materia equipped at index: " << idx
			<< std::endl;
		return;
	}
	std::cout
		<< character_str << "	" << _name << " uses materia "
		<< _inventory[idx]->getType() << " on " << target.getName()
		<< std::endl;
	_inventory[idx]->use( target );
}

std::string const &Character:: getName( void ) const {
	return _name;
}

void Character:: equip( AMateria *m ) {

	if ( m == nullptr ) {
		std::cout
			<< C_B_HI_R "ERROR!" C_RST
			<< " Character:: equip: Materia pointer is null" << std::endl;
		return;
	}
	if ( _inventory[ N_MATERIA - 1 ]) {
		std::cout
			<< character_str << "	" << _name << "'s inventory is full"
			<< std::endl;
		return;
	}
	size_t i = -1;
	while ( ++i < N_MATERIA && _inventory[i] )
		;
	std::cout
		<< character_str << "	" << _name << " equips materia "
		<< m->getType()
		<< std::endl;
	_inventory[i] = m;
}

void Character:: unequip( int idx ) {

	if ( idx < 0 || idx >= N_MATERIA ) {
		std::cout
			<< C_B_HI_R "ERROR!" C_RST
			<< " Character:: unequip: Invalid materia index: " << idx
			<< std::endl;
		return;
	} else if ( _inventory[idx] == nullptr ) {
		std::cout
			<< C_B_HI_R "ERROR!" C_RST
			<< " Character:: unequip: No materia equipped at index: " << idx
			<< std::endl;
		return;
	}
	std::cout
		<< character_str << "	" << _name << " unequips materia "
		<< _inventory[idx]->getType() << " in inventory slot " << idx
		<< std::endl;
	_inventory[idx] = nullptr;
}

// -----------------------------------------------------------------------------

Character:: Character( std::string const &name ) : _name( name ) {
	for ( size_t i = 0; i < N_MATERIA; ++i )
		_inventory[i] = nullptr;
}

Character:: Character( Character const &src ) : _name( src._name ) {
	std::cout << character_str + "	copy constructor called" << std::endl;
	for ( size_t i = 0; i < N_MATERIA && src._inventory[i] != nullptr; ++i )
		_inventory[i] = src._inventory[i]->clone();
}

// -----------------------------------------------------------------------------

Character &Character:: operator = ( Character const &src ) {

	std::cout << character_str + "	copy assignment operator called" << std::endl;
	if ( this == &src )
		return *this;
	_name = src._name;
	for ( size_t i = 0; i < N_MATERIA && src._inventory[i] != nullptr; ++i ) {
		if ( _inventory[i] != nullptr )
			delete _inventory[i];
		_inventory[i] = src._inventory[i]->clone();
	}
	return *this;
}
