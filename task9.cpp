#include<iostream>
using namespace std;

void tpChecker(int people, int tp);

main()
{
int people, tp;
cout<< "Number of people in the household: ";
cin>>people;
cout<< "Number of rolls of TP: ";
cin>>tp;
tpChecker(people, tp);
}

void tpChecker(int people, int tp)
{
int roll;
roll = 500 ;
int tRolls = tp * roll;
int personUseSheetsPerDay = 57;
int tPersonUseSheetsPerDay = people * personUseSheetsPerDay;
int days = tRolls / tPersonUseSheetsPerDay;
if (days > 14)
{
	cout<< "Your TP will last " << days << " days, no need to panic!"<<endl;
}
else
	cout<< "Your TP will only last " << days << " days, buy more!";
}