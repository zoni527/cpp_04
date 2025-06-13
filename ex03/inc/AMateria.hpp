/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 10:25:45 by jvarila           #+#    #+#             */
/*   Updated: 2025/06/13 12:36:39 by jvarila          ###   ########.fr       */
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
	AMateria( void ) = delete;
	AMateria( std::string	const &type );
	AMateria( AMateria		const &src );
// -----------------------------------------------------------------------------
	virtual ~AMateria( void );
// -----------------------------------------------------------------------------
	AMateria &operator = ( AMateria const &src );

protected:
	std::string	_type;
};

#endif
