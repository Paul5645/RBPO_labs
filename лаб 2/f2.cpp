module;
#include <cmath>

module Janvelyan1bib21042;

namespace RBPO {
	namespace Lab2 {
		namespace 
		
		{
			namespace Task3 {
				double f2(double);
			};
		};
	};
};

double RBPO::Lab2::Variant5::Task3::f2(double x) {
	return (x <= 9.0) ? (cos(2 * x) + 9.0) : (-cos(x) / (x - 9.0));
};
