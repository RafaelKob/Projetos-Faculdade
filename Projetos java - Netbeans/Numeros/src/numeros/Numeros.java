/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package numeros;

import java.util.Scanner;

/**
 *
 * @author rafae
 */
public class Numeros {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        int n, soma=0;
        String resp;
        Scanner teclado = new Scanner(System.in);
        do {
            System.out.print("Digite um numero para somar: ");
            n = teclado.nextInt();
            soma += n; //s = s + n
            System.out.println("Quer adicionar mais numeros? [S, N]");
            resp = teclado.next();
        } while (resp.equals("s"));
        
        System.out.println("A soma de todos os valores é: " + soma);
    }
    
}
