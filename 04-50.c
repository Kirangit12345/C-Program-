//write c program swap two numbers 
#include<stdio.h>
void main(){
int a,b,temp;
printf("Enter a&b value\n");
scanf("%d%d",&a,&b);
printf("Before swap a=%d,b=%d\n",a,b);
temp=a;
a=b;
b=temp;
printf("After swap a=%d,b=%d",a,b);



}



