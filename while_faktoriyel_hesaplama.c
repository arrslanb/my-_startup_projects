#include<stdio.h>
int main(){
int sayi,fact,i;
i =1;
fact =1;

printf("sayi giriniz:");
scanf("%d",&sayi);

while(sayi>=i){
	
	fact = fact * i;
	i++;
	
}
printf("sonuc:%d",fact);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0 ;
}

