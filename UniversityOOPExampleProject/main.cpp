#include <iostream>
#include "Student.h"


int main() {
	student st1("Artem");
	student st2("Sasha");
	student st3("Nikita");
	student st4("Vovka");


	st1.name = "Artem";
	st1.age = 14;
	st1.mark = 4.5;

	st2.name = "Vovka";
	st2.age = 48;
	st2.mark = 8;

	st3.name = "Nikita";
	st3.age = 22;
	st3.mark = 4.1;

	cout << st1.convert() << endl;
	cout << st2.convert() << endl;
	cout << st3.convert() << endl;
	cout << st4.convert() << endl;
	return 0;
}