#include<iostream>
using namespace std;

void pet(int holidays);
 
main()
{
int holidays;
cout<< "Holidays: ";
cin>>holidays;
pet(holidays);
}

void pet(int holidays)
{
int year = 365;
int working_days = year-holidays;
int time_games = (working_days*63) + (holidays*127);
int difference = 30000 - time_games;
int hours = difference / 60;
int minutes = difference%60;
int Difference = time_games - 30000;
int Hours = Difference / 60;
int Minutes = Difference % 60;
if ( time_games > 30000)
{
	cout<< "Tom will run away" << endl;
	cout<< Hours << " hours and " << Minutes << " minutes for play" << endl;
}
else
{
	cout<< "Tom sleeps well" << endl;
	cout<< hours << " hours and " << minutes << " minutes less for play";
}
}