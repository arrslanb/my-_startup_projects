#include<stdio.h>
int fact(int sayi){
	
int fak= 1;
int i ;

printf("sayi giriniz:");
scanf("%d",&sayi);

for(i=1;i<=sayi;i++){
	
	fak = fak * i;
	
	
}	
return fak ;	
}
	
		
int main(){
	
int sayi;	
printf("faktoriyel sonucu = %d",fact(sayi));	
	
	
	return 0;
}



