#include <iostream>

using namespace std;
int main ()
{ int num, copy, digit, rev=0;
cout<<"Enter the number:";
cin>>num;
copy=num;

while (num!=0)
{ digit = num %10; 
rev = (rev*10) + digit;
num = num/10;} // reverses the number
cout<<"THe reverse of the number is:"<<rev;

if(rev==copy) // compares both numbers
cout<<"The given number is palindrome";

else
cout<<"\t"<<"The given number is not a palindrome";
return 0;
}
