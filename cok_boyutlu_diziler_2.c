#include<stdio.h>
int main() {
	int dizi[2][2],a=0,b=0,i,j;
	for(i=10;i<=40;i+=10)
 // i de�eri 10dan ba�layarak 20 30 40 diye art�yor, 40 son de�eri oluyor. Bunlar� 2 boyutlu dizimize atayacak.
	{
		dizi[0][a]=i;
 // a de�eri 0 iken 0 0 eleman�na 10 atad�k, a de�eri 1 artt� 0 1 eleman�na 20 atand�
		a++;
		if(a==2)
 // a 2 oldu�unda art�k bir alt sat�ra ge�memiz gerekti�i i�in if kulland�m.
		{
			dizi[1][b]=i;
 // �stteki mant���n ayn�s�ndan kulland�m. 30 ve 40 atand�
			if(b==2)
			{break;
 // d�ng�y� birinin bitirmesi gerekiyor art�k de�il mi :D 
			}
		}
	}
	for(i=0;i<2;++i)
 // burda da yazd�rma i�in i� i�e 2 for d�ng�s� gerekiyordu. i ye ba�l� for d�ng�s� sat�ra h�kmediyor
	{
		for(j=0;j<2;++j)
 // ve bu d�ng� de sat�rda yaz�lacaklara h�kmediyor. 
		{
			printf("%d\t",dizi[i][j]);
 // \t fonksiyonu bir tabl�k bo�luk atmaya yar�yor.  \n gibi bir �ey o da, bilseniz iyi olur 
		}
		printf("\n");
	}
	return 0;
}
