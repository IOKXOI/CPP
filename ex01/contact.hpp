/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greengo <greengo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 16:21:06 by greengo           #+#    #+#             */
/*   Updated: 2023/06/12 13:15:56 by greengo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <cstring>
#include <string>

class   Contact {
    public:
    Contact();
    ~Contact();

    bool    setter_first_name(void);
    bool    setter_last_name(void);
    bool    setter_nickname(void);
    bool    setter_phone_number(void);
    bool    setter_secret(void);
    

    private:
    std::string _first_name;
    std::string _last_name;
    std::string _nickname;
    std::string _phone_number;
    std::string _secret;
};

#endif