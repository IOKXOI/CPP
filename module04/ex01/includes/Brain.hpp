/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sydauria <sydauria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 16:52:25 by greengo           #+#    #+#             */
/*   Updated: 2024/04/08 06:56:54 by sydauria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <stdint.h>

class Brain {
	public:
		Brain();
		Brain(const Brain &toCopie);
		Brain& operator=(const Brain &toCopie);
		virtual ~Brain();

		std::string ideas[100];
		
	private:
};
