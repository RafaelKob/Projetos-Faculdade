/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package exerciciorepita;

import javax.swing.JOptionPane;
/**
 *
 * @author rafae
 */
public class ExercicioRepita {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        int n, s=0, iimpar=0, ipar=0, media=0, imaior100=0;
        do {
            //Informando valores de entrada pelo painel criado
            n = Integer.parseInt(JOptionPane.showInputDialog (null, "<html>Informe um numero: <br><em>(valor 0 interrompe)</em></html>"));
            
            //Para o 0 nao ser contabilizado nas contas e sair do laço
            if (n == 0) {
                break;
            }
            
            //realiza a operação de soma dos valores informados para mostrar no final
            s+=n;
            
            //Realiza a verificação e contagem de numeros pares e impares
            if (n%2 == 0) {
                ipar++;
            } else {
                iimpar++;
            }
            
            //Realiza a contagem de numeros maiores que 100
            if (n>100) {
                imaior100++;
            }
        } while (n != 0);
        
        //Calculo da media dos valores informados
        media = s/(ipar+iimpar);
        
        //Mostrando na tela do painel criado as informaçoes requeridas de  total de valores, numeros pares e impares, numeros maiores que 100, soma e media
        JOptionPane.showMessageDialog (null, "<html> Resultado Final <hr>" + "<br> Total de valores: " + (ipar+iimpar)
                + "<br> Total de numeros pares: "+ ipar
                + "<br> Total de numeros impares: " + iimpar
                + "<br> Total de numeros maiores que 100: " + imaior100
                + "<br> Somatorio dos valores: " + s
                + "<br> Media dos valores: " + media + "</html>");
    }
    
}
