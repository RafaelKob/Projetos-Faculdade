/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package operadorternario;

/**
 *
 * @author rafae
 */
public class OperadorTernario {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        int n1, n2, r;
        n1 = 14;
        n2 = 8;
        r = (n1>n2)? n1+n2:n1-n2; //operador ternário - depois do "?" -> primeira expressão antes do ":" é se for verdadeiro e depois é se for falso
        System.out.println(r);
    }
    
}
