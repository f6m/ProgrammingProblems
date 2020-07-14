/* cuenta vocales usando apuntadores */
#include <stdio.h>
#define numVocales 5
#define tamFrase 100


/* Funciones al inicio */
void cuentaVocales(char *Frase, int *Vocales)
{
	///Inicializa vocales a 0
	int i,*tmp=Vocales;

	for ( i=0; i< numVocales; i++)
	*(Vocales+i) = 0;
	
	for( i=0; i != '\n'; i++)
	{
		switch (*(Frase+i))
		{
			case 'a': *(Vocales)+=1; break;
			case 'e': *(Vocales+1)+=1; break;
			case 'i': *(Vocales+2)+=1; break;
			case 'o': *(Vocales+3)+=1; break;
			case 'u': *(Vocales+4)+=1; break;
		}
		Vocales = tmp;

	}
}


void muestraVocales ( int *charVocales)
{
	printf(" a: %d\n", *(charVocales));
	printf(" e: %d\n", *(charVocales+1));
	printf(" i: %d\n", *(charVocales+2));
	printf(" o: %d\n", *(charVocales+3));
	printf(" u: %d\n", *(charVocales+4));
	
}


int main()
{
	char frase[tamFrase];
	int vocales[numVocales];
	
	printf("Escriba una frase:\n" );
	fgets(frase,100,stdin);

cuentaVocales(frase, vocales);
muestraVocales(vocales);

return 0;
}
