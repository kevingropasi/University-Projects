#include <iostream> <string>
using namespace std;
int main()
{
	double height = 0; double totalheights = 0; // declaring and initialising loop variables
	int HR1 = 0; int HR2 = 0; int HR3 = 0; int HR4 = 0; int HR5 = 0;
	cout << "Welcome to Meds & More Pharmacy, for all your pharmaceutical needs!" << endl;
	cout << "You can stop this program at any time by entering a number above the maximum height [199]" << endl;
	// Task 1
	while (height <= 199) // using a 'while' loop structure to create an event-controlled loop
	{
		cout << "Enter the customer's height: "; cin >> height;
		height++;
		totalheights++;
		if (height <= 159) { //organising height ranges into if statements
			HR1++;
		}
		if (height >= 160 and height <= 169) {
			HR2++;
		}
		if (height >= 170 and height <= 179) {
			HR3++;
		}
		if (height >= 180 and height <= 189) {
			HR4++;
		}
		if (height >= 190 and height <= 199) {
			HR5++;
		}
	}
		if (height > 199) { // creating an output display for the histogram
			cout << "      Histogram       " << endl;
			cout << "Height Range   0-159: " << HR1 << endl; cout << "Height Range 160-169: " << HR2 << endl;
			cout << "Height Range 170-179: " << HR3 << endl; cout << "Height Range 180-189: " << HR4 << endl;
			cout << "Height Range 190-199: " << HR5 << endl;
		}
// Task 2
		cout << "  Additional Statistics  " << endl;
		cout << "Total number of customers in day whose heights were measured: " << totalheights << endl;
        int	sum180 = HR1 + HR2 + HR3;
		cout << "Total number of customers in a day below 180cm: " << sum180 << endl;
		return 0;
		}