#include <iostream>
using namespace std;
int main()
{
	int height; // delcaring loop variables
	int HR1; int HR2; int HR3; int HR4; int HR5;
	height = 0; //initialising loop variables;
	cout << "Welcome to Meds & More Pharmacy, for all your pharmaceutical needs!" << endl;
	while (height <= 199)
	{
		cout << "Enter your height: " << endl;
		cin >> height;
		height++;
		if (height <=159)
		{
			cout << " Height Range 0-159: " << HR1 << endl;
			HR1++;
	}

	return 0;
}