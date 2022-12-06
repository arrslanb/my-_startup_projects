#include<stdio.h>
#include<math.h>
int main(){
	
//bugünün tarihine göre kaç yasindasin..
int gun,ay,yil;
int agun=6,aay=12,ayil=2022;
int bgun,bay,byil;	
printf("kac gunluksun...\n");
printf("dogum tarihi gun ay yil olacak sirayla giriniz!\n");
printf("gun:");
scanf("%d",&gun);
printf("ay:");
scanf("%d",&ay);
printf("yil:");
scanf("%d",&yil);

byil = ayil - yil ;
bay = aay - ay;
bgun = agun - gun;
if(bay==0 && bgun==0){
	printf("****DOGUM GUNUN KUTLU OLSUN****\n");
}
printf("%d yil %d ay %d gunluksun...",abs(byil),abs(bay),abs(bgun));	
	

	return 0;
}
