#include<stdio.h>
struct ogrenci {
	char isim[20];
	char soyad[20];
	int yas ;
	long no;

};

int main(){
	
struct ogrenci ogrenciler[4];

int i;

for(i=0;i<4;i++){

printf("%d. ogrencinin bilgilerini giriniz:(ad,soyad,yas,okulno sirasiyla!)",i+1);
scanf("%s%s%d%d",&ogrenciler[i].isim, &ogrenciler[i].soyad, &ogrenciler[i].yas, &ogrenciler[i].no);
}	
	
for(i=0;i<4;i++){
	
printf("%d.ogrencinin adi %s,soyadi %s , yasi %d , numarasi %d'dir\n",i+1,ogrenciler[i].isim,ogrenciler[i].soyad,ogrenciler[i].yas,ogrenciler[i].no);
	
	
	
	
}	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
