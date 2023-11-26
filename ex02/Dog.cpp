/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 10:37:21 by haarab            #+#    #+#             */
/*   Updated: 2023/11/24 16:18:37 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


Dog::Dog()
{
	this->type = "Dog";
	std::cout << "default constructor Dog" << std::endl;
	this->brain = new Brain();
}

Dog::~Dog()
{
	std::cout << type << " is destroyed!" << std::endl;
	delete brain;
}

Dog::Dog(const Dog & other)
{
	type = other.type;
	this->brain = new Brain(*other.brain);
	std::cout << "Dog : copy constructor called" << std::endl;
}

Dog & Dog::operator=(const Dog & other)
{
	std::cout << "Dog : assignation operator called" << std::endl;
	if (this != & other)
	{
		delete this->brain;
		this->brain = new Brain(*other.brain);
		this->type = other.type;
	}
    return *this;
}

std::string Dog::getType() const
{
	return (type);
}

void Dog::makeSound() const
{
	std::cout << "bark" << std::endl;
}