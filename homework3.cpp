//f(n)�����Ķ���Ϊ0~n�а�����1�ĸ���
//f(13)��0~13�а���1���� 1��10��11��12��13������f(13)=6
//f(1) = 1��
//����һ��f(n)=n��nֵ 
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
