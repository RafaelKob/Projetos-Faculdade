/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package testefuncao01;

/**
 *
 * @author rafae
 */
public class TesteFuncao01 {

    /**
     * @param args the command line arguments
     */
    
    static void soma1 (int a, int b) {
        int s = a+b;
        System.out.println("A soma é " + s);
    }
    
    static int soma2 (int a, int b) {
        int s = a+b;
        return s;
    }
    
    public static void main(String[] args) {
        // TODO code application logic here
        System.out.println("Começou o programa"); //o metodo main que é executado, os procedimentos e funçoes so funcionam se forem chamadas
        soma1(5,2); //procedimento
        int sm = soma2(5,2);
        System.out.println("A soma vale " + sm); //função
       
    }
    
}
