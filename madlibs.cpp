//Nixon Polanco
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::string;
using std::endl;
int main()
{
string verb;
int number;
string adjective;
string noun;
cout <<"Enter a first verb: ";
cin >> verb; 
cout << endl;
cout <<"Enter a whole number:";
cin >> number;
cout << endl;
cout <<"Enter an adjective:";
cin >> adjective;
cout << endl;
cout <<"Enter a noun:";
cin >> noun;
cout << endl;

cout <<"Your Mad Libs Story:"<< endl;


cout <<"The girl "<< verb <<" to her class she was exhausted from the "<< number <<" tests she had to take. But all in all she maintained a "<< adjective <<" attitude and walked to "<< noun <<"." << endl;
  return 0;
}
