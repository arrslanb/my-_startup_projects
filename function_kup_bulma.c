#include<stdio.h>
	
int kupBul(int sayi){
	
   kup=sayi*sayi*sayi;

return kup ;
	
	
}	
	int main(){
	int sayi;	
	int k;
	ptintf("KUBUNUN BULUNMASINI ISTEDIGINIZ SAYIYI GIRINIZ:");
	scanf("%d",sayi);	
		
	k = kupBul(sayi);
	
    printf("Sayinin kubu %d'dir",k);
		
		
		return 0 ;
	}
	
	
	
	
	
	
	
	
	
	

