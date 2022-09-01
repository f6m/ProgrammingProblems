#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct estu{
char cal[3];
char nombre[22];
};

typedef struct estu estudiante;

estudiante b[12];

int main(){
char r='x';
char c[3];
char s[22];
int i;

/* Llenado de calificaciones */
for(i=0;i<12;i++){
   strcpy(b[i].cal,"A");
   strcpy(b[i].nombre,"Carlos");
}

while(r!='f'){
  printf("Sistema de calificación americano para 12 estudiantes\n");
  printf("a) Lista de estudiantes\n");
  printf("b) Calificación de un estudiante \n");
  printf("c) Modificación de la calificación \n");
  printf("d) Modificación de nombre \n");
  printf("Selecciona tu opción (f para salir) \n");
  scanf(" %c",&r);
  switch(r){
	case 'a':
		for(i=0;i<12;i++)
		printf("Estudiante %i Nombre %s Calificacion %s\n",i,b[i].nombre,b[i].cal);
		break;
	case 'b':
		printf("Introduce el numero del estudiante\n");
		scanf("%d",&i);
		printf("Estudiante %i Nombre %s Calificacion %s\n",i,b[i-1].nombre,b[i-1].cal);
		break;
	case 'c':
		printf("Introduce el numero del estudiante\n");
		scanf("%d",&i);
		printf("Introduce la nueva calificacion del estudiante\n");
		scanf(" %2s[A-D|a-d|+-]",c);
                //fgets(c);
		strcpy(b[i-1].cal,c);
		printf("Calificación actualizada \n");
		break;
	case 'd':
		printf("Introduce el numero del estudiante\n");
		scanf("%i",&i);
		printf("Introduce el nuevo nombre del estudiante\n");
		scanf(" %[^\n]",s); /* no lleva & y usamos [^\n] para la lectura hasta la nueva linea */
                //fgets(s);	
		strcpy(b[i-1].nombre,s);
		printf("Nombre actualizado\n");
		break;
	} /* Fin switch */
  } /*Fin while*/
exit(0);
} /* Fin main */
