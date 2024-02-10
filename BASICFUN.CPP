#include<stdio.h>
#include<conio.h>

int sum(int i, int j){
int add = i+j;
printf("sum of %d and %d is = %d",i,j,add);
}
int mul(i,j){
int mult=i*j;
printf("multiplication of %d and %d is = %d",i,j,mult);
}
void main()
{
 int a,b;
 printf("enter 2 values\n");
 scanf("%d %d",&a,&b);
 sum(a,b);
 mul(a,b);
 getch();
}