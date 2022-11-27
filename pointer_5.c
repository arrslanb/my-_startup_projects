#include<stdio.h>
int main(){
	
	int sayi1,sayi2;
	
	printf("1.sayiyi giriniz:");
	scanf("%d",&sayi1);
	printf("2.sayiyi giriniz:");
	scanf("%d",&sayi2);
	
	int *p1 = &sayi1;
	int *p2 = &sayi2;
	
	printf("iki sayinin toplami %d'dir",*p1+*p2);
		

	
}
