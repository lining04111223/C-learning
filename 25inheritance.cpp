#include <iostream>
#include<cmath>
using namespace std;

class Chef{
public:
  void makeChicken(){
    cout <<"make chicken"<<endl;
  }
  void makeSpecialDish(){
    cout <<"make bbq"<<endl;
  }



};

class ItalianChef:public Chef{
public:
  
  void makePasta(){
    cout <<"make pasta"<<endl;
  };
    void makeSpecialDish(){
    cout <<"make italian bbq"<<endl;
  }

};


int main(){
Chef chef;
chef.makeSpecialDish();

ItalianChef italianChef;
italianChef.makeSpecialDish();
italianChef.makePasta();

return 0;
};