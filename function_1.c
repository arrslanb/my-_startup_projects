#include<stdio.h>
#include<stdlib.h>

int toplam(int x1,int x2){
	
	int x3;
	
	x3 = x1 + x2;
	
	return x3;	
	
}
int main (){
	
	int x1 , x2, t;
	printf("x1 ve x2 sayisini giriniz:");
	scanf("%d%d",&x1,&x2);
	
	t = toplam(x1,x2);
	
	printf("SONUC:%d'dir",t);
	
	return 0;
}
