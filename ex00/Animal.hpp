/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraumain <rraumain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 20:58:20 by rraumain          #+#    #+#             */
/*   Updated: 2025/09/22 21:10:59 by rraumain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>

class Animal
{
	public:
		Animal(void);
		Animal(const Animal &copy);
		Animal &operator=(const Animal &copy);
		virtual	~Animal(void);

		virtual void		makeSound(void) const;
		
		const std::string	&getType(void) const;
		
	protected:
		std::string	_type;
};

#endif