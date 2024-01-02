/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package testetipos;

/**
 *
 * @author rafae
 */
public class TesteTipos {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        //Trasformação de inteiro em string
        /*int idade = 30;
        String valor = Integer.toString (idade);
        System.out.println(valor);
        */
        
        //Transformação de string em inteiro
        String valor = "30";
        int idade = Integer.parseInt (valor);
        System.out.println(idade);
        
        //Transformação de string em float
        String valor2 = "30.5";
        float idade2 = Float.parseFloat (valor2);
        System.out.println(idade2);
    }
    
}
