#include <iostream>
#include <string>

using namespace std; 

string fizzBuzz(){
  return "fizzbuzz"; 
}

string fizz(){
  return "fizz"; 
}

string buzz(){
  return "buzz";
}

int main(){
  for(int n=1; n<=50; n++){
    if(n%3 == 0 && n%5 == 0)
      fizzBuzz();
    else if((n%3) == 0)
      fizz();
    else if((n%5) == 0)
      buzz();
    else
      cout << n << endl;
  }
  return 0;
}

