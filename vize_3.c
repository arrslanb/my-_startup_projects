#include<stdio.h>
int main(){

int saat;

printf("BATU OTOPARKA HOSGELDINIZ...\n\n\n\n");
	
printf("OTOPARKTA KALMA SURENIZ:\n");
scanf("%d",&saat);

if(0.0<saat<=4.0){
	printf("park ucretiniz:10 tl");}
	else if(5.0<=saat<=8.0){
		printf("park ucretiniz:12 tl");}
		else if (9<=saat<=12){
			printf("park ucretiniz:15 tl");}
			else if(saat>=13){
				printf("park ucretiniz:20 tl");}
	
	return 0 ;
}
