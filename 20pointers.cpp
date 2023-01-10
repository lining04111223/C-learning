#include <iostream>
#include<cmath>
using namespace std;

int main(){

int age =19;
double gpa=2.7;
string name="Mike";

int *pAge =&age;

double *pGpa = &gpa;
string *pName = &name;


cout << pAge<<endl;
cout <<*pAge<<endl;
cout <<&*pAge;
return 0;
}