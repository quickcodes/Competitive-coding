// Problem
// Cheems doesn't like extra content so coming straight to the point. 
// Given the input of one line, having words separated by a single space, 
// print each word of the input, each in a new line.
// Also, change all the alphabets to uppercase along with doing this.

#include<bits/stdc++.h>
using namespace std;

int upper(char c){
	// (c - 'a') is a distance from a to c and 
	// we return the same distance from 'A'
	return 'A' + (c - 'a');
}

int main(int argc, char const *argv[])
{
	while(true){
		string s;
		cin >> s;
		if(s.size() == 0){
			break;
		}
		for (int i = 0; i < s.size(); ++i)
		{
			s[i] = upper(s[i]);
		}
		cout << s << endl;
	}
	
	return 0;
}


// Input:-
// Given in one line, all letters are lowercase only, separated by a single 
// space.Characters used in input are from 'a' to 'z' only ( 26 in total ) , both 
// included.

// Length of input   <= 10 ki power 4

// Output:-
// Output each word with characters in uppercase.

// Note:- A testcase contains only one word as the input to get partial marks. 
// Also, the ideal solution has been provided, you can test any of your legal 
// input to get its answer.

// Sample Input
// you are good human

// Sample Output
// YOU 
// ARE 
// GOOD 
// HUMAN 