#include <iostream>
using namespace std;

int main(){
string phrase="GGrAtgeoitghjoetgjoerjgfoer";
string phrasesub=phrase.substr(8,4);
cout<< "Giraffe\n";
phrase[0]='B';
cout<< phrase.length()<<endl;
cout<<phrase<<endl;
cout <<phrase.find("G",0)<<endl;
cout <<phrasesub;


return 0;
}