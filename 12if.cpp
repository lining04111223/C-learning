#include <iostream>
#include<cmath>
using namespace std;


int main(){

bool isMale =false;
bool isTall =false;

if(isMale && isTall){
cout<<"You are a tall male";}
else if(!isTall&& isMale){
cout<<"You are a short male";
}else if(!isMale&&isTall){
cout<<"You are a tall female";
}else{
  cout<<"You are short female";
}

return 0;
}