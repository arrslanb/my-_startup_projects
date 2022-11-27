#include<stdio.h>

int main(){
int i,toplam=0 ;	
int dizi[5];

printf("dizi elemanlarini giriniz:\n");

for(i=0;i<5;i++){
 printf("%d.eleman=",i+1);
 scanf("%d",&dizi[i]);
 
 toplam = toplam + dizi[i];
			
}
printf("%d",toplam);	
	return 0 ;
}
