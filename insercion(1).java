import java.util.Scanner;  // importamos la classe Scanner 
import javax.swing.JOptionPane; //importamos la clase swing

public class insercion{
public static void main(String[] args){
// Se crea un arreglo por lo cual se declara un Scanner
Scanner entrada;
entrada = new Scanner(System.in);
int array[],nElementos,pos,aux,ban=1;
//nElementos = Integer.parseInt(JOptionPane.showInputDialog("Digite el numero de elementos del arreglo:"));
nElementos = 10;
array = new int[nElementos];
System.out.println("Digite el arreglo :");
for(int i = 0; i < nElementos; i++){
System.out.println("Digite L["+(i)+"]:");
array[i]=entrada.nextInt();
}
//ordenamiento por insercion
for(int i = 1; i < nElementos; i++){
aux = array[i]; //Partimos el arreglo en dos sublistas, guardamos el valor act.
pos = i; //guardamos el indice act.
//while: buscamos la posicion adecuada 
while(aux < array[pos-1]){ //El array delantero es menor al anterior
System.out.println(pos + "\n");
array[pos] = array[pos-1]; //intercambiaremos
pos--;
if(pos==0) break; //Si se alcanzo el indice menor salir del while no comparar mas
}
array[pos] = aux;
}
System.out.println("Orden Ascendente :");
for(int i = 0; i < nElementos ; i++){
System.out.println(array[i] + "\t");
}
} // main
} // class
