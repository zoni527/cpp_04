/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 13:08:24 by jvarila           #+#    #+#             */
/*   Updated: 2025/06/11 17:52:15 by jvarila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>

class Animal {

public:
// ------------------------------------------------------------ member functions
	virtual void	makeSound( void ) const;

	std::string		getType() const;
// ---------------------------------------------------------------- constructors
	Animal( void );
	Animal( Animal const &src );
// ------------------------------------------------------------------ destructor
	virtual	~Animal( void );
// --------------------------------------------------- member operator overloads
	Animal &operator = ( Animal const &src );

protected:
	std::string	_type;
};

#endif
