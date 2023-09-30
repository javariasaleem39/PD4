#include<iostream>
using namespace std;

void printMenu();
void aggregate();
void Aggregate();
void compare();

main()
{ 
system("cls");
printMenu();
aggregate();
Aggregate();
compare();
}

void printMenu()
{
cout<< "# # #  # ### # # ### ###   ###  ### ### # #      #  ###  #   # ###  ###  ###  ### ### #  #     #   #  #  #  #  #   ###  ### #   # ### #  # ### "<<endl;
cout<< "# # ## #  #  # # #   #  # #      #   #  # #     # # #  # ## ##  #  #    #      #  # # ## #     ## ## # # ## # # # #     #   ## ## #   ## #  #  "<<endl;
cout<< "# # ####  #  # # ##  ###   ##    #   #   #      ### #  # # # #  #   ###  ###   #  # # ####     # # # ### #### ### # ##  ##  # # # ##  ####  #   "<<endl;
cout<< "# # # ##  #  # # #   # ##    #   #   #   #      # # #  # #   #  #      #    #  #  # # # ##     #   # # # # ## # # #  #  #   #   # #   # ##  #  "<<endl;
cout<< "### #  # ###  #  ### #  # ###   ###  #   #      # # ###  #   # ###  ###  ###  ### ### #  #     #   # # # #  # # #  ###  ### #   # ### #  #  #   "<<endl;
cout<<endl<<endl<<endl;
cout<< "                                                     ###  # #  ###  ### ### #   # "<<endl;
cout<< "                                                    #     # # #      #  #   ## ##   "<<endl;
cout<< "                                                     ###   #   ###   #  ##  # # # "<<endl;
cout<< "                                                        #  #      #  #  #   #   # "<<endl;
cout<< "                                                     ###   #   ###   #  ### #   # "<<endl;
cout<<endl<<endl;
}

void aggregate()
{
string name;
float matric, inter, ecat;
cout<< "Enter your name: ";
cin>> name;
cout<< "Enter your matric marks (out of 1100): ";
cin>>matric;
cout<< "Enter your intermediate marks (out of 550): ";
cin>>inter;
cout<< "Enter your Ecat marks (out of 400): ";
cin>>ecat;
float aggregate;
aggregate = (matric/1100 * 0.3) + (inter/550 * 0.3) + (ecat/400 * 0.4);
float finalAggregate;
finalAggregate = aggregate * 100;
cout<< "Aggregate: " << finalAggregate << "%" <<endl<<endl<<endl;
}

void Aggregate()
{
string Name;
float matric, inter, ecat;
cout<< "Enter your name: ";
cin>> Name;
cout<< "Enter your matric marks (out of 1100): ";
cin>>matric;
cout<< "Enter your intermediate marks (out of 550): ";
cin>>inter;
cout<< "Enter your Ecat marks (out of 400): ";
cin>>ecat;
float aggregate;
aggregate = (matric/1100 * 0.3) + (inter/550 * 0.3) + (ecat/400 * 0.4);
float finalAggregate;
finalAggregate = aggregate * 100;
cout<< "Aggregate: " << finalAggregate << "%" << endl<<endl;
}

void compare()
{
char op;
if (Aggregate>aggregate)
{ 
	cout<< Aggregate << " achieved highest score" << endl;
}
else
{
 	cout<< aggregate << " achieved highest score" << endl;
}
}