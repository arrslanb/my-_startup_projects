#include<stdio.h>
int main(){
//DÝZÝLERDEN ARÝTMETÝK ORTALAMA HESAPLAMA

float sayilar[5];
float toplam = 0.0	;
int i ;

for(i=0;i<5;i++){
	

	printf("Bir Sayi Giriniz:");
	scanf("%f",&sayilar[i]);
	
}
	
for(i=0;i<5;i++){
	
	toplam = toplam + sayilar[i];

}	
	printf("\nGirdiginiz Sayilarin Aritmatik Ortalamasi: %.2f",toplam/5);
	
	
	
	
	
	
	return 0 ;
}
