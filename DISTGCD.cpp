/*Chef has two distinct positive integers A and B.

Chef wonders how many distinct values are possible for the expression gcd(A+X,B+X), where X can take any non-negative integer value.

Help Chef find this value.

Here, gcd stands for Greatest Common Divisor.

Input Format
The first line contains a single integer T — the number of test cases. Then the test cases follow.
The first and only line of each test case contains two distinct space separated integers A and B.
Output Format
For each testcase, output the number of distinct values of the expression gcd(A+X,B+X), where X can take any non-negative integer value.

Constraints
1≤T≤1000
1≤A,B≤109
constraints
A!=B
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,a=1;
    cin>>test;
    while(a<=test)
    {
       long long int x,y,count=0,i,n;
        cin>>x>>y;
         n=abs(x-y);
        for(i=1;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                if(n/i==i)
                {
                   count=count+1; 
                }
                else
                {
                    count=count+2;
                }
            }
        }
        cout<<count<<endl;
        a++;
    }
    return 0;
}
