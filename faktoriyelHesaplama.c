#include<stdio.h>
int main(){
	
	int i;
	int fact = 1 ;
	int sayi;
	
	printf("FAKTORIYELININ HESAPLANMASINI ISTEDIGINIZ SAYIYI GIRINIZ:");
	scanf("%d",&sayi);
	
	for(i=1;i<=sayi;i++){
		
		fact = fact * i;
		
	}
	printf("GIRILEN SAYININ FAKTORIYELI %d'DIR",fact);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
