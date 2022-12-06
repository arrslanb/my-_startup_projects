// bankanın vadeye göre her ay sana faiz olarak verdiği parayı hesaplayan sistem...
#include<stdio.h>
#include<math.h>
#define faiz 0.1
int main(){
	
int i ,vade,anapara;
float aylik;
printf("Ana paraniz ne kadar?");	
scanf("%d",&anapara);
printf("kac ay vadeli dusunuyorsunuz:");
scanf("%d",&vade);

for(i=1;i<=vade;i++){
	
	anapara = anapara + (anapara*faiz);
	aylik = anapara/i;
}

printf("Aylik kazanciniz:%.2f",aylik);	
	

	return 0;
}
