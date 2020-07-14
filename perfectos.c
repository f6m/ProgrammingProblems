/* programa para determinar si un numero es perfecto */
#include<stdio.h>
#include<stdlib.h>

int perfecto(int n);
// funcion principal
int  main(){
int i;
for(i=6;i<=2000;i++)
if(perfecto(i)==1)
 printf("El numero %d  es pefecto\n",i);
exit(0);
}

//TAMANO
int perfecto(int n){
int sum =0;
int i;
for(i=1;i<=n/2;i++)
{
   if(n%i == 0) /* es divisor */
	sum += i;
}
if (sum==n) return 1;
else return 0;
}	

