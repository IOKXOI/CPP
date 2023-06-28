/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greengo <greengo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 10:22:40 by greengo           #+#    #+#             */
/*   Updated: 2023/06/07 16:16:39 by greengo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <cstring>

int	main(int argc, char *argv[])
{
	int	i = 1;
	if (argc == 1)
	{
		std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<std::endl;
		return (0);
	}
	else
	{
		while (argv[i])
		{
			for (size_t x = 0; x < std::strlen(argv[i]); x++)
				std::cout<<(char)std::toupper(argv[i][x]);
			i++;
			std::cout<<" ";
		}
		std::cout<<std::endl;
	}
}
