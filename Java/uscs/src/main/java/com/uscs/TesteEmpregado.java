package com.uscs;

/**
 *
 * @author Rodolfo_Moreno
 */
public class TesteEmpregado {

    public static void main(String[] args) {
        Empregado e1 = new Empregado ();
        e1.setCodigoEmpregado("1232");
        e1.setNome("Paulo Silva");
        e1.setCargo("Gerente Financeiro");
        e1.setSalario("R$15.400,00");
        e1.imprimeEmpregado();
        Empregado e2 = new Empregado ();
        e2.setCodigoEmpregado("4567");
        e2.setNome("Ana Paula");
        e2.setCargo("Analista de Sistemas Senior");
        e2.setSalario("R$10.700,00");
        e2.imprimeEmpregado();
        Empregado e3 = new Empregado ();
        e3.setCodigoEmpregado("4567");
        e3.setNome("Ana Paula");
        e3.setCargo("Analista de Sistemas Senior");
        e3.setSalario("R$10.700,00");
        e3.imprimeEmpregado();
   }
}
