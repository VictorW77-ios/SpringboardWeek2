#include <iostream>

using namespace std;

int main(){ 

  cout << "Enter a positive number: ";
  int N; 

  cin >> N;

  if(N%15 == 0)
    cout << "fizzbuzz" << '\n'; 

  else if((N%3) == 0)
    cout << "fizz" << '\n';

  else if((N%5) == 0)
    cout << "buzz" << '\n';

  else 
   cout << N; 

  return 0;
} 

