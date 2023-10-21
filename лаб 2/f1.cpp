module;
#include <cmath>

module Janvelyan1bib21042;

namespace RBPO {
	namespace Lab2 {
		namespace Variant5 {
			namespace Task3 {
				double f1(double);
			};
		};
	};
};

double RBPO::Lab2::Variant5::Task3::f1(double x) {
	return 1 - 1 / 4 * (sin(2 * x)) * (sin(2 * x)) + cos(2 * x);
};
