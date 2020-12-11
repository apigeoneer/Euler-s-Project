#include <bits/stdc++.h>
using namespace std;

long long evenFibsSum(int n)
{
	//the dp[i] would actually exceed n much before the nth element (dp[n-1])
	long long dp[n];
	dp[0] = 0;
    dp[1] = 1;

    long long sum = 0;
	for(int i = 2; i < n; i++)
	{
		dp[i] = dp[i-1] + dp[i-2];

		if(dp[i] > n)
			break;
        
      //  cout << dp[i] << " ";
		if(dp[i]%2 == 0)
			sum += dp[i];
	}
	cout << "\n";
	return sum;
}

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    //in our problem, n = 4,000,000
    long long ans = evenFibsSum(n);
    cout << ans << "\n";
   
	return 0;
}