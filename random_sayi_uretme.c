#include <stdio.h>
#include <stdlib.h>
#include <time.h> // srand(time(NULL)); i�in laz�m ****

int degerler(int baslangic,int bitis){
	
	srand(time(NULL));
	//rand() % 6 + 1 ***** [0+1,5+1] = [1,6] aral�kl� say� �retir.
	
	int rastgele = rand()% bitis + baslangic; //buras� �ok �nemli***** bitis nereye kadar �retilecek baslangic nereden baslayacak demek
	if(rastgele==baslangic && rastgele==bitis){
		
	rastgele++;
	}
return rastgele;	
}
int main(){
	
int ilk,son,i;

printf("ilk sayiyi giriniz:");
 scanf("%d",&ilk);
printf("son sayiyi giriniz:");
 scanf("%d",&son);

i = degerler(ilk,son);

printf("\n%d ve %d arasindaki random sayi= %d'dir...",ilk,son,i);	
	

	return 0 ;
}
