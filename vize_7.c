#include<stdio.h>
#include<stdlib.h>
int main(){
yeniden:;		
int a,b,c,toplam,sayi;

printf("3 basamakli bir sayi giriniz:");
scanf("%d",&sayi);
if(sayi>=100 && sayi<=999){
	
printf("\nHESAPLANIYOR...\n");
}
else{
	goto yeniden;
}
	
a = sayi/100;  
b = (sayi/10)%10;
c = sayi%10;

toplam= a+b+c;
printf("\nBasamaklar toplami %d'dir...",toplam);
	
	
return 0 ;
}
