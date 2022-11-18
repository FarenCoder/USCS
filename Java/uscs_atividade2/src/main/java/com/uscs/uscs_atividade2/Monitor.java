package com.uscs.uscs_atividade2;

/**
 *
 * @author Rodolfo_Moreno
 */
public class Monitor {
    private static String numeroDeSerie;
    private String teclado;
    private String fabricante;
    private String cor;

    /**
     * @return the numeroDeSerie
     */
    public String getNumeroDeSerie() {
        return numeroDeSerie;
    }

    /**
     * @param numeroDeSerie the numeroDeSerie to set
     */
    public void setNumeroDeSerie(String numeroDeSerie) {
        Monitor.numeroDeSerie = numeroDeSerie;
    }

    /**
     * @return the teclado
     */
    public String getTeclado() {
        return teclado;
    }

    /**
     * @param teclado the teclado to set
     */
    public void setTeclado(String teclado) {
        this.teclado = teclado;
    }

    /**
     * @return the fabricante
     */
    public String getFabricante() {
        return fabricante;
    }

    /**
     * @param fabricante the fabricante to set
     */
    public void setFabricante(String fabricante) {
        this.fabricante = fabricante;
    }

    /**
     * @return the cor
     */
    public String getCor() {
        return cor;
    }

    /**
     * @param cor the cor to set
     */
    public void setCor(String cor) {
        this.cor = cor;
    }
        public void imprimeMonitor(){
        System.out.println("Numero de serie Monitor:"+getNumeroDeSerie());
        System.out.println("Fabricante:"+getFabricante());
        System.out.println("Cor:"+getCor());
    }
}
