/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 11:39:47 by jvarila           #+#    #+#             */
/*   Updated: 2025/06/27 11:15:01 by jvarila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>

# define N_IDEAS	100

class Brain {

public:
// -----------------------------------------------------------------------------
	std::string	get_idea( size_t index );
	std::string	get_random_idea( void );
// -----------------------------------------------------------------------------
	Brain( void );
	Brain( Brain const &src );
// -----------------------------------------------------------------------------
	virtual	~Brain( void );
// -----------------------------------------------------------------------------
	Brain	&operator = ( Brain const &src );

private:
	std::string	_ideas[ N_IDEAS ];
};

#endif
