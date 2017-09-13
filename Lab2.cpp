#include <iostream>
#include <limits.h>


void clear(void){ //Clear the input buffer
	char testChar = getchar();
	while(testChar != '\n') {
		testChar = getchar();
	}

}

int main(void){
	//Variables
	int menuBreak = 1;
	char input;
	int output;
	unsigned short factor;
	unsigned long factorOutput;
	unsigned int year;
	int numerator;
	int denomenator;
	float maxNumber1;
	float maxNumber2;
	float dividOutput;
	
	while(true){ //True until function return
		
		input = 0;
		std::cout <<"\n This is the code for Lab 3"
		std::cout << "\n\n\nWelcome to the menu! Please Select\nA: Factorial of a number\nB: Leap year or not\nC: Maximum\nD: Division of two numebrs\nE: Exit\n";
		std::cout <<"Your selection: ";
		std::cin >> input;
		clear();

		switch(input){
	
			//Default Input
		default: 
			std::cout << "\nInvalid";
			input = '\n';
			break;
			


		//Factorial Calculation (Selection A)
		case 65:
		case 97:
			std::cout << "\nFactorial of a number";
			std::cout << "\nEnter a number: ";
			std::cin >> factor;
				if(factor <= 0){
				std::cout << "\nError Negative";
				clear();
				break;
				}
			factorOutput = factor;
			factor--;
				while(factor > 0){
					factorOutput = factorOutput*factor;
					factor--;
					}
				if(factorOutput <= LONG_MAX && factorOutput != 0){
					std::cout << "\nYour factored number = ";
					std::cout << factorOutput;
				}
				else {
					std::cout << "\nOverflow Error\nProgram Terminated \n";
					return 0; //Solution to unknown issue with program
					clear();
				}
			break;



		//Leap Year (Selection B)
		case 66:
		case 98:
			std::cout << "\nLeap year or not";
			std::cout << "\nPlease enter the year: ";
			std::cin >> year;
				if(year <= 0){
				std::cout << "\n Error, year can not be negative";
				break;
				}
			//Leap year Calculation
				if(year % 4 != 0) std::cout << "\nNot a leap year";
				if(year % 4 == 0 && year % 100 != 0) std::cout << "\nLeap year";
				if(year % 4 == 0 && year % 100 == 0 && year % 400 != 0) std::cout << "\nNot a leap year";
				if(year % 4 == 0 && year % 100 == 0 && year % 400 == 0) std::cout << "\nLeap year";	
				break;

		

		//Max Number (Selection C)
		case 67:
		case 99:
			std::cout << "\nMaximum";
			std::cout << "\nEnter a number";
			std::cin >> maxNumber1;
			std::cout << "\nEnter a second Number";
			std::cin >> maxNumber2;
			output = (maxNumber1 >= maxNumber2) ? maxNumber1 : maxNumber2;
			std::cout << "\nThe biggest nunber is: ";
			std::cout << output;
			break;



		//Division (Selection D)
		case 68:
		case 100:
			std::cout << "\nDivision of two numbers";
			std::cout << "\nEnter a numerator";
			std::cin >> numerator;
			std::cout << "\nEnter a denometator";
			std::cin >> denomenator;
			dividOutput = numerator/float(denomenator);
			std::cout << dividOutput;
			break;

		//Exit Program (Selection E)
		case 69:
		case 101:
			std::cout << "\nExit";
			return 1;
		
		}
	}

}