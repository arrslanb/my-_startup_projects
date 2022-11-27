#include<stdio.h>
int main(){
	
int i ,sayi;
int toplam = 0;
printf("***BU PROGRAM MUKEMMEL SAYILARI BULUR***\n\n\n");
printf("bir sayi giriniz:");
scanf("%d",&sayi);

for(i=1;i<sayi;i++){
	
	if(sayi%i==0){	
	toplam = toplam + i;
	}	
}	
    if(toplam==sayi){
		
	printf("MUKEMMEL SAYI");
	}
	else{
	printf("MUKEMMEL SAYI DEGIL");	
	}
	
	
	return 0 ;
}
