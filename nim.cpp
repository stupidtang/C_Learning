//减法游戏，每个对手每次只能减1或2，谁先把总数减到0算赢
//by fion

#include <iostream>
using namespace std;

int main(){
  int total,n;
  
  cout << "Welcome to NIM.Pick a starting total: "<< endl;
  cin >> total;
  
  while(ture){
    
    if((total%3)==0){
      total=total-2;
      cout << "I am subtracting 2." << endl;
    }else{
      total--;
      cout << "I am subtracting 1." << endl;
    }
    cout  << "New total is " << total << endl;
    if(total==0){
      cout << "I win!" << endl;
      break;
    }
    
    cout << "Please enter a num to subtract (1 or 2):" << endl;
    cin >> n;
    while(n<1||n>2){
      cout << "Input must be 1 or 2." << endl;
      cout << "Please re-enter: " << endl;
      cin >> n;
    }
    total=total-n;
    cout << "New total is" << total <<endl;
    if(total==0){
      cout << "You win!" << endl;
      break;
    }
  }
  system("PAUSE");
  return 0;
}
