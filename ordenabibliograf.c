/* Problema: ordenar a lo mas 5 libros en base al año */
/* Compilacion:  */
#include <stdio.h>
#include <string.h>

struct libro{
char s[20];
char e[20];
int ao;
};

typedef struct libro Libro;

int main(){
Libro a[5]; /* Arreglo de libros */
int y[5]; /*Arreglo con los indices en orden */

  /* Declaraciones de variables y tipo de dato, puede ser globales*/
  int i=0,tmp,l=0;
  int r=1,k,j;

  while(i<5 && r==1){
  printf("Introduce el nombre del libro  %i \n",i);
  scanf("%s",(a[i]).s);
  printf("Introduce la editorial del libro  %i \n",i);
  scanf("%s",(a[i]).e);
  printf("Introduce el año de publicación del libro  %i \n",i);
  scanf("%d",&(a[i]).ao);
  l++;
  if(i==0) y[i]=i;
  else {
	k=i-1;
	j=i;
	while(k>=0){
        if(a[j].ao < a[k].ao){ /*Compara años */
           tmp=a[k].ao; /*Swap - intercambio de años en las estructuras */
           a[k].ao=a[j].ao;
	   a[j].ao=tmp;
	} /* Fin if*/
	k--;
	j--;
	} /*fin while */
       } /* Fin else*/
   i++;
   printf("Introducir otro libro? (0 = NO, 1 = SI)\n");
   scanf("%d",&r);
  } /*Fin while*/
  /*Impresiones en orden*/
  for(i=0;i<l;i++)
   {
   printf("Libro  %i \n",i);
   printf("Nombre:  %s \n",a[i].s);
   printf("Editorial:  %s \n",a[i].e);
   printf("Anio de publicacion:  %d \n",a[i].ao);
     } 
 
 exit(0);
  
}


