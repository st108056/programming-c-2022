#include<iostream>
#include<locale.h>

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");

	int a = 0;
	
	std::cin >> a;

	int h = a / 100;
	int d = (a - h * 100) / 10;
	int i = a - h * 100 - d * 10;

	switch (h)
	{
	case 1:
		std::cout << "сто ";
		break;
	case 2:
		std::cout << "двести ";
		break;
	case 3:
		std::cout << "триста ";
		break;
	case 4:
		std::cout << "четыреста ";
		break;
	case 5:
		std::cout << "пятьсот ";
		break;
	case 6:
		std::cout << "шестьсот ";
		break;
	case 7:
		std::cout << "семьсот ";
		break;
	case 8:
		std::cout << "восемьсот ";
		break;
	case 9:
		std::cout << "девятьсот ";
		break;
	}

	switch (d)
	{
	case 2:
		std::cout << "двадцать ";
		break;
	case 3:
		std::cout << "тридцать ";
		break;
	case 4:
		std::cout << "сорок ";
		break;
	case 5:
		std::cout << "пятьдесят ";
		break;
	case 6:
		std::cout << "шестьдесят ";
		break;
	case 7:
		std::cout << "семьдесят ";
		break;
	case 8:
		std::cout << "восемьдесят ";
		break;
	case 9:
		std::cout << "девяносто ";
		break;
	case 1:
		switch (i)
		{
		case 0:
			std::cout << "десять ";
			break;
		case 1:
			std::cout << "одиннадцать ";
			break;
		case 2:
			std::cout << "двенадцать ";
			break;
		case 3:
			std::cout << "тринадцать ";
			break;
		case 4:
			std::cout << "четырнадцать ";
			break;
		case 5:
			std::cout << "пятнадцать ";
			break;
		case 6:
			std::cout << "шестнадцать ";
			break;
		case 7:
			std::cout << "семьнадцать ";
			break;
		case 8:
			std::cout << "восемьнадцать ";
			break;
		case 9:
			std::cout << "девятнадцать";
			break;
		}
		break;
	}

	if (d != 1)
	{
		switch (i)
		{
		case 1:
			std::cout << "один ";
			break;
		case 2: 
			std::cout << "два ";
			break;
		case 3:
			std::cout << "три ";
			break;
		case 4:
			std::cout << "четыре ";
			break;
		case 5:
			std::cout << "пять ";
			break;
		case 6:
			std::cout << "шесть ";
			break;
		case 7:
			std::cout << "семь ";
			break;
		case 8:
			std::cout << "восемь ";
			break;
		case 9:
			std::cout << "девять ";
			break;
		}
	}

	if (i == 1 && d != 1)
	{
		std::cout << "банан";
	}
	else if (i > 1 && i < 5 && d != 1)
	{
		std::cout << "банана";
	}
	else
	{
		std::cout << "бананов";
	}

	return EXIT_SUCCESS;
}