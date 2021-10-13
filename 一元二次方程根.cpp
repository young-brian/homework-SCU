//��һԪ���η��̵ĸ�
// ���� ��y = x2 + 10x + 17
// �� x = 2, �� y = 41
// �� y = 2, �� x = ? 
#include <stdio.h>
#include <math.h>
float mysqrt(float n) {
  // how to guess
  float x = n/2;
  while(x*x!=n) {
   if (x*x > n) 
      x = x/2;
   else
     x = (x+n)/2;
     if(fabs(x*x-n)<0.1){
     	break;
	 }
  }
  return x;
}
int main() {
  float x1, x2;
  float y, a, b, c, temp;
  printf("Please input \n");
  scanf("%f %f %f %f", &y, &a, &b, &c);
  c =  c - y;
  temp = b*b - 4* a*c;
  if(temp >= 0) {
    temp = mysqrt(temp);
    a = 2 * a;
    x1 = (-b + temp)/(a);
    x2 = (-b - temp)/(a);
    printf("Results \n");
    printf("%f\n", x1);  
    printf("%f\n", x2);
  }
  else
    printf("No Results \n");
  return 0;
} 
