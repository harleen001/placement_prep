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
int numbersum(int a, int b)//int type fn,returns an int value
{
    int c;
    c=a+b;
    return c;
}
int main()
{
    printName();
  //  string name;
  //  cin>>name;
   // printParameterizedName(name);
    cout<<numbersum(5,6);
    
    //BUILT IN MINUMUM NUMBER, also max
    int num1,num2;
    cin>>num1>>num2;
    int minimum=min(num1,num2);
    cout<<minimum;
    return 0;
}