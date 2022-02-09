#include<stdio.h>
void input(float *base,float *height)
{
  
  printf("enter the length of the base:");
  scanf("%f",base);
  printf("enter the length of the height:");
  scanf("%f",height);
}
void area(float base,float height,float *area)
{
  *area=((base*height)/2);
}
void output(float base,float height,float area)
{
  printf("the area of the triangle is %f * %f/2 is %f ",base,height,area);
}
int main()
{
  float base, height,area;
  input(&base,&height);
 area(base,height,&area);
 output(base,height,area);

  return 0;
}