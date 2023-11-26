/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:23:04 by haarab            #+#    #+#             */
/*   Updated: 2023/11/22 15:38:46 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << "default WrongCat" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << type << " is destroyed!" << std::endl;
}

WrongCat::WrongCat(const WrongCat & other)
{
	type = other.type;
	std::cout << "WrongCat : copy constructor called" << std::endl;
}

WrongCat & WrongCat::operator=(const WrongCat & other)
{
	std::cout << "WrongCat : assignation operator called" << std::endl;
	if (this != & other)
	{
		this->type = other.type;
	}
    return *this;
}

std::string WrongCat::getType() const
{
	return (type);
}


void WrongCat::makeSound() const
{
	std::cout << "WrongAnimal sound." << std::endl;
}