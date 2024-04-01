#pragma once
#include <string>
using namespace std;
class student {
public:
	string name;
	int age;
	double mark;

	// default constructor
	//student() {

	//	cout << "default constructor was calling" << endl;
	//	name = "no name";
	//	age = 6;
	//	mark = 4;
	//
	//}

	student(string nm) {

		//cout << "constructor with arguments was calling" << endl''
		name = nm;
	}
	student(string nm, int a) {

		//cout << "constructor with arguments was calling" << endl''
			name = nm;
			age = a;
	}
	student(string nm, int a, double m) {

		//cout << "constructor with arguments was calling" << endl''
			name = nm;
		age = a;
		mark = m;
	}

	student(const student& Strudent) {


	}

	string convert() {
		string s = "";
		s += name;
		s += ": age = " + to_string(age);

		s += "mark = " + to_string(mark);
		return s;
	}
	
};