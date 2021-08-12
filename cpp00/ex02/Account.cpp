/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 19:11:11 by vico              #+#    #+#             */
/*   Updated: 2021/06/26 21:17:13 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

using namespace std;

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp( void )
{
	time_t		timestamp;
	struct tm	*t;

	timestamp = time(NULL);
	t = gmtime(&timestamp);
	
	cout << "[" << 1900 + t->tm_year;
	cout << ((t->tm_mon + 1) % 12 < 10 ? "0" : "") << (t->tm_mon + 1) % 12 << t->tm_mday;
	cout << "_" << ((t->tm_hour + 2) % 24 < 10 ? "0" : "") << (t->tm_hour + 2) % 24;
	cout << (t->tm_min < 10 ? "0" : "") << t->tm_min;
	cout << (t->tm_sec < 10 ? "0" : "") << t->tm_sec << "] ";
}

int		Account::getNbAccounts(void)
{
	return _nbAccounts;
}

int		Account::getTotalAmount(void)
{
	return _totalAmount;
}

int		Account::getNbDeposits(void)
{
	return _totalNbDeposits;
}

int		Account::getNbWithdrawals(void)
{
	return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	cout << "accounts:" << Account::_nbAccounts << ";total:" << Account::_totalAmount << ";deposits:";
	cout << Account::_totalNbDeposits << ";withdrawals:" << Account::_totalNbWithdrawals << "\n";
}

Account::Account(int initial_deposit) : _accountIndex(0), _amount(0), _nbDeposits(0), _nbWithdrawals(0)
{
	Account::_displayTimestamp();
	_accountIndex = Account::_nbAccounts++;
	_amount = initial_deposit;
	Account::_totalAmount += initial_deposit;
	cout << "index:" << _accountIndex << ";amount:" << _amount << ";created\n";
}

Account::~Account(void)
{
	Account::_displayTimestamp();
	cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed\n";
	Account::_nbAccounts--;
	Account::_totalAmount -= _amount;
}

void	Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:" << deposit;
	_nbDeposits++;
	Account::_totalNbDeposits++;
	_amount += deposit;
	Account::_totalAmount += deposit;
	cout << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << "\n";
}

bool	Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	if (withdrawal > _amount)
	{
		cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:refused\n";
		return false;
	}
	cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:" << withdrawal;
	_amount -= withdrawal;
	Account::_totalAmount -= withdrawal;
	_nbWithdrawals++;
	Account::_totalNbWithdrawals++;
	cout << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << "\n";
	return true;
}

int		Account::checkAmount(void) const
{
	return _amount;
}

void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:";
	cout << _nbDeposits << ";withdrawals:" << _nbWithdrawals << "\n";
}
