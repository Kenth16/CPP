#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

/***************************************************************** */
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

int	Account::checkAmount( void ) const {
	return (_amount);	
}
/***************************************************************** */



/***************************************************************** */
Account::Account (int initial_deposit)
{
	_totalAmount += initial_deposit;
    _accountIndex = _nbAccounts;
	_nbAccounts++;
	_amount = initial_deposit;
    _displayTimestamp();
	std::cout << "index:" << _accountIndex
				<< ";amount:" << _amount
				<< ";created"
				<< std::endl;
}

Account::~Account (void) {
    _displayTimestamp();
	std::cout << "index:" << _accountIndex
				<< ";amount:" << _amount
				<< ";closed"
				<< std::endl;
}
 /***************************************************************** */



 /***************************************************************** */
void	Account::displayAccountsInfos( void )
{
    _displayTimestamp();
	std::cout << "accounts:" << getNbAccounts()
				<< ";total:" << getTotalAmount()
				<< ";deposits:" << getNbDeposits()
				<< ";withdrawals:" << getNbWithdrawals()
				<< std::endl;
}

void	Account::displayStatus( void ) const {
	    _displayTimestamp();
        std::cout << "index:" << _accountIndex
				    << ";amount:" << _amount
				    << ";deposits:" << _nbDeposits
				    << ";withdrawals:" << _nbWithdrawals 
				    << std::endl;
}
 /***************************************************************** */



void	Account::makeDeposit( int deposit ) {
	int	p_amount = _amount;
	_amount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	_totalAmount += deposit;

    _displayTimestamp();
	std::cout << "index:" << _accountIndex
				<< ";p_amount:" << p_amount
				<< ";deposit:" << deposit
				<< ";amount:" << _amount
				<< ";nb_deposits:" << _nbDeposits
				<< std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	int p_amount = checkAmount();
	if ((p_amount - withdrawal) >= 0)
	{
		_amount -= withdrawal;
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		_totalAmount -= withdrawal;
        _displayTimestamp();
		std::cout << "index:" << _accountIndex
					<< ";p_amount:" << p_amount
					<< ";withdrawal:" << withdrawal
					<< ";amount:" << _amount
					<< ";nb_withdrawals:" << _nbWithdrawals
					<< std::endl;
		return (true);
	}
	else
	{
	    _displayTimestamp();
    	std::cout << "index:" << _accountIndex
					<< ";p_amount:" << p_amount
					<< ";withdrawal:refused"
					<< std::endl;
		return (false);
	}
}



/************************************************************/
/*							Time							*/
void    Account::_displayTimestamp(void) {
    std::time_t now = std::time(NULL);
    std::tm *timeInfo = std::localtime(&now);

    std::cout << "[" << (timeInfo->tm_year + 1900)
              << timeInfo->tm_mon + 1
              << timeInfo->tm_mday
              << "_"
              << timeInfo->tm_hour
              << timeInfo->tm_min
              << timeInfo->tm_sec
              << "] ";
}
/**************************************************************/

