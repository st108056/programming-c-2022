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
		std::cout << "��� ";
		break;
	case 2:
		std::cout << "������ ";
		break;
	case 3:
		std::cout << "������ ";
		break;
	case 4:
		std::cout << "��������� ";
		break;
	case 5:
		std::cout << "������� ";
		break;
	case 6:
		std::cout << "�������� ";
		break;
	case 7:
		std::cout << "������� ";
		break;
	case 8:
		std::cout << "��������� ";
		break;
	case 9:
		std::cout << "��������� ";
		break;
	}

	switch (d)
	{
	case 2:
		std::cout << "�������� ";
		break;
	case 3:
		std::cout << "�������� ";
		break;
	case 4:
		std::cout << "����� ";
		break;
	case 5:
		std::cout << "��������� ";
		break;
	case 6:
		std::cout << "���������� ";
		break;
	case 7:
		std::cout << "��������� ";
		break;
	case 8:
		std::cout << "����������� ";
		break;
	case 9:
		std::cout << "��������� ";
		break;
	case 1:
		switch (i)
		{
		case 0:
			std::cout << "������ ";
			break;
		case 1:
			std::cout << "����������� ";
			break;
		case 2:
			std::cout << "���������� ";
			break;
		case 3:
			std::cout << "���������� ";
			break;
		case 4:
			std::cout << "������������ ";
			break;
		case 5:
			std::cout << "���������� ";
			break;
		case 6:
			std::cout << "����������� ";
			break;
		case 7:
			std::cout << "����������� ";
			break;
		case 8:
			std::cout << "������������� ";
			break;
		case 9:
			std::cout << "������������";
			break;
		}
		break;
	}

	if (d != 1)
	{
		switch (i)
		{
		case 1:
			std::cout << "���� ";
			break;
		case 2: 
			std::cout << "��� ";
			break;
		case 3:
			std::cout << "��� ";
			break;
		case 4:
			std::cout << "������ ";
			break;
		case 5:
			std::cout << "���� ";
			break;
		case 6:
			std::cout << "����� ";
			break;
		case 7:
			std::cout << "���� ";
			break;
		case 8:
			std::cout << "������ ";
			break;
		case 9:
			std::cout << "������ ";
			break;
		}
	}

	if (i == 1 && d != 1)
	{
		std::cout << "�����";
	}
	else if (i > 1 && i < 5 && d != 1)
	{
		std::cout << "������";
	}
	else
	{
		std::cout << "�������";
	}

	return EXIT_SUCCESS;
}