#include <iostream>

using namespace std;

void fizz(string n){
  a = "fizz";
  cout << a << endl; 
}

void buzz(string b){
  b = "buzz";
  cout << b << endl; 
} 

void fizzbuzz(string c){
  c = "fizzbuzz"; 
  cout << c << endl;
}

int main(){ 
  for(int n=1; n<=50; n++){
    if(n%3 == 0 && n%5 == 0)
      fizzbuzz(a); 

    else if((n%3) == 0)
      fizz(b);

    else if((n%5) == 0)
      buzz(c);

    else 
      cout << n << endl; 
  }
  return 0;
} 

