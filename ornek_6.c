#include<stdio.h>
int main(){
	
	int n1,n2,n3;
	printf("1.Not:");
	scanf("%d",&n1);
		printf("2.Not:");
	scanf("%d",&n2);
		printf("3.Not:");
	scanf("%d",&n3);
	
	if((n1>=60 && n2>=60) || (n1>=60 && n3>=60) || (n2>=60 && n3>=60)){	//ÖNEMLÝ KISIM BURASI 2 VEYA DAHA FAZLA 60 TAN YUKARI NOT OLURSA GECTÝNÝZ..
     	printf("gectiniz!!");
	}
	
	else{
		printf("kaldiniz :(");
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
}
