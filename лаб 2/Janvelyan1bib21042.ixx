module;
#include <cmath>
export module Janvelyan1bib21042;

export import :F1;
export import :F2;
export import :A;
export import :F3;
export import :F4;


namespace RBPO {
	namespace Lab2 {
		namespace Variant5 {
			namespace Task1 {
				export double f1(double);
				export double f2(double);
				export double f3(unsigned long long);
				export double f4(double);
				double a(long long);
			};
			export namespace Task2 {
				double f1(double);
				double f2(double);
				double f3(unsigned long long);
				double f4(double);
			};
			namespace Task3 {
				export double f1(double);
				export double f2(double);
				export double f3(unsigned long long);
				export double f4(double);
				double a(long long);
			};
			namespace Task5 {
				export double f1(double);
				export double f2(double);
				export double f3(unsigned long long);
				export double f4(double);
				double a(long long);
			};
			namespace Task1 {
				double f1(double x) {
					return 1 - 1 / 4 * (sin(2 * x)) * (sin(2 * x)) + cos(2 * x);
				};

				double f2(double x) {
					return (x <= 9.0) ? (cos(2 * x) + 9.0) : (-cos(x) / (x - 9.0));
				};

				double f3(unsigned long long n) {
					double sum = a(0);
					for (unsigned long long i = 0; i < n; sum += a(++i));
					return sum;
				};

				double f4(double eps) {
					double sum = a(0); unsigned long long i = 2;
					for (double temp = a(1), temp1 = a(2); eps < std::abs(temp - temp1); ) {
						sum += temp, temp = temp1, temp1 = a(++i);
					};
					return sum;
				};

				double a(long long i) {
					double numerator = (i % 2 == 0) ? (i + 1) : -(i + 1);
					double denominator = pow(3,i)+pow(2,i);
					double result = numerator / denominator;
					return result;
				};
			};
		};
	};
};

module :private;

namespace RBPO {
	namespace Lab2 {
		namespace Variant5 {
			namespace Task5 {
				double f1(double x) {
					return 1 - 1 / 4 * (sin(2 * x)) * (sin(2 * x)) + cos(2 * x);
				};

				double f2(double x) {
					return (x <= 9.0) ? (cos(2 * x) + 9.0) : (-cos(x) / (x - 9.0));
				};

				double f3(unsigned long long n) {
					double sum = a(0);
					for (unsigned long long i = 0; i < n; sum += a(++i));
					return sum;
				};

				double f4(double eps) {
					double sum = a(0); unsigned long long i = 2;
					for (double temp = a(1), temp1 = a(2); eps < std::abs(temp - temp1); sum += temp, temp = temp1, temp1 = a(++i));
					return sum;
				}

				double a(long long i) {
					double numerator = (i % 2 == 0) ? (i + 1) : -(i + 1);
					double denominator = pow(3, i) + pow(2, i);
					double result = numerator / denominator;
					return result;
				};
			};
		};
	};
};