/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 12:28:47 by haarab            #+#    #+#             */
/*   Updated: 2023/11/23 15:49:41 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {
    private :
		std::string ideas[100];
    public :
		Brain();
		Brain(Brain const &src);
		Brain &operator=(Brain const &src);
		~Brain();
	};

#endif