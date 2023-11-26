/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 10:36:48 by haarab            #+#    #+#             */
/*   Updated: 2023/11/22 14:56:43 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "default Cat" << std::endl;
}

Cat::~Cat()
{
	std::cout << type << " is destroyed!" << std::endl;
}

Cat::Cat(const Cat & other)
{
	type = other.type;
	std::cout << "Cat : copy constructor called" << std::endl;
}

Cat & Cat::operator=(const Cat & other)
{
	std::cout << "Cat : assignation operator called" << std::endl;
	if (this != & other)
	{
		this->type = other.type;
	}
    return *this;
}

std::string Cat::getType() const
{
	return (type);
}


void Cat::makeSound() const
{
	std::cout << "cats don't bark" << std::endl;
}