//f(n)函数的定义为0~n中包含的1的个数
//f(13)是0~13中包含1的有 1，10，11，12，13，所以f(13)=6
//f(1) = 1。
//求另一个f(n)=n的n值 
#include <stdio.h>
int f(int x)
{
	int z=x,t,cnt=0;
	while(z>0) 
	{
		t=z%10;
		if(t==1)
		{
			cnt++;
		}
		z/=10;
	}
    return cnt;
}

int main()
{
	int sum=0;
	int j=1;
	while(1)
	{
		sum+=f(j);
		if(sum==j)
		{
			printf("%d\n",j);
		}
		j++;
	}
	
	return 0;
} 
