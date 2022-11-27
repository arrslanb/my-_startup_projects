#include<stdio.h>
#include<string.h>

enum sehirler 
{
	sifir,adana,adiyaman,afyon,agri,amasya,ankara,antalya,artvin,aydin,balikesir //dizilerde indez 0 dan başladğı için başa sıfır yazdım
};

int main(){
	
enum sehirler sehir ;
sehir = adana;
printf("%d",sehir);
	return 0;
}
