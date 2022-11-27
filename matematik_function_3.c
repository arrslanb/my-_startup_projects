#include<stdio.h>
#include<stdlib.h>
int main(){
	
double sayi;
double alt_yuvarla,ust_yuvarla;

printf("sayi giriniz:");
scanf("%lf",&sayi);//double da scanf için %lf kullanýyoruz...

alt_yuvarla = floor(sayi); //alta yuvarlar
ust_yuvarla = ceil(sayi); //uste yuvarlar

printf("%f",alt_yuvarla);
printf("\n");
printf("%f",ust_yuvarla);
	
	
	
	
	
	
	
	
	
	return 0;
}
