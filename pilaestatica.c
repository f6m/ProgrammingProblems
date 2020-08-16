
 /* Pila estatica - Palindroma - Inversion */
 #include <stdio.h>
 #include <string.h>

 #define N 100

 /*nodo*/
 struct nodo{
 char a;
 int l;
 };

 /* renombre */
 typedef struct nodo Nodo;

/* palabra como estructura con dos campos*/ 

 Nodo pal[N]={0};

 /* tope de la pila */
 int tope;

 /* es vacia */
 int esvacia(Nodo p[])
 {
  if(p==NULL) 
    { 
     tope = 0;
     return tope;
    }
  else return tope;
 }
 
/* funciones */ 
 void ingresa(Nodo p[], char c)
 {
  p[tope].a=c;
  p[tope].l=tope+1;
  p[tope+1].l='\0';
  tope++; 
}

 /* sacar */
 char saca(Nodo p[])
 {

  char w=p[tope-1].a;
  tope--;

  return w;
 }

 /* imprimir */
 void imprime(Nodo p[], int top)
 { 
   while(--top >=0)
   printf(" %c ",p[top].a);
 }
 
 
 /* Principal */ 
 int main(){
  int i=0,j=1;
  char k;
  char cad[N];

  printf("Introduce una cadena (segida de ctrl+D): \n");
 
  while((k=getchar())!= EOF && i++ <= N )
   {
  ingresa(pal,k);
  }
 
  
  if(esvacia(pal)!=0)
  imprime(pal,tope);
  else printf("Pila vacia\n");
   
  i=0;
  while(tope>=0){
   cad[i]=saca(pal);  
   i++;
   }

  printf("\n La cadena invertida es: ");
  printf("%s\n",cad);
  
  i=0;
  for(i=0;pal[i].l == i+1;i++){
  if(cad[i] != pal[i].a)
     j=0;
  }

  if(j==1) printf("La cadena es palindroma\n");
 }

