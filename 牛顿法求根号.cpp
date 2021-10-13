#include<stdio.h>
#include<math.h>
int main(){
	//Çó¸ùºÅ
	double x;
	double y=1.0;
    printf("please input x:");
	scanf("%lf",&x);
	while(y!=x/y){
		y=(y+x/y)/2;
		if(fabs(y-x/y)<0.000001){
			break;
		} 
	}
    printf("%lf",y);
	
	return 0;
}
