#include<stdio.h>

int main(){
	
	int i,toplam=0;
	
	for(i=400;i<=500;i++){
		
		if(i%7==0){
			toplam = toplam + i;
			printf("%d\n",i);
			printf("+\n");
		}
		
	}
	
	printf("sonuc=%d",toplam);
	
	
	
	
	
	return 0;
}
