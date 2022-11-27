#include<stdio.h>
#include<string.h>
int main(){
	
char nereden [100] = "BATUHAN ARSLAN 21 YAS";
char nereye [52]= "";

strncpy(nereye,nereden,3);// ücüncü parametre kac harf(boslukta dahil) alacaðýný gösterir...

printf("%s",nereye);
	
	return 0 ;
}
