/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package vetor04;

import java.util.Arrays;

/**
 *
 * @author rafae
 */
public class Vetor04 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        int vet[] = {2,1,4,3,6,5};
        for (int v:vet) {
            System.out.print (v + " ");
        }
        System.out.println("");
        int p = Arrays.binarySearch (vet, 5);
        System.out.println("Encontrei valor na posicao " + p);
    }
}
