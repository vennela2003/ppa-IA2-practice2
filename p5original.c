#include<stdio.h>
int input()
{
int a;
printf("Enter the number :\n");
scanf("%d",&a);
  return a;
}

intgcd(inta,int b)
{ int r;
  for(int i=1;i<=a &&i<=b;i++)
    {
      if(a%i==0 &&b%i==0)
         r=i;
    }
  return r;
}

void output(inta,intb,inthcf)
{
printf("The H.C.F (G.C.D) of %d and %d is %d",a,b,hcf);
}

int main()
{
inta,b,hcf;
  a=input();
  b=input();
hcf=gcd(a,b);
  output(a,b,hcf);
  return 0;

}
