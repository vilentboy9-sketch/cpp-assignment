#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int sumOfPrimesInRange(int n) {
        int rev = 0;
        int temp=n;
        while(temp>0)
            {
                rev=(rev*10)+(temp%10);
                temp /=10;
            }
        int sum=0;
        int start = min(n,rev);
        int end = max(n,rev);
       for(int i=start;i<=end;i++)
           {    
               if(i<2)
                   continue;
            bool isprime = true;
            for(int j=2;j*j<=i;j++)
            {
                if(i%j==0)
                {
                    isprime = false;
                    break;
                }
            }
            if(isprime){
                sum+=i;
            }
        }
      return sum;
}
};
int main() {
    Solution sol;
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int result = sol.sumOfPrimesInRange(n);
    cout << "Sum of prime numbers in the range: " << result << endl;
    return 0;
}