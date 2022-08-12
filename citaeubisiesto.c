/* Problema: Determina si el año es bisiesto y suma 585 a la fecha de solicitud */
/* basado en la idea en el libro de programacion R&K pags. 42-43 */
/* Compilacion: https://www.onlinegdb.com/online_c_compiler */
#include <stdio.h>

/*Correspondencia indice arreglo - dias del mes*/
int m[12];

/* Funcion para descidir si el año es bisiesto */
/* x es bisiesto ssi Un año es bisiesto si es:

Divisible entre 4.
No divisible entre 100.
Divisible entre 400. 
(2000 y 2400 son bisiestos pues aún siendo divisibles entre 100 lo son también entre 400. 
Pero los años 1900, 2100, 2200 y 2300 no lo son porque sólo son divisibles entre 100).*/

int bisiesto(int anio)
{
if((anio % 4 == 0 && anio % 100 != 0) || anio % 400 == 0)
return 1;
else return 0;
}


int main(){
m[0]=31;
m[1]=28;
m[2]=31;
m[3]=30;
m[4]=31;
m[5]=30;
m[6]=31;
m[7]=31;
m[8]=30;
m[9]=31;
m[10]=30;
m[11]=31;

int dd,dia=23;
int mm,mes=2;
int aa,anio=2022;
int j,i,dc,r=548;

  while(r!=EOF){
  printf("Introduce el anio de la cita\n");
  scanf("%d\n",&anio);
  printf("Introduce el mes de la cita \n");
  scanf("%d\n",&mes);
  printf("Introduce el dia de la cita \n");
  scanf("%d\n",&dia);
  
  
  /*Calcular el la fecha de la cita */
  m[1]=m[1]+bisiesto(anio); /*le asignamos un día mas a febrero si es el caso */
  dd=m[mes-1]-dia; /*los dias que le restan al mes de la fecha que se saco la cita*/
  dc=dc-dd; /*quitamos los dias que restan del mes a los 548 */
  j=mes++; /*el mes siguiente*/

  while(dc>27) /* el minimo de dias de un mes */
     {
       i=(j%12);
       if(i==0) anio++;
       dc=dc-m[i-1];
       mes++;
       j++;
      } /*end while*/

  mm = mes % 12;
  printf("El anio de tu cita es: %d\n",anio);
  printf("El mes de tu cita es: %d\n",mm);
  printf("El dia de tu cita es: %d\n",dc);
  
  printf("Otrc cita? (Ctrl+D = NO)");
  scanf("%c",r);
  } /*Fin while otra cita*/
    
  exit(0);
  }
