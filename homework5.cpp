#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//选作题
//输入一个字符串，形如
//3072x1728,2720x1536,2560x1600,2560x1440,2304x1728,2048x1536,
// 1920x1200,1920x1080,1440x900,1280x800,1280x720,1024x768,1024x640,
// 800x600,800x500,800x450,640x480,640x400,640x360,480x360,480x300,480x270,
// 320x240,320x200,320x180,240x180,176x144,160x120,160x100,160x90
//这是一个显示器支持的分辨率清单，中间逗号分隔。
//现在输入画面的宽和高，然后在上述清单中挑选一个最接近的分辨率输出
//比如输入2000，1000，输出的分辨率应该是1920x1080，因为其它分辨率的误差更大。
//完成如下程序
int main()
{
	int x = 0, y = 0;
	char ress[31][10];
	int ress_[31][2];

	for(int i=1;i<=30;i++)
		scanf("%s", ress[i]);
	scanf("%d %d", &x, &y);
	
	for (int i = 1; i <= 30; i++)
		sscanf(ress[i], "%dx%d", &ress_[i][0], &ress_[i][1]);
		
	for (int i = 1; i <= 30; i++)
	{
		if (fabs(x - ress_[i][0]) <= 100 && fabs(y - ress_[i][1]) <= 100)
		{
			printf("选中的分辨率是%s\n", ress[i]);
			return 0;
		}
	}
	return 0;
}
