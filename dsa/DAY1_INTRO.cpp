//contigious memory,random access, cache friendliness
//fixed size and dynamic arrays

#include <iostream>
using namespace std;
int main()
 
{
    int arr[2][5]={{1,2,3,4,5},{6,7,8,9,10}};
    cout<<arr[1][3];

    string s="harleen";
    cout<<s[0];
    int len=s.size();
    cout<<s[len-1];
return 0;
}
