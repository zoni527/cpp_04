/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 15:49:17 by jvarila           #+#    #+#             */
/*   Updated: 2025/06/27 11:14:30 by jvarila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice : public AMateria {

public:
// -----------------------------------------------------------------------------
	Ice		*clone( void ) const override;
	void	use( ICharacter &target ) override;
// -----------------------------------------------------------------------------
	Ice( void );
	Ice( Ice const &src ) = delete;
// -----------------------------------------------------------------------------
	~Ice( void );
// -----------------------------------------------------------------------------
	Ice &operator = ( Ice const &src ) = delete;
};

#endif
