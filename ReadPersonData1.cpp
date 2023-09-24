#include "header.h"

void ReadPersonData(string& name, unsigned short& age, double& salary) {
	//1
	name = ReadPersonName();
	age = ReadPersonAge();
	ReadPersonSalary(&salary);

}

void ReadPersonData(string& name, unsigned short& age, unsigned short& height, unsigned short& weight) {
	//2
	name = ReadPersonName();
	age = ReadPersonAge();
	height = ReadPersonHeight();
	ReadPersonWeight(weight);
}