#include<stdio.h>
int main(){
	
int a,b,c,i,sayac=0; //a y�zler  b onlar  c birler basama��d�r

for(i=100;i<=999;i++){
	
a=i/100; //y�zler
b=(i/10)%10; //onlar
c=i%10; //birler

if(a!=b && a!=c && b!=c){
	printf("%d ",i);
	sayac++;

}	
	
}	
printf("\n\n%d kadar 3 basamakli basamaklari farkli sayi vardir...",sayac);	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0 ;
}
