#include <iostream>
#include <string>

using namespace std; 

void fizzBuzz(int& n){
  if(n%3 == 0 && n%5 == 0)
    cout << "fizzbuzz" << endl;
  else if(n%3 == 0)
    cout << "fizz" << endl; 
  else if(n%5 == 0)
    cout << "buzz" << endl;
  else 
    cout << n << endl; 
}

int main(){
  for(int n=1; n<=50; ++n){
    fizzBuzz(n);
 }
 return 0;
} 
