/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraumain <rraumain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 20:58:20 by rraumain          #+#    #+#             */
/*   Updated: 2025/09/22 22:53:10 by rraumain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	public:
		Dog(void);
		Dog(const Dog &copy);
		Dog &operator=(const Dog &copy);
		~Dog(void);

		void	makeSound(void) const;
		Brain	&getBrain(void);

		private:
			Brain	*_brain;
};

#endif