module Janvelyan1bib21042:A;

#include<math.h>

namespace RBPO {
	namespace Lab2 {
		namespace Variant5 {
			namespace Task4 {
				double a(long long);
			};
		};
	};
};

double RBPO::Lab2::Variant5::Task4::a(long long i) {
	double numerator = (i % 2 == 0) ? (i + 1) : -(i + 1);
	double denominator = pow(3, i) + pow(2, i);
	double result = numerator / denominator;
	return result;
};