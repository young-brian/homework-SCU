#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int he[120][120] = { 0 }, pic[120][120] = { 0 };
int he_[120][120] = { 0}, pic_[120][120] = { 0 };
int main()
{
	int x = 0, h = 0;
	scanf("%d %d", &x, &h);
	for (int i = 1; i <= x; i++)
		for (int j_ = 1; j_ <= x; j_++)
			scanf("%d", &pic[i][j_]);
	
		
	for(int j=1;j<=h;j++)
		for (int i_ = 1; i_<= h; i_++)
		scanf("%d", &he[j][i_]);

	for (int l = 1; l <= h; l++)
		for (int c = 1; c <= h; c++)
			he_[l][c] = he[h + 1 - l][h + 1 - c];//卷积核旋转180度

	for (int line = 1; line <= x; line++)
	{
		for (int col = 1; col <= x; col++)
		{
			int sum = 0;
			int dl = (h / 2)+1 - line, dc = (h / 2)+1 - col;//相对坐标差
			int line2, col2;
			for (int line1 = 1; line1 <= h; line1++)
			{
				for (int col1 = 1; col1 <= h; col1++)
				{
					line2 = line1 - dl; col2 = col1 - dc;
					if (line2 >= 1 && col2 >= 1 && line2<=x && col2<=x)
					{
						sum += he_[line1][col1] * pic[line2][col2];
					}
				}
			}
			pic_[line][col] = sum;
		}
	}//相对坐标！！！

	for (int s = 1; s <= x; s++)
	{
		for (int d = 1; d <= x; d++)
		{
			printf("%d ", pic_[s][d]);
		}
		printf("\n");
	}
	return 0;
}
