/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 10:16:28 by jvarila           #+#    #+#             */
/*   Updated: 2025/06/12 10:17:20 by jvarila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef WRONGDOG_HPP
# define WRONGDOG_HPP

# include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal {

public:

// ------------------------------------------------------------ member functions
	void	makeSound( void ) const;
// ---------------------------------------------------------------- constructors
	WrongDog( void );
	WrongDog( WrongDog const &src );
// ------------------------------------------------------------------ destructor
	~WrongDog( void );
// --------------------------------------------------- member operator overloads
	WrongDog &operator = ( WrongDog const &src );
};

#endif
