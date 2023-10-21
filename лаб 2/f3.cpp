module Janvelyan1bib21042;

namespace RBPO {
	namespace Lab2 {
		namespace Variant5 {
			namespace Task3 {
				double f3(unsigned long long);
				double a(long long);
			};
		};
	};
};

double RBPO::Lab2::Variant5::Task3::f3(unsigned long long n) {
	double sum = 0; unsigned long long i = 0;
	do {
		sum += a(i);
	} while (i++ < n);
	return sum;
};
