#include<stdio.h>
int main(){
	
char isim_soyisim[40];
/*
printf("isminizi soyisminizi yaziniz: ");
scanf("%s",&isim_soyisim);  scanf ile bo�luktan sonraki karakterler al�nm�yor bunun i�i puts and gets kullanca��z
printf("%s",isim_soyisim); 
*/	
	
printf("isminizi soyisminizi yaziniz: ");

gets(isim_soyisim); //isim soyismi al

printf("\n\n");

puts(isim_soyisim); //isim soyismi yazd�r
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
