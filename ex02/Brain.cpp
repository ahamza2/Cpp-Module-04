/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 12:28:52 by haarab            #+#    #+#             */
/*   Updated: 2023/11/24 16:00:45 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "default Constractor Brain" << std::endl;
}

Brain::Brain(Brain const &src) {
	std::cout << "Brain : copy constructor called" << std::endl;
	*this = src;
	
}

Brain & Brain::operator=(Brain const &src) {
	std::cout << "Brain : assignation operator called" << std::endl;
	if (this != & src)
	{
		for(int i = 0; i < 100; i++) {
			this->ideas[i] = src.ideas[i];
		}
	}
    return *this;
}

Brain::~Brain() {
	std::cout << "Brain is destroyed!" << std::endl;
	// delete this->ideas;
}
