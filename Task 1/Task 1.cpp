#include <iostream> <string>
using namespace std;
int main()
{ // declaring and initialising loop variables
	double height = 0; int HR1 = 0; int HR2 = 0; int HR3 = 0; int HR4 = 0; int HR5 = 0;
	cout << "Welcome to Meds & More Pharmacy, for all your pharmaceutical needs!" << endl;
	cout << "You can stop this program at any time by entering a number above the maximum height [199]" << endl;
	while (height <= 199) // Beginning of Task 1, I'm using a 'while' loop structure to create an event-controlled loop
	{
		cout << "Enter the customer's height: "; cin >> height; //Entering values to then be filtered into each loop variable on line 5.
		if (height <= 159) HR1++; //organising height ranges into else if statements to filter integer values given by user on line 10.
		else if (height <= 169) HR2++;
		else if (height <= 179) HR3++;
		else if (height <= 189) HR4++;
		else if (height <= 199) HR5++;
	}
	if (height >= 199) { // creating an output display for the horizontal histogram using for loops
		cout << "       Histogram      " << endl;
		cout << "Height Range   0-159  "; for (int i = 0; i < HR1; i++) cout << "+"; cout << endl;
		cout << "Height Range 160-169: "; for (int i = 0; i < HR2; i++) cout << "+"; cout << endl;
		cout << "Height Range 170-179: "; for (int i = 0; i < HR3; i++) cout << "+"; cout << endl;
		cout << "Height Range 180-189: "; for (int i = 0; i < HR4; i++) cout << "+"; cout << endl;
		cout << "Height Range 190-199: "; for (int i = 0; i < HR5; i++) cout << "+"; cout << endl;
		}
		return 0;
}