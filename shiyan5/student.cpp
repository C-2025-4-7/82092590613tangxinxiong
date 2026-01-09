#include<iostream>
#include"student.h"
using namespace std;
void Student::display() {
	cout << "nnum:" << num << endl;
	cout << "name:" << name << endl;
	cout << "sex:" << sex << endl;
}
void Student::set_value(int n,const char* m,char s) {
	this->num = n;
	strcpy_s(this->name,20,m);
	this->sex = s;
}