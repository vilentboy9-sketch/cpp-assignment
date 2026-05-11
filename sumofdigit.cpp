#include <iostream>
using namespace std;
class Solution {
  public:
    int sumOfDigits(int n) {
        // code here
        int ln,sum=0;
        while(n!=0)
        {
            ln=n%10;
            sum=sum+ln;
            n=n/10;
        }
        return sum;
    }
};
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    Solution obj;
    cout<<"Sum of digits: "<<obj.sumOfDigits(n)<<endl;
}