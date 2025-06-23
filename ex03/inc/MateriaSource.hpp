/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 17:07:36 by jvarila           #+#    #+#             */
/*   Updated: 2025/06/23 17:21:16 by jvarila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

# define N_MATERIA	4

class MateriaSource : public IMateriaSource {

public:
	void		learnMateria( AMateria* ) override;
	AMateria*	createMateria( std::string const &type ) override;

	MateriaSource( void );
	MateriaSource( MateriaSource const &src );
	~MateriaSource( void );

	MateriaSource &operator = ( MateriaSource const &src );

private:
	AMateria	*_list[ N_MATERIA ];
};

#endif
