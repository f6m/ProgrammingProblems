#include <stdio.h>
#include <string.h>
struct estu{
char cal;
char nombre[22];
};

typedef struct estu estudiante;

estudiante b[12];


int main(){
char r='x';
char c;
char s[12];
int i;

/* Llenado de calificaciones */
for(i=0;i<12;i++){
   b[i].cal='A';
   strcpy(b[i].nombre,"Carlos");
}

while(r!=0){
  printf("Sistema de calificación americano para 12 estudiantes\n");
  printf("a) Lista de estudiantes\n");
  printf("b) Calificación de un estudiante \n");
  printf("c) Modificación de la calificación \n");
  printf("d) Modificación de nombre \n");
  printf("Selecciona tu opción (f para salir) \n");
  scanf("%c",&r);
  switch(r){
	case 'a':
		for(i=0;i<12;i++)
		printf("Estudiante %i Nombre %c Calificacion %s\n",i,&b[i].nombre,&b[i].cal);
		break;
	case 'b':
		printf("Introduce el numero del estudiante\n");
		scanf("%d",&i);
		printf("Estudiante %i Nombre %c Calificacion %s\n",i,&b[i].nombre,&b[i].cal);
		break;
	case 'c':
		printf("Introduce el numero del estudiante\n");
		scanf("%d",&i);
		printf("Introduce la nueva calificacion del estudiante\n");
		scanf("%c",&c);
		b[i].cal=c;
		printf("Calificación actualizada \n");
		break;
	case 'd':
		printf("Introduce el numero del estudiante\n");
		scanf("%i",&i);
		printf("Introduce el nuevo nombre del estudiante\n");
		scanf("%s",s); /* no lleva & */
		strcpy(b[i].cal,s);
		printf("Nombre actualizado\n");
		break;
	} /* Fin switch */
  } /*Fin while*/
} /* Fin main */