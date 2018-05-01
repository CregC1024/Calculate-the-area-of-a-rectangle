//***********************************************************************
//file name: program 3-1
//purpose :  calculate and display area of a rectangle
//author:    creg c. sullivan sr.
//date :     05/31/2010
//***********************************************************************

// headers and other technical items

#include <iostream>
using namespace std;

// function prototypes

void pause (void);

//***************************************
//main
//***************************************

int main (void)
{
	int length, width, area;

	cout << "This program calculates the area of a rectangle.\n";

	// have the user input the rectangle's length and width
	cout <<"\n What is the length of the rectangle? ";
	cin >> length;
	cout <<"\n What is the width of the recatangle? ";
	cin >> width;

	// compute and display the area
	area = length * width;
	cout <<"\n The area of the rectangle is >>>>>>> " << area << endl;

	pause();

	return 0;
}

//*********************************************************************
//pause
//*********************************************************************

void pause (void)
{
	cout <<"\n\n";
	system("pause");
	cout << "\n\n";
	return;
}

//***************************
//end of code
//***************************



