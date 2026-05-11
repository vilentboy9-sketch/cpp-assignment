#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    bool isPrime(int n) {
        // code here
        if(n<=1) return false;
        if (n==2) return true;
        if(n%2==0) return false;
        for(int i=3;i<n;i++)
        {
        if(n%i==0)
        return false;
        }
        return true;
    }
};
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    Solution obj;
    if(obj.isPrime(n))
    {
        cout<<"Prime Number\n";
    }
    else
    {
        cout<<"Not a Prime Number\n";
    }
}
