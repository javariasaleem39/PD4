#include<iostream>
using namespace std;

void longestTime(int h, int m);

main()
{
int h, m;
cout<<"Enter the number of hours: ";
cin>>h;
cout<<"Enter the number of minutes: ";
cin>>m;
longestTime(h, m);
}
 
void longestTime(int h, int m)
{
int converse;
converse = m/60;
if (h >= converse)
{
	cout<<h;
}
else 
	cout<< m;
}
