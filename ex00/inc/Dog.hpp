/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 13:47:29 by jvarila           #+#    #+#             */
/*   Updated: 2025/06/11 17:52:36 by jvarila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal {

public:
// ------------------------------------------------------------ member functions
	void	makeSound( void ) const override;
// ---------------------------------------------------------------- constructors
	Dog( void );
	Dog( Dog const &src );
// ------------------------------------------------------------------ destructor
	~Dog( void );
// --------------------------------------------------- member operator overloads
	Dog &operator = ( Dog const &src );
};

#endif
