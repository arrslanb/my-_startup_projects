#include<stdio.h>
int main(){
	
int sayi,i;

printf("TAM BOLENLERININ BULUNMASINI ISTEDIGINIZ SAYIYI GIRINIZ:");
scanf("%d",&sayi);

for(i=1;i<=sayi;i++){

	if(sayi%i==0){
		printf("-%d-\n",i);
		
	}
	
	
}	

	return 0;
}
