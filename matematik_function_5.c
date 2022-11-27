#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	
double sayi , sonuc1,sonuc2;

printf("SAYI GIRINIZ:");
scanf("%lf",&sayi);

sonuc1=log10(fabs(sayi));//ÖNCE POZÝTÝF SONRA LOGARÝTMASINI ALIYORUZ...
sonuc2=fabs(sayi);

printf("%lf",sonuc2);
printf("\n");
printf("%lf",sonuc1);
	
	
	return 0 ;
}

