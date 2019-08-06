//package EvidenciaU1;

 

import java.util.Stack; //Para las estructuras, class represents a last-in-first-out (LIFO) stack of objects.
import javax.swing.JOptionPane; // Graphis interface I/O, dialogs

 
// main class
public class parentesis {
    Stack pila= new Stack(); //Pila para guardar los parentesis de apertura
    //
    public static void  main(String[] pps){

        if(pps.length !=1){    

            JOptionPane.showMessageDialog(null,"Validación de paréntesis");

        }

        else{

            parentesis parentesis = new parentesis(pps[0]);

        }

    }

    /*

     * Metodo para verificar que una expresion tiene balanceados sus parentesis

     * @param linea -- cadena que tiene la expresion a examinar

     */

  public parentesis (String linea) {

      for (int i = 0; i < linea.length(); i++) {

          switch (linea.charAt(i)) {

              case '(':

                  pila.push(')');

                  break;

              case '{':

                  pila.push('}');

                  break;

              case '[':

                  pila.push(']');

                  break;

              case ')':

                  verifica(')');

                  break;

              case '}':

                  verifica('}');

                  break;

              case ']':

                  verifica(']');

                  break;

              default:

                  break;

          }

      }

      if (pila.empty())

                  System.out.println("Parentesis balanceados");

      else

                  System.out.println("Parentesis NO balanceados");         

  }

 

    /*

     * Metodo privado que recibe un parentesis de cerrado y verifica que en

     * el tope de la pila se encuentre el de apertura

     * @param c -- parentesis de cerrado

     */

  private void verifica (char c) {

      if (pila.empty()) {

                  System.out.println("Parentesis NO balanceados");

                  System.exit(0);

      } else {

                  Character s = (Character) pila.pop(); 

                  if (c != s) {

                      System.out.println("Parentesis NO balanceados");

                      System.exit(0);

                  }

      }

  }

}
