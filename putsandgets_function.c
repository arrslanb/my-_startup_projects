#include<stdio.h>
int main(){
	
char isim_soyisim[40];
/*
printf("isminizi soyisminizi yaziniz: ");
scanf("%s",&isim_soyisim);  scanf ile boþluktan sonraki karakterler alýnmýyor bunun içi puts and gets kullancaðýz
printf("%s",isim_soyisim); 
*/	
	
printf("isminizi soyisminizi yaziniz: ");

gets(isim_soyisim); //isim soyismi al

printf("\n\n");

puts(isim_soyisim); //isim soyismi yazdýr
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
