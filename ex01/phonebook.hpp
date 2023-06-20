/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sydauria <sydauria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 16:20:32 by greengo           #+#    #+#             */
/*   Updated: 2023/06/20 18:50:00 by sydauria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "contact.hpp"
#include <iostream>

class   PhoneBook {
	public:
	PhoneBook();
	~PhoneBook();
	
	bool		add();
	bool		search();

	private:
	std::string	_display_contact(std::string str);
	void		_list_contact();
	bool		_userAnswer();
	Contact		_contact_Array[8];
	int			lastest_add;
};
