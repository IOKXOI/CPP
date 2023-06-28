/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sydauria <sydauria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 14:30:41 by sydauria          #+#    #+#             */
/*   Updated: 2023/06/21 16:30:48 by sydauria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp "

Account::Account(int) {}
// sAccount::Account() {}
Account::~Account() {}

int	Account::getNbAccounts(void) {
	return (_nbAccounts);
}

int	Account::getTotalAmount(void) {
	return (_totalAmount);
}

int	Account::getNbDeposits(void) {
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void) {
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void) {
	Account::getNbAccounts();
	Account::getTotalAmount();
	Account::getNbDeposits();
	Account::getNbWithdrawals();
}
