#include <iostream>




int main()
{
	setlocale(LC_ALL, "rus");
	std::string name;
	std::cout << "������� ��� : ";
	std::cin >> name;
	std::cout << "������������, " << name << std::endl;


	return 0;
}