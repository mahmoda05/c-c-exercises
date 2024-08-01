#include <iostream>
#include <iomanip>			//for setprecision to work

using std::cout;			
using std::cin;
using std::string;

//initialize first the function of area and volume
double area(double length, double width);		
double volume(double length, double width, double heigth);	

int main()
{
	double length{}, width{}, height{};

	cout << "Enter the length: ";
	cin >> length;
	cout << "Enter the width: ";
	cin >> width;
	cout << "Enter the height: ";
	cin >> height;
	double calc_volume = volume(length, width, height);	//called the function
	double calc_area = area(length, width);		//called the function
	cout << std::fixed << std::setprecision(2);		//setting 2 decimal point.
	cout << "The area of the rectangle is " << calc_area << " squared.\n";
	cout << "The volume of the prism is " << calc_volume << " cube.\n";

	cout << "\n\n";
	return 0;
}


double area( double length, double width ){		//the function initialize at the top
	return length * width;
}

double volume(double length, double width, double heigth) {
	return length * width * heigth;
}


