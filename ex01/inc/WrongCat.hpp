/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 09:59:37 by jvarila           #+#    #+#             */
/*   Updated: 2025/06/27 11:15:07 by jvarila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

public:
// ------------------------------------------------------------ member functions
	void	makeSound( void ) const;
// ---------------------------------------------------------------- constructors
	WrongCat( void );
	WrongCat( WrongCat const &src );
// ------------------------------------------------------------------ destructor
	~WrongCat( void );
// --------------------------------------------------- member operator overloads
	WrongCat	&operator = ( WrongCat const &src );
};

#endif
