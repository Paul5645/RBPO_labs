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
		std::cout << "Выберите задачу для теста:\
			\nДля запуска первой задачи введите:\t\'1\'\
			\nДля запуска второй задачи введите:\t\'2\'\
			\nДля запуска третьей задачи введите:\t\'3\'\
			\nДля запуска четвёртой задачи введите:\t\'4\'\
			\nДля запуска пятой задачи введите:\t\'5\'\
			\nДля завершения программы введите:\t\'Q\'" << std::endl;
		std::cin >> q;
		switch ((Choice)q) {
			unsigned long long n; double x, eps;
		case Task1:
			std::cout << "Вы выбрали 1 задание." << std::endl
				<< "Введите x, n и epsilon:" << std::endl;
			std::cin >> x >> n >> eps;
			std::cout << "f1(x) = " << RBPO::Lab2::Variant5::Task1::f1(x) << std::endl
				<< "f2(x) = " << RBPO::Lab2::Variant5::Task1::f2(x) << std::endl
				<< "f3(n) = " << RBPO::Lab2::Variant5::Task1::f3(n) << std::endl
				<< "f4(eps) = " << RBPO::Lab2::Variant5::Task1::f4(eps) << std::endl;
			break;
		case Task2:
			std::cout << "Вы выбрали 2 задание." << std::endl
				<< "Введите x, n и epsilon:" << std::endl;
			std::cin >> x >> n >> eps;
			std::cout << "f1(x) = " << RBPO::Lab2::Variant5::Task2::f1(x) << std::endl
				<< "f2(x) = " << RBPO::Lab2::Variant5::Task2::f2(x) << std::endl
				<< "f3(n) = " << RBPO::Lab2::Variant5::Task2::f3(n) << std::endl
				<< "f4(eps) = " << RBPO::Lab2::Variant5::Task2::f4(eps) << std::endl;
			break;
		case Task3:
			std::cout << "Вы выбрали 3 задание." << std::endl
				<< "Введите x, n и epsilon:" << std::endl;
			std::cin >> x >> n >> eps;
			std::cout << "f1(x) = " << RBPO::Lab2::Variant5::Task3::f1(x) << std::endl
				<< "f2(x) = " << RBPO::Lab2::Variant5::Task3::f2(x) << std::endl
				<< "f3(n) = " << RBPO::Lab2::Variant5::Task3::f3(n) << std::endl
				<< "f4(eps) = " << RBPO::Lab2::Variant5::Task3::f4(eps) << std::endl;
			break;
		case Task4:
			std::cout << "Вы выбрали 4 задание." << std::endl
				<< "Введите x, n и epsilon:" << std::endl;
			std::cin >> x >> n >> eps;
			std::cout << "f1(x) = " << RBPO::Lab2::Variant5::Task4::f1(x) << std::endl
				<< "f2(x) = " << RBPO::Lab2::Variant5::Task4::f2(x) << std::endl
				<< "f3(n) = " << RBPO::Lab2::Variant5::Task4::f3(n) << std::endl
				<< "f4(eps) = " << RBPO::Lab2::Variant5::Task4::f4(eps) << std::endl;
			break;
		case Task5:
			std::cout << "Вы выбрали 5 задание." << std::endl
				<< "Введите x, n и epsilon:" << std::endl;
			std::cin >> x >> n >> eps;
			std::cout << "f1(x) = " << RBPO::Lab2::Variant5::Task5::f1(x) << std::endl
				<< "f2(x) = " << RBPO::Lab2::Variant5::Task5::f2(x) << std::endl
				<< "f3(n) = " << RBPO::Lab2::Variant5::Task5::f3(n) << std::endl
				<< "f4(eps) = " << RBPO::Lab2::Variant5::Task5::f4(eps) << std::endl;
			break;
		case 'Q':
			break;
		default:	
			std::cout << "Введённые данные неверны." << std::endl;
			break;
		}
	} while (q != 'Q');
	return 0;
};
