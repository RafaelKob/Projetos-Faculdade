/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package comparacaostring;

/**
 *
 * @author rafae
 */
public class ComparacaoString {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        String nome1 = "Gustavo";
        String nome2 = "Gustavo";
        String nome3 = new String ("Gustavo"); // nao tem a mesma estrutura das outras variaveis, porem com conteudo igual - dando diferente ao se utilizar o operador ternario com igualdade
        String res;
        res = (nome1 == nome3) ? "igual":"diferente"; // operador ternário
        System.out.println(res);
        
        String res2;
        res2 = (nome1.equals(nome3)) ? "igual":"diferente"; //a utilização do .equals verifica apenas o conteudo dos objetos do tipo strings
        System.out.println(res2);
           
    }
    
}
