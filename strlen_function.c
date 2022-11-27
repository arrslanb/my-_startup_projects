#include<stdio.h>
int main(){
int a;	
char cumle[50];

printf("cumleyi girin:");
/*
scanf("%s",&cumle);
*/
gets(cumle);//scanf gibi düsünülebilir puts da printf gibi düsünülebilir..
a = strlen(cumle) ;
printf("\n");
printf("katar uzunlugu: %d'dir",a); //scanf ile okuttuðumuz için boþluktan sonraki harfleri saymýyor puts and gets kullanmamýz lazým..
		
	return 0 ;
}
