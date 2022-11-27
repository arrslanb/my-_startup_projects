#include<stdio.h>
int main() {
	int dizi[2][2],a=0,b=0,i,j;
	for(i=10;i<=40;i+=10)
 // i deðeri 10dan baþlayarak 20 30 40 diye artýyor, 40 son deðeri oluyor. Bunlarý 2 boyutlu dizimize atayacak.
	{
		dizi[0][a]=i;
 // a deðeri 0 iken 0 0 elemanýna 10 atadýk, a deðeri 1 arttý 0 1 elemanýna 20 atandý
		a++;
		if(a==2)
 // a 2 olduðunda artýk bir alt satýra geçmemiz gerektiði için if kullandým.
		{
			dizi[1][b]=i;
 // üstteki mantýðýn aynýsýndan kullandým. 30 ve 40 atandý
			if(b==2)
			{break;
 // döngüyü birinin bitirmesi gerekiyor artýk deðil mi :D 
			}
		}
	}
	for(i=0;i<2;++i)
 // burda da yazdýrma için iç içe 2 for döngüsü gerekiyordu. i ye baðlý for döngüsü satýra hükmediyor
	{
		for(j=0;j<2;++j)
 // ve bu döngü de satýrda yazýlacaklara hükmediyor. 
		{
			printf("%d\t",dizi[i][j]);
 // \t fonksiyonu bir tablýk boþluk atmaya yarýyor.  \n gibi bir þey o da, bilseniz iyi olur 
		}
		printf("\n");
	}
	return 0;
}
