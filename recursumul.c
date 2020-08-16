/* Ejemplos de funciones recursivas. */

	#include <stdio.h>
	#include <stdlib.h>


	float sum(int, float []);
	float mul(int, float []);
	

	int main() /* Rellenar, extraer y visualizar */
	{
	 int k=4;
         float n[4]={2,3,4,5};
	 printf("%f\7 %f",mul(k-1,n),sum(k-1,n));
        }
 
	float mul(int k, float a[])
	{
         if(k==0) return a[k];
	else return a[k]*mul(--k,a);
	}

	float sum(int k, float a[])
	{
	if(k==0) return a[k];
	else return a[k]+sum(--k,a);
	}


