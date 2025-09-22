/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraumain <rraumain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 21:35:24 by rraumain          #+#    #+#             */
/*   Updated: 2025/09/22 22:53:15 by rraumain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	public:
		Cat(void);
		Cat(const Cat &copy);
		Cat &operator=(const Cat &copy);
		~Cat(void);

		void		makeSound(void) const;
		Brain	&getBrain(void);
		
	private:
			Brain	*_brain;
};

#endif