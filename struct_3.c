#include<stdio.h>
#include<stdlib.h>
struct Ogrenci {
	int yas ;
	float sik;
	char okul[20];
	char isim[15];
	char soyad[15];
	int numara;
	char favori[35];
   
	
};

int main(){
	
struct Ogrenci emirhan = {20,2.4,"istun","emirhan","ayaz",31,"kivircik kisa sac"}; //struct yapý nesne (struct Ogrenci emirhan)

printf("ADI:%s\n",emirhan.isim);
printf("SOYADI:%s\n",emirhan.soyad);
printf("YASI:%d\n",emirhan.yas);
printf("OKULU:%s\n",emirhan.okul);
printf("sik uzunlugu:%.2f\n",emirhan.sik);
printf("sikmek isttedigi model:%s\n",emirhan.favori);

	return 0;
}
