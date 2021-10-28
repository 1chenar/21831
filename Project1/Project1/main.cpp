#include <iostream>

int main()
{
	unsigned short n;
	std::cin >> n;

	if (n < 10 || n > 99)
	{
		std::cout << "It's not two digits!" << std::endl;
		return 0;
	}

	unsigned short m, q;
	
	m = n / 10;
	q = n % 10;

	switch (m)
	{
	case 1:
		switch (q)
		{
		case 0:
			std::cout << "ten" << std::endl;
			break;
		case 1:
			std::cout << "eleven" << std::endl;
			break;
		case 2:
			std::cout << "twelve" << std::endl;
			break;
		case 3:
			std::cout << "thirteen" << std::endl;
			break;
		case 4:
			std::cout << "fourteen" << std::endl;
			break;
		case 5:
			std::cout << "fifteen" << std::endl;
			break;
		case 6:
			std::cout << "sixteen" << std::endl;
			break;
		case 7:
			std::cout << "seventeen" << std::endl;
			break;
		case 8:
			std::cout << "eighteen" << std::endl;
			break;
		case 9:
			std::cout << "nineteen" << std::endl;
			break;
		default:
			break;
		}
		return 0;
	case 2:
		std::cout << "twenty ";
		
		break;
	case 3:
		std::cout << "thirty ";
		if (q == 0)
		{
			std::cout << std::endl;
			return 0;
		}
		break;
	case 4:
		std::cout << "fourty ";
		if (q == 0)
		{
			std::cout << std::endl;
			return 0;
		}
		break;
	case 5:
		std::cout << "fifty ";
		if (q == 0)
		{
			std::cout << std::endl;
			return 0;
		}
		break;
	case 6:
		std::cout << "sixty ";
		if (q == 0)
		{
			std::cout << std::endl;
			return 0;
		}
		break;
	case 7:
		std::cout << "seventy ";
		if (q == 0)
		{
			std::cout << std::endl;
			return 0;
		}
		break;
	case 8:
		std::cout << "eighty ";
		if (q == 0)
		{
			std::cout << std::endl;
			return 0;
		}
		break;
	case 9:
		std::cout << "ninety ";
		if (q == 0)
		{
			std::cout << std::endl;
			return 0;
		}
		break;
	default:
		break;
	}

	switch (q)
	{
	case 0:
		std::cout << std::endl;
		return 0;
	case 1:
		std::cout << "one" << std::endl;
		break;
	case 2:
		std::cout << "two" << std::endl;
		break;
	case 3:
		std::cout << "three" << std::endl;
		break;
	case 4:
		std::cout << "four" << std::endl;
		break;
	case 5:
		std::cout << "five" << std::endl;
		break;
	case 6:
		std::cout << "six" << std::endl;
		break;
	case 7:
		std::cout << "seven" << std::endl;
		break;
	case 8:
		std::cout << "eight" << std::endl;
		break;
	case 9:
		std::cout << "nine" << std::endl;
		break;
	default:
		break;
	}
	return 0;
}