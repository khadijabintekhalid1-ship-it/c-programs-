#include <stdio.h>
int main (){
	int a = 20;
	printf ("enter your age ");
	scanf("%d",& a);
	if (a>=18){
		printf ("you are eligible for vote ");
	}else if  (a<=18){
		printf("you are not eligible for vote");
	}
	return 0 ;
}
