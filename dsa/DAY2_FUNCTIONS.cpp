//pass by value and pass by reference, increase readability, use same code multiple times
//function types==> void, return, parameterized, non parameterized
//VOID--->doesnot return anything

#include <bits/stdc++.h>
using namespace std;
void printName()
{
    cout<<"hello harleen"; //no parameter, no return
}
void printParameterizedName(string name)
{
    cout<<"hello"<<name;
}
//take two numbers and print its sum
int numbersum(int a, int b)
{
    int c;
    c=a+b;
    return c;
}
int main()
{
    printName();
    string name;
    cin>>name;
   // printParameterizedName(name);
    cout<<numbersum(5,6);
    return 0;
}