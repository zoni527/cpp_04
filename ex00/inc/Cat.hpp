/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 17:07:17 by jvarila           #+#    #+#             */
/*   Updated: 2025/06/27 11:15:24 by jvarila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal {

public:
// ------------------------------------------------------------ member functions
	void	makeSound( void ) const override;
// ---------------------------------------------------------------- constructors
	Cat( void );
	Cat( Cat const &src );
// ------------------------------------------------------------------ destructor
	~Cat( void );
// --------------------------------------------------- member operator overloads
	Cat	&operator = ( Cat const &src );
};

#endif
