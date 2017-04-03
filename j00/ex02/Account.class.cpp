#include <iostream>
#include <ctime>
#include <iomanip>
#include "Account.class.hpp"

Account::Account(int initial_deposit) : _accountIndex(_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0) {
	_displayTimestamp();
	std::cout << "index:" << Account::getNbAccounts() << ";amount:" << initial_deposit << ";created" << std::endl;
	Account::_nbAccounts += 1;
	Account::_totalAmount += initial_deposit;
}

Account::~Account(void) {
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}

int		Account::getNbAccounts(void) {
	return (Account::_nbAccounts);
}

int		Account::getTotalAmount(void) {
	return (Account::_totalAmount);
}

int		Account::getNbDeposits(void) {
	return (Account::_totalNbDeposits);
}

int		Account::getNbWithdrawals(void) {
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void) {
	_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";total:" << Account::getTotalAmount() << ";deposits:" << Account::getNbDeposits() << ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit(int deposit) {	
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits += 1;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";deposit:" << deposit;
	this->_amount += deposit;
	this->_nbDeposits += 1;
	std::cout << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

int		Account::checkAmount(void) const {
	return (this->_amount);
}

bool	Account::makeWithdrawal(int withdrawal) {
	if (withdrawal > this->checkAmount())
	{
		_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:refused" << std::endl;
		return (0);
	}
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:" << withdrawal;
	Account::_totalAmount -= withdrawal;
	Account::_totalNbWithdrawals += 1;
	this->_amount -= withdrawal;
	this->_nbWithdrawals += 1;
	std::cout << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return (1);
}

void	Account::displayStatus(void) const{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp(void) {
	time_t		timer;
	struct tm	*struc_time;

	time(&timer);
	struc_time = localtime(&timer);
	std::cout << "[" << 1900 + struc_time->tm_year << std::setfill('0') << std::setw(2) << 1 + struc_time->tm_mon << std::setfill('0') << std::setw(2) << struc_time->tm_mday << "_" << std::setfill('0') << std::setw(2) << struc_time->tm_hour << std::setfill('0') << std::setw(2) << struc_time->tm_min << std::setfill('0') << std::setw(2)<< struc_time->tm_sec << "] ";
}

int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;
