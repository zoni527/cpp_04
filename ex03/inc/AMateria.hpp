/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 10:25:45 by jvarila           #+#    #+#             */
/*   Updated: 2025/06/27 11:14:28 by jvarila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>

class ICharacter;

class AMateria {

public:
// -----------------------------------------------------------------------------
	std::string const	&getType( void ) const;

	virtual AMateria	*clone( void ) const = 0;
	virtual void		use( ICharacter &target );
// -----------------------------------------------------------------------------
	AMateria( void )						= delete;
	AMateria( AMateria		const &src )	= delete;
	AMateria( std::string	const &type );
// -----------------------------------------------------------------------------
	virtual ~AMateria( void );
// -----------------------------------------------------------------------------
	AMateria	&operator = ( AMateria const &src ) = delete;

protected:
	std::string const	_type;
};

#endif
