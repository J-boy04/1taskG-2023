#pragma once
#include <iostream>
#include <string>
#include <vector>

using std::cout;
using  std::string;
using std::vector;

int minimum(int a, int b) ;

class person {
	string Name, surname;
	vector <int>HW;
  int Exam;
  float Final;
public:
	person() {
		Name = ""; surname = "";
		Exam = 0; Final = 0.0;
		HW.clear();

	};
	person(string N, string S, vector <int> H,
		int E, float F);
		
	person& operator=(const person& P);
	person(const person& P);
	~person();

	// revise 
	inline void setName(string N) { Name = N; }
   // overloaded cout
	// overloaded cin
	//final poin calculation from average or median 
	// revist lectures on the above comments 


};