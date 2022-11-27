#include<stdio.h>

int main(){
	
int s1,s2;

scanf("%d",&s1);
scanf("%d",&s2);

int *p1 = &s1;
int *p2 = &s2;

if(*p2>*p1){
	printf("en buyuk sayi %d 'dir",*p2);

}	
else{
	
printf("en buyuk sayi %d'dir",*p1);
	
}	
	
	
	
	
	
	
	
	
	
	
	
}
