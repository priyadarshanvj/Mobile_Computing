/******************************************************************************
Mr. Jason has captured your friend and has put a collar around his neck. He has locked it witha given locking key. It can only be opened now with an unlocking key. Your friend has seen the locking key but he does not know about the unlocking key. Given the locking key, one can figure out the unlocking key which is the smallest (in magnitude) permutation of thedigits of that number and it never starts with zero.
Help your friend to write an algorithm that takes the locking key as an input.

Input
The input to the function/method consists of an argument lockingKey, an integer representing the locking key.

Output
Return an integer representing the unlocking key.

Constraint
-10^7 <=K<=10^7

Note
A possible answer exists for each input.

Example
Input: lockingKey = 756
Output = 567

Explanation:
The smallest permutation formed with digits 5,6, and 7 is 567.
So, the output is 567.
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a,b[15],i=0,t,k,s,h,j,n=0;
    cin>>a;
    while(a!=0)
    {
        b[i++]=a%10;
        a/=10;
        n++;
    }
    for(s=0;s<n;s++)
    {
        for(h=s+1;h<n;h++)
        {
            if(b[s]>b[h])
            {
                t=b[s];
                b[s]=b[h];
                b[h]=j;
            }
        }
    }
    for(i=0;i<n;i++)
        cout<<b[i];
}
