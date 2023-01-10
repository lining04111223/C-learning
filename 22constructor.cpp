#include <iostream>
#include<cmath>
using namespace std;

class Book{
public:
  string title;
  string author;
  int pages;

  //constructor

Book(){
title="no title";
author="no Author";
pages=0;

}

  Book(string aTitle,string aAuthor,int aPages){
title=aTitle;
author=aAuthor;
pages=aPages;

  cout <<"creating object"<<endl;  
  }

};


int main(){
Book book1("Harry Potter","JK Rowling",500);
//Book book2;
//book2.title="Harry";
//book2.author="JK";
//book2.pages=600;

Book book3;


cout <<book1.title <<endl;
cout <<book3.title;
return 0;

};