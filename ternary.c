#include<stdio.h>

int main(){
	
 	int a,b,c,max;
 	
 	printf("enter first number :");
 	scanf("%d",&a);
 	
 	printf("enter second  number :");
 	scanf("%d",&b);
	
	printf("enter third number :");
 	scanf("%d",&c);
 	
	printf("a= %d\nb = %d\nc= %d",a,b,c);
 	
 	max = (a>b && a>c) ? a : (b>c)? b:c;
 	
 	printf("\n max = %d",max);
 	
 	
 	
	return 0;
}