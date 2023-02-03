#include <iostream>
#include <string>

using namespace std; 

string fizzBuzz(){
  string a = "fizzbuzz";
  return a;
}

string fizz(){
  string b = "fizz";
  return b;
}

string buzz(){
  string c = "buzz"; 
  return c;
}

int main(){
  for(int n=1; n<=50; ++n){
    if(n%3 == 0 && n%5 == 0)
      cout << fizzBuzz() << endl;
    else if(n%3 == 0)
      cout << fizz() << endl;
    else if(n%5 == 0)
      cout << buzz() << endl;
    else
      cout << n << endl;
 }
 return 0;
} 
