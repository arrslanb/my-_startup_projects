#include<stdio.h>
int main(){

int vize ;
int final ;
float ortalama;

printf("Vize notunuzu girin:");
scanf("%d",&vize);

printf("Final notunuzu girin:");
scanf("%d",&final);

ortalama = ((vize*4/10)+(final*6/10))/2;

if (ortalama < 50){
	
	printf ("Bute kaldiniz.");
	
}	
else {
	
	printf("Dersi Gectiniz.");
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0 ;
}
