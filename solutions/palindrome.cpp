#include <iostream>

using namespace std;
int main ()
{ int num, copy, digit, rev=0;
cout<<"Enter the number:";
cin>>num;
copy=num; // we reverse this variable named 'copy'

while (num!=0)
{ digit = num %10; // returns the last digit of number
rev = (rev*10) + digit; 
num = num/10;} // removes the last digit from number
cout<<"The reverse of the number is:"<<rev;

if(rev==copy) // compares both numbers
cout<<"\nThe given number is palindrome";

else
cout<<"\n"<<"The given number is not a palindrome";
return 0;
}
