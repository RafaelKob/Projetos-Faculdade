/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package tiposprimitivos;

import java.util.Scanner;

/**
 *
 * @author rafae
 */
public class TiposPrimitivos {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        //Como realizar a entrada de dados
        Scanner teclado = new Scanner (System.in); //necessario criar um novo objeto e importar nova biblioteca
        System.out.printf ("Digite o nome do aluno: ");
        String nome = teclado.nextLine();
        System.out.printf ("Digite a nota do aluno: ");
        float nota = teclado.nextFloat();
        
        //String nome = "Rafael";
        //float nota = 8.5f;
        
        //Modos de realizar a saida de dados
        System.out.println("A nota é: " + nota);
        System.out.printf("A nota de %s é: %.2f \n", nome, nota);
        System.out.format("A nota de %s é: %.2f \n", nome, nota);
    }
    
}
