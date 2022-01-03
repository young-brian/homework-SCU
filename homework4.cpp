#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isprime(int x)
{
	for (int i = 2; i <= sqrt(x); i++)
	{
		if (x % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
//$p^ q + q ^ p$是一个素数，求$p$和$q$
//$p ^ q + q ^ p$是一个素数，
//$p$和$q$也是素数，
//求$p$和$q$
int main()
{
	int p=1, q=1;
	int res = 0,cnt=0;
	for (p = 1; p < 1000; p++)
	{
		for (q = 1; q < 100; q++)
		{
			if (isprime(p) && isprime(q))
			{
				if (isprime(pow(p, q) + pow(q, p)))
				{
					printf("%d %d\n", p, q);
					cnt++;
					if (cnt == 1000)
						return 0;
				}
			}
		}
	}
	return 0;
}
