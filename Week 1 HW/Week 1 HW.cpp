#include <iostream>
using namespace std;

int main()
{
	int width, length, area, perimeter;

	cout << "\n\n Calculate the Area and Perimeter of a Rectangle : \n";
	cout << "\n ----------------------------------------------------\n";

	cout << "Enter the width of the rectangle :";
	cin >> width;
	
	cout << "Enter the length of the rectangle :";
	cin >> length;

	area = width * length;
	perimeter = 2*(width + length); 
	
	cout << "The Area of the rectangle = " << area << endl;
	cout << "The Perimeter of the rectangle = " << perimeter << endl;

	system("pause"); 

	return 0;
}