#pragma once
#include <iostream>
using namespace std;
class Fraction
{

	int numerator_one;
	int denominator_one;

	int numerator_two;
	int denominator_two;

	bool check_zero;

public:

	void set_fraction_one(int, int);
	void set_fraction_two(int, int);

	int get_numerator_one();
	int get_denominator_one();

	int get_numerator_two();
	int get_denominator_two();
	
	void add_fraction();
	void sub_fraction();
	void mul_fraction();
	void div_fraction();

};

