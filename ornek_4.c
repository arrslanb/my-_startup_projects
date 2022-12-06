#include<stdio.h>
int main(){
	
	int sayi;
	printf("sayiyi giriniz:");
	scanf("%d",&sayi);
	
	if(sayi>0){
		printf("pozitif sayi");
		
	}
	else if(sayi==0){
		printf("o girdiniz notr");
	}
	else {
		printf("negatif sayi");
		
	}
	
	return 0;
}
