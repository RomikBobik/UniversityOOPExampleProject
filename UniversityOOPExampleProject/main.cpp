#include <iostream>
#include "Student.h"


int main() {
	student st1;
	st1.name = "Artem";
	st1.age = 14;
	st1.mark = 4.5;
	cout << st1.convert() << endl;

	return 0;
}