/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package operadoresaritmeticos;

/**
 *
 * @author rafae
 */
public class OperadoresAritmeticos {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        /*int n1 = 3;
        int n2 = 5;
        float m = (n1+n2)/2;
        System.out.println("A media é igual a " + m);*/
        
        /*int numero = 5;
        int valor = 5 + numero++; //++ depois do numero, incrementa o numero mas não entra na conta do valor
        System.out.println(valor);
        System.out.println(numero);
        
        int numero2 = 5;
        int valor2 = 5 + ++numero2; //++ antes do numero, o incremento ocorre antes de somar para obter o valor
        System.out.println(valor2);
        System.out.println(numero2);
        */
        
        /*int x = 4;
        x *= 2; // x = x * 2
        System.out.println(x);*/
        
        /*float v = 8.9f;
        int ar = (int) Math.floor(v); //floor - arredonda para baixo; ceil - arredonda para cima; round arredonda aritmeticamente
        System.out.println(ar);*/
        
        double ale = Math.random(); //aleatorio entre 0 e 1
        int n = (int)(15 + ale * (50-15)); //numero aleatorio de 15 ate 50
        System.out.println(n);
    }
    
}
