#include <iostream>
using namespace std;

class Book{
public:
  string title;
  string author;
  int pages;

  //constructor
  Book(string aTitle,string aAuthor,int aPages){
     title=aTitle;
     author=aAuthor;
     pages=aPages;
  }


  bool goodBook(){
     if(pages>=600){
       return true;
     }
     return false;
       }

};


int main(){
Book book1("Harry Potter","JK Rowling",500);
Book book2("King","ABC",700);

cout <<book2.goodBook() <<endl;
return 0;
};