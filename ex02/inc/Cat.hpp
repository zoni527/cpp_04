/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 17:07:17 by jvarila           #+#    #+#             */
/*   Updated: 2025/06/12 16:04:22 by jvarila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal {

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

private:
	Brain	*_brain = nullptr;
};

#endif
