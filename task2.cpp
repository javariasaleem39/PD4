#include<iostream>
using namespace std;
void Reverse(string op);

main() 
{
string op;
cout<< "Enter 'true' or 'false': ";
cin>>op;
Reverse(op);
}

void Reverse(string op)
{
if (op=="true")
{
	cout<< "false";
}
else 
	cout<< "true";
}