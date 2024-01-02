/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package programaidade;

import java.time.LocalDate;
import java.util.Scanner;

/**
 *
 * @author rafae
 */
public class ProgramaIdade {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        LocalDate localData = LocalDate.now();
        int anoatual = localData.getYear();
        
        Scanner teclado = new Scanner(System.in);
        System.out.print("Digite o ano do seu nascimento: ");
        int anonasc = teclado.nextInt();
        
        int idade = anoatual - anonasc;
        System.out.println("A sua idade é: " + idade);
        
        if (idade>=18) {
            System.out.println("Você é maior de idade!");
        } else {
            System.out.println("Você não é maior de idade");
        }
    }
    
}
