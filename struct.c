#include<string.h>
#include<stdio.h>

struct ogrenci { // struct yi main fonksiyonunun �st�nde tan�mlad�k allta da olur ama �stte yapmak daha uygundur
	
char ad [20];

char soyad[100];

float okulno;

float gano;		
};

int main(){
	
struct ogrenci x = { "Batuhan","Arslan",22120205385,2.68}; //struct ogrenci'yi tan�mlamak �nemli enuum yap�s� gibi...

printf("Ad: %s\n",x.ad); //tan�mlanan de�i�ken.de�i�ken buras�da �nemli 
printf("Soyad: %s\n",x.soyad);
printf("Numarasi: %f\n",x.okulno);	
printf("4 uzerinden ortalamasi: %.2f",x.gano);			
	return 0 ;
}
