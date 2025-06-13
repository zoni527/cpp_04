/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 10:35:10 by jvarila           #+#    #+#             */
/*   Updated: 2025/06/13 10:48:08 by jvarila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include <string>

class AMateria;

class ICharacter {

public:
// ------------------------------------------------------------ member functions
	virtual std::string const	&getName( void ) const = 0;
	virtual void				equip( AMateria *m ) = 0;
	virtual void				unequip( int idx ) = 0;
	virtual void				use( int idx, ICharacter &target ) = 0;
// ------------------------------------------------------------------ destructor
	virtual ~ICharacter( void ) {}
};

#endif
