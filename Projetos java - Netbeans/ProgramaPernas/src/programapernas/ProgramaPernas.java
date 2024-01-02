/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package programapernas;

import java.util.Scanner;

/**
 *
 * @author rafae
 */
public class ProgramaPernas {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        //Criando o "objeto" teclado para entrada de dados pelo usuario
        Scanner teclado = new Scanner(System.in);
        
        //Definindo o valor da variavel "perna"
        System.out.print("Quantas pernas? ");
        int perna = teclado.nextInt();
        
        //Declarando a varivel tipo
        String tipo;
        
        //Utilizando a estrutura switch para definir o tipo
        System.out.print("Isso é um(a) ");
        switch (perna) {
            case 1: 
                tipo = "Saci";
                break;
            case 2:
                tipo = "Bipede";
                break;
            case 3:
                tipo = "tripe";
                break;
            case 4:
                tipo = "Quadrupede";
                break;
            case 6, 8:
                tipo = "Aranha";
                break;
            default:
                tipo = "ET";
                break; //esse ultimo break é opcional
        }
        System.out.println(tipo);
    }
    
}
