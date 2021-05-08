// Problem :-

// It's Binod's Birthday and all his friends want to have a great GPL for 
// him. But Binod being so schemy, he locked his room with a secret number 
// and given his friends a Binary string of secret number.
// His friends have no knowledge about binary strings. 
// Would you help his friends to convert given Binary String to Decimal and 
// participate in Binod's GPL.

// Binary String is a string with only '0' and '1'  as it's characters.

#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int task;
	cin >> task;
	while(task--){
		int num;
		cin >> num;
		long long power2 = 1;
		long long result = 0;
		string s;
		cin >> s;
		for(int i=s.size()-1; i>=0; --i){
			int binar_digit = s[i] = s[i] - '0';
			result = result + (binar_digit * power2);
			// power2 = power2 * 2;
			power2 = power2 << 1;
		}
		cout << result << endl;
			
		
	}
	return 0;
}



// Input Format

// First Line : Integer  that denotes number of test cases .
// For each Test Case : Integer  for size of Binary String  and Binary String  .
// Output Format

// For each Test case, print Single Line integer containing the secret number.
// Note: Secret number will always be greater than or equal to 0.



