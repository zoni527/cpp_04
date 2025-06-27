/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 09:53:01 by jvarila           #+#    #+#             */
/*   Updated: 2025/06/27 11:13:42 by jvarila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>

class WrongAnimal {

public:
// ------------------------------------------------------------ member functions
	void		makeSound( void ) const;
	std::string	getType( void ) const;
// ---------------------------------------------------------------- constructors
	WrongAnimal( void );
	WrongAnimal( WrongAnimal const &src );
// ------------------------------------------------------------------ destructor
	virtual	~WrongAnimal( void );
// --------------------------------------------------- member operator overloads
	WrongAnimal	&operator = ( WrongAnimal const &src );

protected:
	std::string	_type;
};

#endif
