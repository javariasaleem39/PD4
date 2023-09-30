#include<iostream>
using namespace std;

void possibleBonus(int a, int b);

main()
{
int a, b;
cout<< "Enter your position: ";
cin>>a;
cout<< "Enter your friend's position: ";
cin>>b;
possibleBonus(a, b);
}

void possibleBonus(int a, int b)
{
int gap;
gap= b-a;
if (gap > 6)
{
	cout<< "false";
}
else
 	cout<< "true";
}