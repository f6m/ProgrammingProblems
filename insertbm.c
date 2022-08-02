/* Problema: Crear una funcion insertb(L,m) que inserte en la cadena de entrada L un caracter 
de nueva linea cada m caracteres */
/* Compilacion: 
   Ejecución: 

f6m*/

#include <stdio.h>
#include <string.h>
#define lim 10000

char s[lim];
int m=4;

void insertb(char* s, int m, int l){
int i=0;
int k,j;
int esp=0;
char st[lim];
char st1[lim];

strcpy(st1,s);

while(i <= l-1)
   {
     if(i>0 && (i%m) == 0) /*El resto de dividir i entre m es zero */
     {

      //k=0;
      
      /*for(j=i;j<=l-1;j++)
       st[k++]=s[j]; /*el arreglo st contiene la parte derecha de s*/

      st1[i+esp]='\n'; /*Insertamos el caracter de nueva linea */
      
      k=i+esp+1;
      for(j=i;j<=l-1;j++)
      st1[k++]=s[j];   /* Insertamos el caracter de fin de cadena */
      ++esp; /*incrementamos el contador de espacios*/
      //printf("\n Nva. cadena con %d espacios de nueva linea: \n %s",esp,st1);
      } /* fin if */
     i++;
    } /* fin while */
    printf("\n Cadena con m = %d y %d espacios insertados:\n %s \n",m,esp,st1);
} /* fin insertb */


int main(){
  int i,l;
  char c;

   /* Lectura de la cadena, funcion getchar de string.h*/
   for(i=0;i <= lim - 1 && (c=getchar()) != '\n' && c != EOF; ++i)
   { 
     s[i]=c;
     /*printf("Caracter guardado:%c El valor de i es %d\n",c,i);*/
   }
  
   s[i++]='\0';
   l=strlen(s);
   printf("\n Cadena guardada por el for:%s con longitud:%d\n",s,l);
   
   insertb(s,m,l);
         
}
