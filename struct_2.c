#include<string.h>
#include<stdio.h>
struct kayit{
	
char ad[100];
char soyad[100];	
int sinif;
float ortalama ; 
		
};
int main(){
	
struct kayit  ogr ;

printf("Ad:");
scanf("%s",&ogr.ad);  //Stringlerde ampersant zorunlu deðil ama kullanýlabilir
printf("Soyad:");
scanf("%s",&ogr.soyad);
printf("Sinif:");
scanf("%d",&ogr.sinif);
printf("Ortalama:");
scanf("%f",&ogr.ortalama);
printf("\n\n");
printf("***Ogrencimizin Bilgileri***\n");
printf("Ad:%s\nSoyad:%s\nSinif:%d\nOrtalama:%.2f",ogr.ad, ogr.soyad, ogr.sinif, ogr.ortalama);


	return 0 ;
}
