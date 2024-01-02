package sistemalinguaeresolucao;

import java.awt.Dimension;
import java.awt.Toolkit;
import java.util.Locale;

public class SistemaLinguaEResolucao {
    
    public static void main(String[] args) {
        Locale lingua = Locale.getDefault ();
        System.out.print("A idioma em que o sistema se encontra é: ");
        System.out.println(lingua.getDisplayLanguage());
        
        Toolkit tk = Toolkit.getDefaultToolkit();
        Dimension resolucao = tk.getScreenSize();
        System.out.println("A resolução do seu computador é: " + resolucao.width + "X" + resolucao.height);       
    }
    
}
