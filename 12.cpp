//File: 12.cpp
//Correct logic error so that if/else works correctly
//
#include<iostream>

using namespace std;

int main()
{
  int userchoice;

  cout << "Give me a number between 1 and 5 ";
  cin >> userchoice;

  if(userchoice==1)
  {
    cout << "Number is odd!\n";
  }
  else if(userchoice==3)
  {
    cout << "Number is odd!\n";
  }
  else if(userchoice==5)
  {
    cout << "Number is odd!\n";
  }
  else if(userchoice==2)
  {
    cout << "Number is even!\n";
  }
  else if(userchoice==4)
  {
    cout << "Number is even!\n";
  }


  else
  {
    cout << "You didn't give me a number between 1 and 5!\n";
  }
  return 0;
}
