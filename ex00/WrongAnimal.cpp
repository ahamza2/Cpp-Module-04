/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:36:39 by haarab            #+#    #+#             */
/*   Updated: 2023/11/22 15:38:22 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() 
{
	type = "WrongAnimal";
	std::cout << "default WrongAnimal" << std::endl;
}

WrongAnimal::~WrongAnimal() 
{
	std::cout << "WrongAnimal is destroyed!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal & other)
{
	type = other.type;
	std::cout << "WrongAnimal : copy constructor called" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal & other)
{
	std::cout << "WrongAnimal : assignation operator called" << std::endl;
	if (this != & other)
	{
		this->type = other.type;
	}
    return *this;
}

std::string WrongAnimal::getType() const
{
	return (type);
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal sound" << std::endl;	
}