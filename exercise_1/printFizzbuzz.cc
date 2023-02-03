#include <iostream>

using namespace std;

void fizz(){
  cout << "fizz" << endl; 
}

void buzz(){
  cout << "buzz" << endl; 
} 

void fizzbuzz(){ 
  cout << "fizzbuzz" << endl;
}

int main(){ 
  for(int n=1; n<=50; n++){
    if(n%3 == 0 && n%5 == 0)
      fizzbuzz(); 

    else if((n%3) == 0)
      fizz();

    else if((n%5) == 0)
      buzz();

    else 
      cout << n << '\t' << endl; 
  }
  return 0;
} 

