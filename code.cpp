#include <bits/stdc++.h>
using namespace std;

int countElements(int a[], int n)
{
	
	int cnt[n + 1] = {0};
	memset(cnt, 0, sizeof(cnt));
	
	int ans = 0;

	for(int i = 0; i < n; i++)
	{
		++cnt[a[i]];
	}
	
	for(int l = 0; l < n; ++l)
	{
		int sum = 0;

		for(int r = l; r < n; ++r)
		{
			sum += a[r];

			if (l == r)
				continue;

			if (sum <= n)
			{
				
				ans += cnt[sum];

				cnt[sum] = 0;
			}
		}
	}

	
	return ans;
}

int main()
{
	

	int a[] = { 1, 1, 1, 1, 1 };
	int N = sizeof(a) / sizeof(a[0]);


	cout << countElements(a, N);
}
