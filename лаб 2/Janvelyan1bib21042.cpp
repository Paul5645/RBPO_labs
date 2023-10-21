module;
#include <cmath>

module Janvelyan1bib21042;

namespace RBPO {
	namespace Lab2 {
		namespace Variant5 {
			namespace Task2 {
				double f1(double);
				double f2(double);
				double f3(unsigned long long);
				double f4(double);
				double a(long long);
			};
		};
	};
};

double RBPO::Lab2::Variant5::Task2::f1(double x) {
	return 1 - 1 / 4 * (sin(2 * x)) * (sin(2 * x)) + cos(2 * x);
};

double RBPO::Lab2::Variant5::Task2::f2(double x) {
	if (x <= 9.0) {
		return (cos(2 * x) + 9.0);
	}
	else {
		return (-cos(x) / (x - 9.0));
	}
};

double RBPO::Lab2::Variant5::Task2::a(long long i) {
	double numerator = (i % 2 == 0) ? (i + 1) : -(i + 1);
    double denominator = pow(3,i)+pow(2,i);
    double result = numerator / denominator;
    return result;
};

double RBPO::Lab2::Variant5::Task2::f3(unsigned long long n) {
	double sum = a(0); unsigned long long i = 0;
	while (i < n)
		sum += a(++i);
	return sum;
};

double RBPO::Lab2::Variant5::Task2::f4(double eps) {
	double sum = a(0), temp = a(1), temp1 = a(2); unsigned long long i = 2;
	while (eps < abs(temp - temp1))
		sum += temp, temp = temp1, temp1 = a(++i);
	return sum;
};

