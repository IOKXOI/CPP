/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sydauria <sydauria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 16:20:32 by greengo           #+#    #+#             */
/*   Updated: 2023/06/21 13:32:23 by sydauria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "contact.hpp"
#include <iostream>

class	PhoneBook {
	public:
	PhoneBook();
	~PhoneBook();
	
	bool		add();
	bool		search();

	private:
	Contact		_contact_Array[8];
	int			lastest_add;
	void		_list_contact();
	bool		_userAnswer();
	std::string	_trunc_contact(std::string str);
	int			_input_to_id(std::string str);
};
