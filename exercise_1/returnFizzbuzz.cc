#include <iostream>
#include <string>

using namespace std; 

string fizzBuzz(int& n){
  string a = "fizzbuzz";
  return a;
}

string fizz(int& n){
  string b = "fizz";
  return b;
}

string buzz(int& n){
  string c = "buzz"; 
  return c;
}

int main(){
  for(int n=1; n<=50; ++n){
    if(n%3 == 0 && n%5 == 0)
      cout << fizzBuzz(n) << endl;
    else if(n%3 == 0)
      cout << fizz(n) << endl;
    else if(n%5 == 0)
      cout << buzz(n) << endl;
    else
      cout << n << endl;
 }
 return 0;
} 
