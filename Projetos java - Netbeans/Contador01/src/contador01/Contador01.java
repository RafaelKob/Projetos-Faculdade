/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package contador01;

/**
 *
 * @author rafae
 */
public class Contador01 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        int cc = 0;
        while (cc < 10) {
            cc++;
            if (cc == 2 || cc == 3 || cc == 4) {
                continue; //não continua o resto do comando e retorna pro enquanto
            } else if (cc == 7) {
                break; //força a saida do while mesmo atendendo a condição;
            }
            System.out.println("Cambalhota " + (cc)) ;
            
        }
    }
    
}
