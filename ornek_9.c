#include<stdio.h>
int main(){
	int fact = 1,i,n;
	printf("Faktoriyelinin hesaplanmasini istediginiz sayiyi giriniz:");
	scanf("%d",&n);
	while(n>0){
		
		fact = fact *n;
		
		n--;
	}	
	
	printf("faktoriyelin sonucu: **%d**",fact);
	
	
	
	
	return 0;
}
