#include <iostream>

import Janvelyan1bib21042;
enum Choice {
	Task1 = '1', Task2 = '2', Task3 = '3', Task4 = '4', Task5 = '5'
};

int main() {
	setlocale(LC_ALL, "Russian");
	char q;
	do
	{
		std::cout << "�������� ������ ��� �����:\
			\n��� ������� ������ ������ �������:\t\'1\'\
			\n��� ������� ������ ������ �������:\t\'2\'\
			\n��� ������� ������� ������ �������:\t\'3\'\
			\n��� ������� �������� ������ �������:\t\'4\'\
			\n��� ������� ����� ������ �������:\t\'5\'\
			\n��� ���������� ��������� �������:\t\'Q\'" << std::endl;
		std::cin >> q;
		switch ((Choice)q) {
			unsigned long long n; double x, eps;
		case Task1:
			std::cout << "�� ������� 1 �������." << std::endl
				<< "������� x, n � epsilon:" << std::endl;
			std::cin >> x >> n >> eps;
			std::cout << "f1(x) = " << RBPO::Lab2::Variant5::Task1::f1(x) << std::endl
				<< "f2(x) = " << RBPO::Lab2::Variant5::Task1::f2(x) << std::endl
				<< "f3(n) = " << RBPO::Lab2::Variant5::Task1::f3(n) << std::endl
				<< "f4(eps) = " << RBPO::Lab2::Variant5::Task1::f4(eps) << std::endl;
			break;
		case Task2:
			std::cout << "�� ������� 2 �������." << std::endl
				<< "������� x, n � epsilon:" << std::endl;
			std::cin >> x >> n >> eps;
			std::cout << "f1(x) = " << RBPO::Lab2::Variant5::Task2::f1(x) << std::endl
				<< "f2(x) = " << RBPO::Lab2::Variant5::Task2::f2(x) << std::endl
				<< "f3(n) = " << RBPO::Lab2::Variant5::Task2::f3(n) << std::endl
				<< "f4(eps) = " << RBPO::Lab2::Variant5::Task2::f4(eps) << std::endl;
			break;
		case Task3:
			std::cout << "�� ������� 3 �������." << std::endl
				<< "������� x, n � epsilon:" << std::endl;
			std::cin >> x >> n >> eps;
			std::cout << "f1(x) = " << RBPO::Lab2::Variant5::Task3::f1(x) << std::endl
				<< "f2(x) = " << RBPO::Lab2::Variant5::Task3::f2(x) << std::endl
				<< "f3(n) = " << RBPO::Lab2::Variant5::Task3::f3(n) << std::endl
				<< "f4(eps) = " << RBPO::Lab2::Variant5::Task3::f4(eps) << std::endl;
			break;
		case Task4:
			std::cout << "�� ������� 4 �������." << std::endl
				<< "������� x, n � epsilon:" << std::endl;
			std::cin >> x >> n >> eps;
			std::cout << "f1(x) = " << RBPO::Lab2::Variant5::Task4::f1(x) << std::endl
				<< "f2(x) = " << RBPO::Lab2::Variant5::Task4::f2(x) << std::endl
				<< "f3(n) = " << RBPO::Lab2::Variant5::Task4::f3(n) << std::endl
				<< "f4(eps) = " << RBPO::Lab2::Variant5::Task4::f4(eps) << std::endl;
			break;
		case Task5:
			std::cout << "�� ������� 5 �������." << std::endl
				<< "������� x, n � epsilon:" << std::endl;
			std::cin >> x >> n >> eps;
			std::cout << "f1(x) = " << RBPO::Lab2::Variant5::Task5::f1(x) << std::endl
				<< "f2(x) = " << RBPO::Lab2::Variant5::Task5::f2(x) << std::endl
				<< "f3(n) = " << RBPO::Lab2::Variant5::Task5::f3(n) << std::endl
				<< "f4(eps) = " << RBPO::Lab2::Variant5::Task5::f4(eps) << std::endl;
			break;
		case 'Q':
			break;
		default:	
			std::cout << "�������� ������ �������." << std::endl;
			break;
		}
	} while (q != 'Q');
	return 0;
};
