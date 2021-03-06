#ifndef DRIVER_MEMBERDATAANDMENUOPTIONS_H_
#define DRIVER_MEMBERDATAANDMENUOPTIONS_H_
#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <string>
using namespace std;
#pragma once

class InterestCalc
{
private:

	int m_numYears;

	double m_initIinvest;

	double m_monthDeposit;

	double m_total;

	double m_apr;

	double m_intEarned;


public:

	InterestCalc();

	InterestCalc(double t_firstDep, double t_monthContrib, double t_interest, int t_years);

	double calcTotal(bool t_monthlyDeposit);

	void initTotal(double t_newTotal);

	double getIntEarned();

	void setIntEarned(double t_interest);

	void setInvest(double t_investAmt);

	double getInvest();

	void setDeposit(double t_depositAmt);

	double getDeposit();

	void setApr(double t_newApr);

	double getApr();

	void setYears(int t_numYears);

	int getYears();

	void printDisplayToUser();

	void inputUserData();

};
#endif	// DRIVER_MEMBERDATAANDMENUOPTIONS_H_ 