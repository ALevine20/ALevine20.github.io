// CIS161 2.16.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>	//enables input and output




int main() {
	//declaring and initializing variables
	int number1{ 0 }; //first int to add
	int number2{ 0 }; //second int to add
	int sum{ 0 }; //sum of num1 and num2
	int product{ 0 }; // product of num1 and num2
	int difference{ 0 }; //difference of num1 and num2
	int quotient{ 0 }; //qotient of num1 and num2

	std::cout << "Enter First Integer: "; //user imputs data
	std::cin >> number1; // read from user into number1

	std::cout << "Enter Second Integer: "; //user inputs data
	std::cin >> number2; //reads from user into number2

	sum = number1 + number2 // add the numbers; store result in sum
	; product = number1 * number2 //multipy the numbers
	; difference = number1 - number2 //subtract the two numbers
	; quotient = number1 / number2 //divide two numbers

		

	; std::cout << "Sum is " << sum << std::endl; //display sum; end line
	; std::cout << "Product is " << product << std::endl; //display product
	; std::cout << "Difference is " << difference << std::endl; //display difference
	; std::cout << "Quotient is " << quotient << std::endl; //display quotient

} //end function main
