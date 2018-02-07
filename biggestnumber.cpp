//Author:
#include<iostream>

using namespace std; //so we don't need the prefix std::

int main()
{
  int number;
  int number2;
  int biggest;
  cout<<"Please enter a whole number:\n";
  cin>>number;  
  cout<<"Please enter another whole number:\n";
  cin>>number2;
  if (number >= number2)
  {
  (biggest = number);
  }
  else
  {
  (biggest = number2);
  }
  cout<<"Of those two numbers, the biggest is: "<<biggest<<"";
  cout<<endl<<"Thank you for playing.\n";

  
  return 0;
}
