#include <stdio.h>
#include <stdlib.h>
int main(){
	
int i ,a;
int dizi[a];

printf("Girilecek sayi miktarini yaziniz:");
scanf("%d",&a);
printf("\ngirilecek sayilari giriniz:\n");
for(i=0;i<a;i++){
	
	scanf("%d",&dizi[i]);

}	
int maks = dizi[0];	
for(i=0;i<a;i++){
	
	if(maks>dizi[i]){
  
    maks=dizi[i];	
	}
	

}	
	printf("maks degeriniz: %d ",dizi[i]);
	return 0;
}
