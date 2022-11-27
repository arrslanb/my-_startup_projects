#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	
double sayi, sonuctan,sonuccot;

printf("DERECE GIRINIZ:");
scanf("%lf",&sayi);

sonuctan=sin(sayi)/cos(sayi);
sonuccot=cos(sayi)/sin(sayi);

printf("tan sonucu:%lf'dir",sonuctan);
printf("\n\n");
printf("cot sonucu:%lf'dir",sonuccot);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
	
}
