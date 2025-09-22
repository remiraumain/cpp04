/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraumain <rraumain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 22:03:36 by rraumain          #+#    #+#             */
/*   Updated: 2025/09/22 22:43:54 by rraumain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>

class Brain
{
	public:
		Brain(void);
		Brain(const Brain &copy);
		Brain &operator=(const Brain &copy);
		~Brain(void);

		void 				setIdea(const int index, const std::string &idea);
		const std::string	&getIdea(const int index) const;
		
	private:
		std::string _ideas[100];
};

#endif