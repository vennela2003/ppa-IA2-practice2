#include<stdio.h>
intinput_array_size()
{
int n;
printf("How many numbers do you want to enter: ");
scanf("%d",&n);
return n;
}
voidinput_array(intn,int a[n])
{
int i;
printf("Enter %d numbers:\n ",n);
for(i=0;i<n;i++)
  {
scanf("%d",&a[i]);
  }
}
intsum_composite(int n, int a[n])
{
int count=0,i;
for(i=0;i<n;i++)
  {
if(a[i]==2)
       {
continue;
       }       
else if(a[i]%2==0)
        {
count=count+a[i];
        }

    }
return count;
}
void output(int sum)
{
printf("Sum of all composite numbers is %d",sum);
}
int main()
{
intn,result;
  n=input_array_size();
int a[n];
input_array(n,a);
result=sum_composite(n,a);
output(result);
return 0;
}

