//Author:
#include<iostream>

using namespace std; //so we don't need the prefix std::

int main()
{
  int number;
  int number2; 
  cout<<"Please enter a whole number:\n";
  cin>>number;  
  cout<<"Please enter another whole number:\n";
  cin>>number2;
  if (number >= number2)
  {
  cout<<"Of those two numbers, the biggest is:"<<number<<".";
  }
  else
  {
  cout<<"Of these two numbers, the biggest is:"<<number2<<".";
  }
  cout<<endl<<"Thank you for playing.\n";

  
  return 0;
}
