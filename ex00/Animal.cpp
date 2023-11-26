/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 10:36:52 by haarab            #+#    #+#             */
/*   Updated: 2023/11/22 15:22:52 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() 
{
	type = "Animal";
	std::cout << "default Animal" << std::endl;
}

Animal::~Animal() 
{
	std::cout << "Animal is destroyed!" << std::endl;
}

Animal::Animal(const Animal & other)
{
	type = other.type;
	std::cout << "Animal : copy constructor called" << std::endl;
}

Animal & Animal::operator=(const Animal & other)
{
	std::cout << "Animal : assignation operator called" << std::endl;
	if (this != & other)
	{
		this->type = other.type;
	}
    return *this;
}

std::string Animal::getType() const
{
	return (type);
}

void Animal::makeSound() const
{
	std::cout << "animal sound" << std::endl;	
}