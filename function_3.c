#include<stdio.h>

int seriToplama(int x){
	
	int i,toplam=0;
	
	for(i=0;i<=x;i++){
		
	toplam = toplam + i;
	
	}
	
	return toplam ;

}

int main(){
	
int x ,t; 

printf("1 den n ye kadar olan sayilarin toplami(n yi giriniz...)");
scanf("%d",&x);

t = seriToplama(x);

printf("sonuc:%d",t);	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
