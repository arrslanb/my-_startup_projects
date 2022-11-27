#include<stdio.h>
int main (){
	
int x = 31;

int *ptr = &x;

printf("1-%d\n",ptr); // x in adresi
printf("2-%d\n",&x);  // x in adresi
printf("3-%d\n",&ptr); //ptr nin adresi
printf("4-%d\n",x);   //  x in deðeri
printf("5-%d\n",*ptr); // x in deðeri

	
	
	
	
	
	
	
	
	
	
	return 0;
}
