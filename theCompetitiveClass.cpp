// Problem
// Jiro is a fun loving lad. His classmates are very competitive and are striving for 
// getting a good rank, while he loves seeing them fight for it. The results are going to be out soon. He is anxious to know what is the rank of each of his classmates.

// Rank of i'th student = 1+ (Number of students having strictly greater marks than him. 
// Students with equal marks are ranked same.)

// Can you help Jiro figure out rank of all his classmates?

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,*a,i,j,count=0;
    cin>>n;
    a=new int [n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
            if(j==i)
            continue;
            if(a[j]>a[i])
            count++;
        }
        cout<<count+1<<" ";
    }
    cout<<"\n";
    return 0;
}

// Input:
// The first line contains an integer N, denoting the number of students in the class.
// The second line contains N space separated integers, Mi are the marks of the i'th 
// student.

// Ouput:
// Print N space separated integers i.e., ranks of the students in a new line.

// Constraints:
// 1 ≤ N ≤ 1000
// 1 ≤ Mi ≤ 1000

// Sample Input
// 4
// 62 96 82 55
// Sample Output
// 3 1 2 4


