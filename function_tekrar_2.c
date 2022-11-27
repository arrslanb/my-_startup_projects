#include<stdio.h>

int kupbul(int sayi){
	int kup;
	kup= sayi*sayi*sayi;
	return kup;
		
}
int main(){
	int kup,sayi;

printf("KUBUNUN HESAPLANMASINI ISTEDIGINIZ SAYIYI GIRINIZ:");
scanf("%d",&sayi);

kupbul(sayi);

printf("%d",kupbul(sayi));

return 0 ;
}


