#include<stdio.h>
int main(){
int a,i;
int dizi[a];
printf("Kac elemanli dizi olsun:");
scanf("%d",&a);
int *p = dizi; //&dizi[0]; demek
printf("Dizi elemanlarini giriniz:\n");
for(i=0;i<a;i++){	

printf("%d.eleman:",i+1);
scanf("%d",&dizi[i]);

}
for(i=0;i<a;i++){
	printf("%d.eleman = %d\n",i+1,*(p+i)); //*(p+i) dizi eleman de�erlerini g�sterecek *p dizinin 0.indesini g�sterir *(p+1) dizinin 1.indesini g�sterir
	
	
	
}
	

	return 0 ;
}
