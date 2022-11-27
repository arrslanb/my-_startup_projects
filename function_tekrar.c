#include<stdio.h>

int toplam(int s1, int s2){
	int s3;
	s3 = s1+s2;
	return s3;		
}

int main(){
	
int a ,x,y ;

printf("SAYI 1 :");
scanf("%d",&x);
printf("SAYI 2 :");
scanf("%d",&y);


a = toplam(x,y);
printf("%d",a);

	
	return 0;
}
