#include<stdio.h>
#include<math.h>
int main(){
	//Çó¸ùºÅ
	int x;
	double y=1;
    printf("please input x:");
	scanf("%d",&x);
	while(y!=x/y){
		y=(y+x/y)/2;
		if(fabs(y-x/y)<0.0001){
			break;
		} 
	}
    printf("%lf",y);
	
	return 0;
}
