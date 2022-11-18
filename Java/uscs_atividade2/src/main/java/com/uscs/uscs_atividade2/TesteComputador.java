package com.uscs.uscs_atividade2;

/**
 *
 * @author Rodolfo_Moreno
 */
public class TesteComputador{

    public static void main(String[] args) {
        Teclado t = new Teclado ();
        t.setNumeroDeSerie("1232");
        t.setFabricante("Logitech");
        t.setCor("Preto");
        t.imprimeTeclado();
        Monitor mon = new Monitor ();
        mon.setNumeroDeSerie("AFB876");
        mon.setFabricante("Samsung");
        mon.setCor("Preto");
        mon.imprimeMonitor();
        Gabinete g = new Gabinete ();
        g.setNumeroDeSerie("4587HHY");
        g.setFabricante("Logitech");
        g.setCor("Preto");
        g.imprimeGabinete();
        Mouse m = new Mouse ();
        m.setNumeroDeSerie("HGY6654");
        m.setFabricante("Microsoft");
        m.setCor("Preto");
        m.imprimeMouse();
        Computador cp = new Computador (g.getNumeroDeSerie(),mon.getNumeroDeSerie(),m.getNumeroDeSerie(),t.getNumeroDeSerie());
        cp.setNumeroDeSerieComputador("76TRDE35");
        cp.imprimeComputador();
        }   
}
