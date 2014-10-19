//寻找素数小程序 by fion

#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int n;
  int i=2;
  int is_prime=true;
  
  cout << "This is a program to find out a prime." << endl;
  cout << "Please enter a number and press ENTER." << endl;
  cin >> n;
  
  while(i<=sqrt(n)){
    if(n%i==0){
      is_prime=false;
      break;
    }
    i++;
  }
  
  if(is_prime){
    cout << "Number is prime." << endl;
  }else{
    cout << "Number is not prime." << endl;
  }
  
  System("PAUSE");
  return 0;
}
