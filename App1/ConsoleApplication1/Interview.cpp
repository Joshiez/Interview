// Interview.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Interview.h"

using namespace std;

int main()
{
	Interview interview;
	interview.solutions();
	return 0;
}

Interview::Interview()
{
}

int Interview::solutions()
{
	cout << "Please choose a solution to run" << endl;
	cout << "1 - Fibonacci" << endl;

	size_t option = 0;
	cin >> option;

	switch (option)
	{
	case 1: fibonacci();

	}

	cout << endl << "Finished" << endl;
	system("pause");
	return 0;
}

void Interview::fibonacci()
{
	cout << "Give a number: ";

	size_t n = 0;
	cin >> n;

	size_t fib = 0;

	int num1 = 0;
	int num2 = 1;

	if (n == 0)
	{
		fib = 0;
	}
	else if (n == 1)
	{
		fib = 1;
	}
	else
	{
		for (int i = 0; i < n - 1; ++i)
		{
			fib = num1 + num2;
			num1 = num2;
			num2 = fib;
		}
	}

	cout << "Fibonacci of '" << n << "' is: " << fib << endl;
}



