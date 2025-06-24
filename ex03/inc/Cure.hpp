/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 11:57:59 by jvarila           #+#    #+#             */
/*   Updated: 2025/06/24 11:59:34 by jvarila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria {

public:
// -----------------------------------------------------------------------------
	Cure	*clone( void ) const override;
	void	use( ICharacter &target ) override;
// -----------------------------------------------------------------------------
	Cure( void );
	Cure( Cure const &src ) = delete;
// -----------------------------------------------------------------------------
	~Cure( void ) = default;
// -----------------------------------------------------------------------------
	Cure &operator = ( Cure const &src ) = delete;
};

#endif
