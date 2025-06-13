/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 11:55:44 by jvarila           #+#    #+#             */
/*   Updated: 2025/06/13 12:26:05 by jvarila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>
# include "ICharacter.hpp"

# define N_MATERIA	4

class Character : public ICharacter {

public:
// -----------------------------------------------------------------------------
	void				use( int idx, ICharacter & target ) override;
	std::string const	&getName( void ) const override;
	void				equip( AMateria *m ) override;
	void				unequip( int idx ) override;
// -----------------------------------------------------------------------------
	Character( void ) = delete;
	Character( std::string	const &name );
	Character( Character	const &src );
// -----------------------------------------------------------------------------
	~Character( void );
// -----------------------------------------------------------------------------
	Character	&operator = ( Character const &src );

private:
	std::string	_name;
	AMateria	*_inventory[ N_MATERIA ];
};

#endif
