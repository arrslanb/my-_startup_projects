#include<stdio.h>
#include<string.h>

enum sehirler 
{
	sifir,adana,adiyaman,afyon,agri,amasya,ankara,antalya,artvin,aydin,balikesir //dizilerde indez 0 dan ba�lad�� i�in ba�a s�f�r yazd�m
};

int main(){
	
enum sehirler sehir ;
sehir = adana;
printf("%d",sehir);
	return 0;
}
