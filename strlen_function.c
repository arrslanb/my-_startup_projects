#include<stdio.h>
int main(){
int a;	
char cumle[50];

printf("cumleyi girin:");
/*
scanf("%s",&cumle);
*/
gets(cumle);//scanf gibi d�s�n�lebilir puts da printf gibi d�s�n�lebilir..
a = strlen(cumle) ;
printf("\n");
printf("katar uzunlugu: %d'dir",a); //scanf ile okuttu�umuz i�in bo�luktan sonraki harfleri saym�yor puts and gets kullanmam�z laz�m..
		
	return 0 ;
}
