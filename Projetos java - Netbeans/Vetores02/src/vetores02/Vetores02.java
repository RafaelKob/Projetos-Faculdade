/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package vetores02;

/**
 *
 * @author rafae
 */
public class Vetores02 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        String mes[] = {"jan","fev","mar","abr","mai","jun","jul","ago","set","out","nov","dez"};
        int tot[] = {31,28,31,30,31,30,31,31,30,31,30,31};
        
        for(int i=0; i<mes.length; i++) {
            System.out.println("O mes " + mes[i] + " tem " + tot[i] + " dias");
        }
    }
    
}
