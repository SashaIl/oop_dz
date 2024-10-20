#include <iostream>
#include "fraction.h"
using namespace std;


int main()
{
	int numerator_one;
	int numerator_two;
	int denominator_one;
	int denominator_two;

	cout << "input numerator for first fraction: "; cin >> numerator_one;
	cout << "input denominator for first fraction: "; cin >> denominator_one;
	cout << "\n";
	cout << "input numerator for first fraction: "; cin >> numerator_two;
	cout << "input denominator for first fraction: "; cin >> denominator_two;

	Fraction f;
	
	f.set_fraction_one(numerator_one, denominator_one);
	f.set_fraction_two(numerator_two, denominator_two);

	f.add_fraction();
	f.sub_fraction();
	f.mul_fraction();
	f.div_fraction();
}
