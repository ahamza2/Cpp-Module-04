/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:36:52 by haarab            #+#    #+#             */
/*   Updated: 2023/11/22 15:37:25 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class  WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal();
        virtual ~WrongAnimal();
		WrongAnimal(const  WrongAnimal &  other);
		WrongAnimal & operator=(const  WrongAnimal & other);
	
		std::string getType() const;
		virtual void makeSound() const;
};

#endif