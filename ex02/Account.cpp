#include "Account.hpp"
#include <iostream>
#include <iomanip>

Account::Account(int initial_deposit)
{

}

Account::~Account()
{

}

int	Account::getNbAccounts()
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

int	Account::checkAmount(void) const
{
	return (this->_amount);
}

void	Account::_displayTimestamp(void)
{
	std::cout << std::
}

void	Account::displayAccountsInfos(void)
{

}