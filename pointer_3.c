#include<stdio.h>
int main(){
	
int x = 25 ;

int *pt = &x;

printf("ADRES1:%d\n",pt);

pt++; // pointeri bir bir artt�rd�k fakat int 4 byte oldu�u i�in 4 er 4er artacak..

printf("ADRES2:%d\n",pt);
	
printf("%d",&pt);
	return 0;
}
