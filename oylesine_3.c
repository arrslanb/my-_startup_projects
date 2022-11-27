#include<stdio.h>
int main(){
	
int dizi [7]={1,2,3,4,5,6,7};
int toplam = 0;
int carpim = 0;
int i,k;
for(i=0;i<7;i++){
	
	toplam = toplam + dizi[i];
	
}
for(k=0;k<7;k++){
	
 carpim = carpim + dizi[k]*dizi[k]; //n ye kadar girilen sayýlarýn kareler toplamý....
	
	
}
	
printf("Toplami: %d\n",toplam);	
printf("kareler toplami: %d",carpim);
			
return 0;	
	
}
