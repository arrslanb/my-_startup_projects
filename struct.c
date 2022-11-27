#include<string.h>
#include<stdio.h>

struct ogrenci { // struct yi main fonksiyonunun üstünde tanýmladýk allta da olur ama üstte yapmak daha uygundur
	
char ad [20];

char soyad[100];

float okulno;

float gano;		
};

int main(){
	
struct ogrenci x = { "Batuhan","Arslan",22120205385,2.68}; //struct ogrenci'yi tanýmlamak önemli enuum yapýsý gibi...

printf("Ad: %s\n",x.ad); //tanýmlanan deðiþken.deðiþken burasýda önemli 
printf("Soyad: %s\n",x.soyad);
printf("Numarasi: %f\n",x.okulno);	
printf("4 uzerinden ortalamasi: %.2f",x.gano);			
	return 0 ;
}
