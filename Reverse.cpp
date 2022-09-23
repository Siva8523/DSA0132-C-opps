#include <iostream>
using namespace std;

int main() {

  int n, reversed_number = 0, remainder;

  cout << "Enter an integer: "<<"\n";
  cin >> n;

  while(n != 0) {
    remainder = n % 10;
    reversed_number = reversed_number * 10 + remainder;
    n /= 10;
}
cout << "Reversed Number = " << reversed_number<<"\n ";
if(n==reversed_number){
std::cout<<"is a palindrome"<<"\n";}
 else{
std::cout<<"is  not palindrome";
  }

  return 0;
}
