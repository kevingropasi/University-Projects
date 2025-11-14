#include <iostream>
using namespace std;
int main()
{
	int height; // delcaring loop variables
	int HR1; int HR2; int HR3; int HR4; int HR5;
	HR1 = 1; HR2 = 1; HR3 = 1; HR4 = 1; HR5 = 1;
	height = 0; //initialising loop variables;
	cout << "Welcome to Meds & More Pharmacy, for all your pharmaceutical needs!" << endl;
	while (height <= 199)
	{
		cout << "Enter your height: ";  cin >> height;
		height++;
		if (height <= 159) {
			cout << " Height Range 0-159: " << HR1 << endl;
			HR1++;
		}
		if (height >= 160 and height <= 169) {
			cout << "Height Range 160-169: " << HR2 << endl;
			HR2++;
		}
		if (height >= 170 and height <= 179) {
			cout << "Height Range 170-179: " << HR3 << endl;
			HR3++;
		}
		if (height >= 180 and height <= 189) {
			cout << "Height Range 180-189: " << HR4 << endl;
			HR4++;
		}
		if (height >= 190 and height <= 199) {
			cout << "Height Range 190-199: 0 " << HR5 << endl;
		}
	}
		return 0;
		}