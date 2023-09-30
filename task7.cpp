#include<iostream>
using namespace std;

void flowerShop(float redRose, int whiteRose, int tulip);

main()
{
float redRose, whiteRose, tulip;
cout<< "Red Rose: ";
cin>>redRose;
cout<< "White Rose: ";
cin>>whiteRose;
cout<< "Tulips: ";
cin>>tulip;
flowerShop(redRose, whiteRose, tulip);
}

void flowerShop(float redRose, int whiteRose, int tulip)
{
float Price_red = 2.00 * redRose;
float Price_white = 4.10 * whiteRose;
float Price_tulip = 2.50 * tulip;
float tprice = Price_red + Price_white + Price_tulip;
cout<< "Original Price: $" << tprice << endl;
float discount = tprice - (tprice * 0.2);
if (tprice > 200)
{
	cout << "Price after Discount: $" << discount;
}
else 
	cout<< "No discount applied.";
}
