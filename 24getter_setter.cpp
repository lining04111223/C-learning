#include <iostream>
#include<cmath>
using namespace std;

class Book{
private:
 string rating;

public:
  string title;
  string author;
  int pages;
 
  //constructor
  Book(string aTitle,string aAuthor,int aPages,string aRating){
     title=aTitle;
     author=aAuthor;
     pages=aPages;
     setRating(aRating);
  }

void setRating(string aRating){
  if(aRating=="G"||aRating=="PG"||aRating=="R"||aRating=="NR"){
    rating =aRating;
  }else{
    rating="NR";
  }
}

string getRating(){
  return rating;
}

};


int main(){
Book book1("Harry Potter","JK Rowling",500,"R");
book1.setRating("Dog");
cout <<book1.getRating()<<endl;
return 0;
};