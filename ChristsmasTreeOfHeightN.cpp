#include<bits/stdc++.h>
using namespace std;
const int N = 42;
int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	long long a[N][N];
	a[0][0] = 1;
	for (int i = 1; i < N; ++i)
	{
		a[i][0] = 1;
		a[i][i] = 1;
		for(int j = 1; j < i; ++j)
		{
			a[i][j] = a[i-1][j-1] + a[i-1][j];
		}		
	}
	while(t--){
		int n;
		cin >> n;
		// int a[n][n];
		// a[0][0] = 1;
		// for (int i = 1; i < n; ++i)
		// {
		// 	a[i][0] = 1;
		// 	a[i][i] = 1;
		// 	for(int j = 1; j < i; ++j)
		// 	{
		// 		a[i][j] = a[i-1][j-1] + a[i-1][j];
		// 	}		
		// }
		for (int i = 0; i < n; ++i)
		{
			for(int j = 0; j <= i; ++j)
			{
				cout << a[i][j] << " ";
			}		
			cout << endl;
		}

	}
	return 0;
}

// To optimize this code we can make a pascal tree outside the while loop and just simply 
// print according to input 
