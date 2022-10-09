#include<iostream>

int main(int argc, char* argv[])
{

	int a = 0;
	
	std::cin >> a;

	int h = a / 100;
	int d = (a - h * 100) / 10;
	int i = a - h * 100 - d * 10;

	switch (h)
	{
	case 1:
		std::cout << "sto ";
		break;
	case 2:
		std::cout << "dvesti ";
		break;
	case 3:
		std::cout << "trista ";
		break;
	case 4:
		std::cout << "chetyresta ";
		break;
	case 5:
		std::cout << "pyat'sot ";
		break;
	case 6:
		std::cout << "shest'sot ";
		break;
	case 7:
		std::cout << "sem'sot ";
		break;
	case 8:
		std::cout << "vosem'sot ";
		break;
	case 9:
		std::cout << "devyat'sot ";
		break;
	}

	switch (d)
	{
	case 2:
		std::cout << "dvadtsat' ";
		break;
	case 3:
		std::cout << "tridtsat' ";
		break;
	case 4:
		std::cout << "sorok ";
		break;
	case 5:
		std::cout << "pyat'desyat ";
		break;
	case 6:
		std::cout << "shest'desyat ";
		break;
	case 7:
		std::cout << "sem'desyat ";
		break;
	case 8:
		std::cout << "vosem'desyat ";
		break;
	case 9:
		std::cout << "devyanosto ";
		break;
	case 1:
		switch (i)
		{
		case 0:
			std::cout << "desyat' ";
			break;
		case 1:
			std::cout << "odinnadtsat' ";
			break;
		case 2:
			std::cout << "dvenadtsat' ";
			break;
		case 3:
			std::cout << "trinadtsat' ";
			break;
		case 4:
			std::cout << "chetyrnadtsat' ";
			break;
		case 5:
			std::cout << "pyatnadtsat' ";
			break;
		case 6:
			std::cout << "shestnadtsat' ";
			break;
		case 7:
			std::cout << "semnadtsat' ";
			break;
		case 8:
			std::cout << "vosemnadtsat' ";
			break;
		case 9:
			std::cout << "devyatnadtsat' ";
			break;
		}
		break;
	}

	if (d != 1)
	{
		switch (i)
		{
		case 1:
			std::cout << "odin ";
			break;
		case 2: 
			std::cout << "dva ";
			break;
		case 3:
			std::cout << "tri ";
			break;
		case 4:
			std::cout << "chetyre ";
			break;
		case 5:
			std::cout << "pyat' ";
			break;
		case 6:
			std::cout << "shest' ";
			break;
		case 7:
			std::cout << "sem' ";
			break;
		case 8:
			std::cout << "vosem' ";
			break;
		case 9:
			std::cout << "devyat' ";
			break;
		}
	}

	if (i == 1 && d != 1)
	{
		std::cout << "banan";
	}
	else if (i > 1 && i < 5 && d != 1)
	{
		std::cout << "banana";
	}
	else
	{
		std::cout << "bananov";
	}

	return EXIT_SUCCESS;
}