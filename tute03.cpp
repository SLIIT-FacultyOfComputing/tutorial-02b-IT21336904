/*Exercise 3 - Repeatition

Convert the C program given below which calculates the Factorial of a number that you input from the keyboard to a C++ program.

Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/

#include <iostream>
using namespace std;
int main()
{
    int no;
    long fac=1;
    int r;

    cout<<"Enter a Number :";
    cin>>no;
  for(r=no;r>=1;r--)
    {

    fac = fac*r;
    for (int r=no; r >= 1; r--) 
    {
        fac = fac * r;
    }

    cout<<"factorial of "<<no<<"is\t"<<fac<<endl;  
    return 0;
}
  }
