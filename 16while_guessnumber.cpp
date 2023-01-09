#include <iostream>
using namespace std;


int main(){

int secretNum =10;
int guess;
int guessCount=0;
int guessLimit=3;
bool outOfGuesses=false;


while(secretNum!=guess && !outOfGuesses){

if(guessCount<guessLimit){
  cout<<"enter guess"<<endl;
  cin >>guess;
  guessCount++;
}else{
  outOfGuesses=true;
}
}

if(outOfGuesses){
  cout <<"You loss";
}else{
cout << "You win!";}
return 0;
}