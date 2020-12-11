#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int n;
	cin >> n;
	long long sum = 0;
	for(int i = 1; i < n; i++)
	{
		if(i%3 == 0 || i%5== 0)
		{
			sum += (long long)i;
		}
	}
	cout << sum << "\n";
	return 0;
}