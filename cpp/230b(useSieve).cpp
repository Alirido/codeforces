/*
	B. T-primes
	Time limit 2s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;
bool isPrime[1000010];
void sieve()
{
	for(int i=1;i<=1000000;i++)
	{
		isPrime[i] = true;
	}
	for(int i=2;i<=1000000;i++)
	{
		if(isPrime[i])
		{
			for(int j=2;j*i<=1000000;j++)
			{
				isPrime[i*j] = false;
			}
		}
	}
}
int main()
{
	sieve();
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		long long x;
		scanf("%lld",&x);
		long long rt = sqrt(x);
		int c = (int) rt;
		if(rt*rt==x && x!=1)
		{
			if(isPrime[c])
				printf("YES\n");
			else printf("NO\n");
		}
		else printf("NO\n");
	}
}