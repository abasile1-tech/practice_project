#include <iostream>
#include "my_math.h"

int main(){
	std::cout << "Please type your name: ";
	std::string userNameInput = "";
	std::cin >> userNameInput;
	std::cout << "Your name is: " << userNameInput << std::endl;

	std::cout << "What is the first number? ";
	std::string firstNumberInput = "";
	std::cin >> firstNumberInput;

	std::cout << "What is the second number? ";
	std::string secondNumberInput = "";
	std::cin >> secondNumberInput;

	std::cout << "Would you like to add, subtract, multiply, divide, exponent, or factorial? ";
	std::string MathOpInput = "";
	std::cin >> MathOpInput;

	float result = 0;

	if (MathOpInput == "add" ) {
		result = std::stof(firstNumberInput) + std::stof(secondNumberInput);
		std::cout << firstNumberInput << " + " << secondNumberInput << " = " << result << std::endl;
	}

	else if (MathOpInput == "subtract" ) {
		result = std::stof(firstNumberInput) - std::stof(secondNumberInput);
		std::cout << firstNumberInput << " - " << secondNumberInput << " = " << result << std::endl;
	}

	else if (MathOpInput == "multiply" ) {
		result = std::stof(firstNumberInput) * std::stof(secondNumberInput);
		std::cout << firstNumberInput << " * " << secondNumberInput << " = " << result << std::endl;
	}

	else if (MathOpInput == "divide" ) {
		result = std::stof(firstNumberInput) / std::stof(secondNumberInput);
		std::cout << firstNumberInput << " / " << secondNumberInput << " = " << result << std::endl;
	}

	else if (MathOpInput == "exponent" ) {
		result = exponent(std::stoi(firstNumberInput), std::stoi(secondNumberInput));
		std::cout << std::stoi(firstNumberInput) << " ^ " << std::stoi(secondNumberInput) << " = " << result << std::endl;
	}

	else if (MathOpInput == "factorial" ) {
		result = factorial(std::stoi(firstNumberInput));
		std::cout << "factorial(" << std::stoi(firstNumberInput) << ") = " << result << std::endl;
		result = factorial(std::stoi(secondNumberInput));
		std::cout << "factorial(" << std::stoi(secondNumberInput) << ") = " << result << std::endl;
	}

	else {
		std::cout << "No valid response given.";
	}

	return 0;
}