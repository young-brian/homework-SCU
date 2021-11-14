#include <stdio.h>
int isprime(int x)
	{
	int ret=1;
	int i;
	for(i=2;i<x-1;i++)
	{
		if(x%i==0)
		{
			ret=0;
			break;//找到一个就行 
		}
		else
		{
			ret=1;
		}
	}
	return ret;
}
int splitNum(int x)
{
	int t=x;
	int z,sum=0,sum1=0;
	int ret=0;
	while(t>0)
	{
		z=t%10;
		t/=10;
		sum+=z;
		sum1+=z*z;
	}
	if(isprime(sum))
	{
		if(isprime(sum1))
		{
			ret=1;
		}
	}
	return ret;
}
int main()
{
//超级素数：它本身，各位数字的和，各位数字的平方和，都是素数。
//求 100~10000 内的所有超级素数，及它们的平均数。
	int x,cnt=0,sum2=0,average=0;
	int supprime[9999];
	for(x=100;x<=10000;x++)
	{
	if(isprime(x))
	{
		if(splitNum(x))
		{
			supprime[cnt++]=x;
		}
	}
	}
	int i,cnt1=0;
	for(i=0;i<cnt;i++)
	{
		printf("%d ",supprime[i]);
		cnt1++;
		if(cnt1%5==0)
		{
			printf("\n");
		}
	}
	for(i=0;i<cnt;i++)
	{
		sum2+=supprime[i];
	}
	printf("%d",sum2/cnt);
	return 0;
}
