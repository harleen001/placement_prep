#include <bits/stdc++.h>
class Solution {
    public:
      // Function to return list containing first n fibonacci numbers.
      vector<int> fibonacciNumbers(int n) {
          vector<int> fibseq;
          for(int i=0;i<n;i++)
          {
         if (i==0) fibseq.push_back(0);
         else if (i==1) fibseq.push_back(1);
         
         else {
             fibseq.push_back(fibseq[i-1]+fibseq[i-2]);
         }
      }
          return fibseq;
      }
  };
//   using fibonacci logic of f(n)=f(n-1)+f(n-2);
//   and using recursion