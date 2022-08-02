/* Problema: ordenar a lo mas 5 libros en base al año */
/* Compilacion: https://www.onlinegdb.com/online_c_compiler */


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
  char r;

  while(i<5 && r!=EOF){
  printf("Introduce el nombre del libro  %i \n",i);
  scanf("%s\n",(a[i]).s);
  printf("Introduce la editorial del libro  %i \n",i);
  scanf("%s\n",(a[i]).e);
  printf("Introduce el año de publicación del libro  %i \n",i);
  scanf("%d\n",&(a[i]).ao);
  l++;
  if(i==0) y[i]=i;
  else {
        if(a[i].ao < a[i-1].ao){
           tmp=i-1; /*Swap - intercambio */
           y[i-1]=i;
	   y[i]=i-1;
	} /* Fin if*/
       } /* Fin else*/
   i++;
   printf("Introducir otro libro? (Ctrl+D = NO)");
   scanf("%c",r);
  } /*Fin while*/
  /*Impresiones en orden*/
  for(i=0;i<l;i++)
   {
   printf("Libro  %i \n",i);
   printf("Nombre:  %s \n",a[y[i]].s);
   printf("Editorial:  %s \n",a[y[i]].e);
   printf("Anio de publicacion:  %d \n",a[y[i]].ao);
     } 
 
 exit(0);
  
}
