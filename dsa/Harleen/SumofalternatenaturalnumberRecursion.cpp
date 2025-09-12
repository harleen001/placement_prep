#include <iostream>
using namespace std;
int sumofalternate(int n)
{
    if(n==0) return 0;

    int result=sumofalternate(n-1);
    
    if(n%2==0)
    { return result-n;}
    else{
      return  result+n;
    }
   
}
int main()
{
   cout<<sumofalternate(5);
    return 0;
}