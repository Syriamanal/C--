#include <iostream>
//Age tester!!!
using namespace std;


int main()
{
int age;

cout << "Enter Your age..." << endl;
cin >> age;
cout << "You have enterd \n" << age << endl;


if(age == 18)
{
cout << "You are a teenager" << endl;
}
else if(age == 17)
{
cout << "One more year to be 18!" << endl;
}
else if(age == 14)
{
cout << "You are in high school!" << endl;
}
else
{
cout << "Your to young!" << endl;
}
}
