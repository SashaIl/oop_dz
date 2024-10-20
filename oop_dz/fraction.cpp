#include "fraction.h"

void Fraction::set_fraction_one(int numerator, int denominator) {
	if (denominator == 0) {
		cout << "ErorDivisionZero\n";
		return;
	}
	else {
		numerator_one = numerator;
		denominator_one = denominator;
	}
}

void Fraction::set_fraction_two(int numerator, int denominator) {
	if (denominator == 0) {
		cout << "ErorDivisionZero\n";
		return;
	}
	else {
		numerator_two = numerator;
		denominator_two = denominator;
	}
}



int Fraction::get_numerator_one() {
	return numerator_one;
}
int Fraction::get_denominator_one() {
	return denominator_one;
}

int Fraction::get_numerator_two() {
	return numerator_two;
}
int Fraction::get_denominator_two() {
	return denominator_two;
}

void Fraction::add_fraction() {
	int max_numerator = denominator_one > denominator_two ? denominator_one : denominator_two;
	int common_denom;
	for (int i = max_numerator;; i++) {
		if (denominator_one % i == 0 && denominator_two % i == 0) {
			common_denom = i;
			break;
		}
	}
	int doings = numerator_one * denominator_two + numerator_two * denominator_one;
	cout << "\n\n";
	cout << numerator_one << "/" << denominator_one << " + " << numerator_two << "/" << denominator_two << " = ";
	cout << "\b " << doings << "/" << common_denom;
	if (doings == 0) cout << " \b = " << 0;
}

void Fraction::sub_fraction() {
	int max_numerator = denominator_one > denominator_two ? denominator_one : denominator_two;
	int common_denom;
	for (int i = max_numerator;; i++) {
		if (denominator_one % i == 0 && denominator_two % i == 0) {
			common_denom = i;
			break;
		}
	}
	int doings = numerator_one * denominator_two - numerator_two * denominator_one;
	cout << "\n\n";
	cout << numerator_one << "/" << denominator_one << " - " << numerator_two << "/" << denominator_two << " = ";
	cout << "\b " << doings << "/" << common_denom;
	if (doings == 0) cout << " \b = " << 0;
}

void Fraction::mul_fraction() {
	int doings_numerator = numerator_one * numerator_two;
	int doings_denominator = denominator_one * denominator_two;

	cout << "\n\n";
	cout << numerator_one << "/" << denominator_one << " * " << numerator_two << "/" << denominator_two << " = ";
	cout << doings_numerator << "/" << doings_denominator;

	if (doings_numerator == 0) {
		cout << " = " << 0;
	}
}

void Fraction::div_fraction() {
	if (numerator_two == 0) {
		cout << "Error: Division by zero!" << endl;
		return;
	}

	int doings_numerator = numerator_one * denominator_two;
	int doings_denominator = denominator_one * numerator_two;

	cout << "\n\n";
	cout << numerator_one << "/" << denominator_one << " / " << numerator_two << "/" << denominator_two << " = ";
	cout << doings_numerator << "/" << doings_denominator;

	if (doings_numerator == 0) {
		cout << " = " << 0;
	}
}