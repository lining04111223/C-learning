#include <iostream>
#include<cmath>
using namespace std;

class Book{
public:
  string title;
  string author;
  int pages;

};


int main(){
Book book1;
book1.title="Harry Potter";
book1.author="JK Rowling";
book1.pages=500;

Book book2;
book2.title="Harry";
book2.author="JK";
book2.pages=600;



cout <<book1.title;
return 0;
};