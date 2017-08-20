//Primos
#include<stdio.h>
#include<conio.h>
int main(){
	int n,i,c=0;
	printf("Ingrese numero a probar:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)	{
		if(n%i==0)c++;
	
	}
	if(c==2)printf("El numero es primo");
	else printf("El numero no es primo");
	getch();
}
