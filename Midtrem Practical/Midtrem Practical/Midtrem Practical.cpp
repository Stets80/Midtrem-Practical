// Midtrem Practical.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int GetValidatedInt(const char* strMessage, int nMinimumRange = 0, int nMaximumRange = 0);
void clearbuffer();
int main()
{
	int question = 1;
	int input = 0;
	bool correct = false;

	srand(time(NULL));
	question = rand() % 4 + 1;
	switch (question)
	{
	case 1:
		std::cout << "2 + 2 =\n1:1\n2:2\n3:3\n4:4\n";
		if (4 == GetValidatedInt("chose an aswer between 1-4", 1, 4))
		{
			correct = true;
		}
		else
		{
			correct = false;
		}
		break;
	case 2:
		std::cout << "when was the first DOOM relased? \n1:2016\n2:1993\n3:1996\n4:1991\n";
		if (2 == GetValidatedInt("chose an aswer between 1-4", 1, 4))
		{
			correct = true;
		}
		else
		{
			correct = false;
		}
		break;
	case 3:
		std::cout << "This stament is false!\n1:True\n2:False\n3:None of the above\n";
		if (3 == GetValidatedInt("chose an aswer between 1-4", 1, 3))
		{
			correct = true;
		}
		else
		{
			correct = false;
		}
		break;
	case 4:
		std::cout << "1700 is ?\n1:5 o clock\n2:1 o clock\n3:4 o clock\n4:6 o clock\n";
		if (1 == GetValidatedInt("chose an aswer between 1-4", 1, 4))
		{
			correct = true;
		}
		else
		{
			correct = false;
		}
		break;
	default:
		break;
	}
	if (correct)
	{
		system("cls");
		std::cout << "that was the correct answer!\n";
		system("pause");
	}
	else
	{
		system("cls");
		std::cout << "that was the wrong answer try again next time\n";
		system("pause");

	}
}


int GetValidatedInt(const char* strMessage, int nMinimumRange, int nMaximumRange)
{
	int userinput;

	while (true)
	{
		std::cout << strMessage << std::endl;
		std::cin >> userinput;

		if (std::cin.fail())
		{
			clearbuffer();
			std::cout << "not a number" << std::endl;
		}
		else if ((nMinimumRange == 0) & (nMaximumRange == 0))
		{
			return userinput;
		}
		else if ((userinput >= nMinimumRange) & (userinput <= nMaximumRange))
		{
			return userinput;
		}
		std::cout << "not vaild input" << std::endl;
	}
}
void clearbuffer()
{
	std::cin.clear();
	std::cin.ignore(INT_MAX, '\n');
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
