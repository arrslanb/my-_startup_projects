#include<stdio.h>
#include<math.h>
int main(){
	
int taban,us,sonuc=1,i;

printf("tabani giriniz:");
scanf("%d",&taban);
printf("ussu giriniz:");
scanf("%d",&us);
	
for(i=1;i<=us;i++){
	
	sonuc = sonuc * taban; 
	
}
	printf("sonucunuz=%d",sonuc); // tabi pow kullanmak daha mantýklý :D
	
	return 0;
	
	}
