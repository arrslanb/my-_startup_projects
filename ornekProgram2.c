#include<stdio.h>
#include<math.h>
//ax^2+bx+c seklinde verilen denklemin koklerini bulunuz.

int main(){
	
	int a, b, c ;
	float x1, x2 ;
	float delta ;
	
	     printf("denklemin a'sayisini giriniz:");
	scanf("%d",&a);
		printf("denklemin b'sayisini giriniz:");
	scanf("%d",&b);
		printf("denklemin c'sayisini giriniz:");
	scanf("%d",&c);
	
	delta = b*b -(4*a*c);
	x1 = (-b +(sqrt(delta)))/2*a;
	x2 = (-b -(sqrt(delta)))/2*a;
	
	printf("denklemin x1 koku %f'dir\n", x1);
		
	printf("denklemin x2 koku %f'dir\n", x2);
	
	
	
	
	
	
	
	
	
	
	
	
	return 0 ;
}
