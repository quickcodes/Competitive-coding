// Problem - 
// A vertex is considered as a point with both its coordinates as integers.
// You are initially at the origin of a 2D surface. You can move by the following
// rules:
// One move is counted as a vertex to an adjacent vertex. You cannot jump, and 
// can only move to an adjacent vertex. For example, if you are at point A(x,y) , 
// then you may move to any of the points  B, C, D, E (defined below),
//                    A(x,y)  to  B(x,y-1) or C(x,y+1) or D(x+1,y) or E(x-1,y)

// Distance from origin should increase with each move.


#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int task;
	cin >> task;
	while(task--){
		long long num;
		cin >> num;
		cout << num * 4 << endl;
	}
	return 0;
}


// For a given number of steps (N), calculate the count of possible final 
// position vertices you may end in if you initially started from the origin.
// Constraints :
// 1≤t≤50
// 1≤N≤1012

// Input Format:
// First Line: Number of test cases (t)
// Next "t" Line: Integer N representing the number of steps

// Output Format:
// For each test case output: Count of possible final position vertices 
// starting from origin.

// Sample Input
// 2
// 3
// 1
// Sample Output
// 12
// 4
