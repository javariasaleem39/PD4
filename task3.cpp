#include<iostream>
using namespace std;
 
void country(string name, float price);

main()
{
string name;
float price;
cout<< "Enter the country's name: ";
cin>>name;
cout<< "Enter the ticket price in dollars: $";
cin>> price;
country(name, price);
}

void country(string name, float price)
{
float dis_pakistan;
if (name == "Pakistan")
{
dis_pakistan = price - (price * 0.05);
	cout<< "Final ticket price after discount: $" << dis_pakistan;
}
 
float dis_india;
if (name == "India")
{
dis_india = price - (price * 0.2);
	cout<< "Final ticket price after discount: $" <<dis_india;
}

float dis_ireland;
if (name == "Ireland")
{
dis_ireland = price - (price * 0.1);
	cout<< "Final ticket price after discount: $" <<dis_ireland;
}

float dis_england;
if (name == "England")
{
dis_england = price - (price * 0.3);
	cout<< "Final ticket price after discount: $" <<dis_england;
}

float dis_canada;
if (name == "Canada")
{
dis_canada = price - (price * 0.45);
	cout<< "Final ticket price after discount: $" <<dis_canada;
}
}