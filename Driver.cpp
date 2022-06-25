#include <iostream>
#include <iomanip>
#include <string>
#include <stdio.h>
#include "MemberDataAndMenuOptions.h"
using namespace std;

int main()
{
	InterestCalc invest;

	invest.inputUserData();

	system( "pause" );

	invest.printDisplayToUser();

	system( "pause" );

	return 0;

}