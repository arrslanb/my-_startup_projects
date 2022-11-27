#include<stdio.h>
int main(){
	
int sayi,  fact = 1 ;

printf("Faktoriyelinin hesaplanmasini istediginiz sayiyi giriniz:");
scanf("%d",&sayi);

while(sayi!=0){
	
	fact = fact * sayi;
	sayi--;
}	
	
printf("%d",fact);	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0 ;
}
