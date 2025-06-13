/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 15:49:17 by jvarila           #+#    #+#             */
/*   Updated: 2025/06/13 15:52:31 by jvarila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef ICE_HPP
# define ICE_HPP

# include <string>

class ICharacter;

class Ice {

public:
// -----------------------------------------------------------------------------
	std::string const	&getType( void ) const;

	Ice					*clone( void ) const;
	void				use( ICharacter &target );
// -----------------------------------------------------------------------------
	Ice( void );
	Ice( Ice const &src );
// -----------------------------------------------------------------------------
	~Ice( void );
// -----------------------------------------------------------------------------
	Ice &operator = ( Ice const &src );

protected:
	std::string	_type = "ice";
};

#endif
