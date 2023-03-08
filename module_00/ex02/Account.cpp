/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awallet <awallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 15:22:04 by awallet           #+#    #+#             */
/*   Updated: 2023/03/08 17:16:21 by awallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <string>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;


int	Account::getNbAccounts( void )
{
	return (t::_nbAccounts);
}
int	Account::getTotalAmount( void )
{
	return (t::_totalAmount);
}
int	Account::getNbDeposits( void )
{
	return (t::_totalNbDeposits);
}
int	Account::getNbWithdrawals( void )
{
	return (t::_totalNbWithdrawals);
}
void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() 
		<< ";total:" << getTotalAmount() 
		<< ";deposit:" << getNbDeposits()
		<< ";withdrawals:" << getNbWithdrawals() 
		<< std::endl;
}

Account::Account( int initial_deposit )
{
	_displayTimestamp();
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_totalAmount += _amount;
	std::cout << "index:" << _accountIndex 
		<< ";amount:" << _amount
		<< ";created"
		<< std::endl;
	_nbAccounts++;
} 

Account::~Account( void )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex 
		<< ";amount:" << _amount
		<< ";closed"
		<< std::endl;
}

void	Account::makeDeposit( int deposit )
{
	int	lastAmount = _amount;
	_displayTimestamp();
	_nbDeposits++;
	_amount += deposit;
	_totalAmount += deposit;
	_totalNbDeposits++;
	//index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1
	std::cout << "index:" << _accountIndex
		<< ";p_amount:" << lastAmount
		<< ";deposit:" << deposit
		<< ";amount:" << _amount
		<< ";nb_deposits:" << _nbDeposits
		<< std::endl;
}
bool	Account::makeWithdrawal( int withdrawal )
{
	int lastAmount = _amount;
	_displayTimestamp();
	if (checkAmount() < withdrawal)
	{
		std::cout << "index:" << _accountIndex
			<< ";p_amount:" << lastAmount
			<< ";withdrawal:refused"
			<< std::endl;
		return (false);
	}
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	std::cout << "index:" << _accountIndex
		<< ";p_amount:" << lastAmount
		<< ";withdrawal:" << withdrawal
		<< ";amount:" << _amount
		<< ";nb_withdrawals:" << _nbWithdrawals
		<< std::endl;
	return (true);
}
int		Account::checkAmount( void ) const
{
	return (t::_amount);
}
void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	//index:0;amount:42;deposits:0;withdrawals:0
	std::cout << "index:" << _accountIndex << ";amount:"
		<< _amount << ";deposit:" << _nbDeposits
		<< ";withdrawals:" << _nbWithdrawals
		<< std::endl;
}

void	Account::_displayTimestamp( void )
{
	std::time_t	now;
	struct tm	*time;

	now = std::time(0);
	time = std::localtime(&now);

	std::cout << "[" << time->tm_year + 1900;
	if (time->tm_mon < 10)
		std::cout << "0";
	std::cout << time->tm_mon;
	if (time->tm_mday < 10)
		std::cout << "0";
	std::cout << time->tm_mday << "_";
	if (time->tm_hour < 10)
		std::cout << "0";
	std::cout << time->tm_hour;
	if (time->tm_min < 10)
		std::cout << "0";
	std::cout << time->tm_min;
	if (time->tm_sec < 10)
		std::cout << "0";
	std::cout << time->tm_sec << "] ";
}