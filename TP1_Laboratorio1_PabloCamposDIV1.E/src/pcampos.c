/*
 * pcampos.c
 *
 *  Created on: 12 sept. 2020
 *      Author: Pablo y Lulu
 */

#include <stdio.h>
#include <stdlib.h>


int sum(int value1, int value2) { //suma
	int total;
	total = value1 + value2;

	return total;

} // fin de suma

int subtraction(int value1, int value2) { //resta
	int total;
	total = value1 - value2;

	return total;

} //fin de resta

float divide(int value1, int value2) { // division

	return (float) value1 / value2;

} // fin division

int multiply(int value1, int value2) { // multiplicacion

	int total;

	total = value1 * value2;

	return total;

} // fin de multiplicacion

int factorialValue1(int value1) {  // Factorial
	int total1;
	if (value1 <= 1) {
		total1 = 1;
	} else {
		total1 = value1 * (factorialValue1(value1 - 1));
	}
	return total1;
}  // fin factorial numero 1

int factorialValue2(int value2) {  // Factorial
	int total2;
	if (value2 <= 1) {
		total2 = 1;
	} else {
		total2 = value2 * (factorialValue1(value2 - 1));
	}
	return total2;
}  // fin factorial num 2
