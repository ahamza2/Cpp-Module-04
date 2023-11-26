/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 10:37:45 by haarab            #+#    #+#             */
/*   Updated: 2023/11/24 16:06:59 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
        ~Animal();
		// Animal(std::string Type);
        Animal(const Animal & animal);
        Animal & operator=(const Animal & other);
		
		std::string getType() const;
		virtual void makeSound() const;
};

#endif