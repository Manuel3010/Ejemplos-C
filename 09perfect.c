//Perfecto o no?
#include<stdio.h>
#include<conio.h>
int main(){
	int n,i,s=0;
	printf("ingrese numero para verificar si es perfecto:");
	scanf("%d",&n);
	for(i=1;i<n;i++){
		if(n%i==0)	
			s=s+i;
	}
	if(s==n)
	printf("El numero %d es perfecto",n);
	else 
	printf("El numero %d no es perfecto",n);
	getch();
}
