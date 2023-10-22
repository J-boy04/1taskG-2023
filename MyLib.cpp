#include "MyLib.h"



int minimum(int a, int b) {
	int temp = (a < b) ? a : b;
	return temp;

}

person ::person() {
	Name = ""; surname = "";
	Exam = 0; Final = 0.0;
	HW.clear();

};

person ::person(string N, string S, vector <int> H,
	int E, float F) {
	Name = N;
	surname = S;
	HW = H;
	Exam = E;
	Final = F;

}
person::person(const person& P) {
	Name = P.Name;
	surname = P.surname;
	HW = P.HW;
	Exam = P.Exam;
	Final = P.Final;


};
person& person :: operator=(const person& P) {
	if (this == &P) return *this;
	Name = P.Name;
	surname = P.surname;
	HW = P.HW;
	Exam = P.Exam;
	Final = P.Final;
	return *this;
};
person ::~person() {
	Name.clear();
	surname.clear();
	HW.clear();
	Exam = 0;
	Final = 0.0;
	

}
