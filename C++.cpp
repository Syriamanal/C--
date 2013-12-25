#include <iostream>
//Age tester!!!
using namespace std;


int main()
{
int age;

cout << "Enter Your age..." << endl;
    cout << endl;
cin >> age;
cout << "You have entered  " << age << endl;


if(age == 18)
{
    cout << endl;
    cout << "You are a teenager" << endl;
}
else if(age == 17)
{
    cout << endl;
    cout << "One more year to be 18!" << endl;
}
else if(age == 14)
{
    cout << endl;
    cout << "You are in high school!" << endl;
}
else
{
    cout << endl;
    cout << "Your to young!" << endl;
}
}
