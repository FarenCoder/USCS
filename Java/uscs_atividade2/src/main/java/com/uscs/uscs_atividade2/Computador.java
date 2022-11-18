package com.uscs.uscs_atividade2;

/**
 *
 * @author Rodolfo_Moreno
 */
public class Computador {
    private final String NumeroDeSerieGabinete;
    private final String NumeroDeSerieMonitor;
    private final String NumeroDeSerieMouse;
    private final String NumeroDeSerieTeclado;
    private String NumeroDeSerieComputador;
    
    
    public Computador(String numeroDeSerieGabinete,String numeroDeSerieMonitor,String numeroDeSerieMouse,String numeroDeSerieTeclado){
    NumeroDeSerieGabinete=numeroDeSerieGabinete;
    NumeroDeSerieMonitor=numeroDeSerieMonitor;
    NumeroDeSerieMouse=numeroDeSerieMouse;
    NumeroDeSerieTeclado=numeroDeSerieTeclado;
    }
    public void imprimeComputador(){
    System.out.println("Numero de serie Gabinete:"+this.NumeroDeSerieGabinete);
    System.out.println("Numero de serie Monitor:"+this.NumeroDeSerieMonitor);
    System.out.println("Numero de serie Mouse:"+this.NumeroDeSerieMouse);
    System.out.println("Numero de serie Teclado:"+this.NumeroDeSerieTeclado);
    System.out.println("Numero de serie computador:"+getNumeroDeSerieComputador());
    }

    /**
     * @return the NumeroDeSerieComputadpor
     */
    public String getNumeroDeSerieComputador() {
        return NumeroDeSerieComputador;
    }

    /**
     * @param NumeroDeSerieComputadpor the NumeroDeSerieComputadpor to set
     */
    public void setNumeroDeSerieComputador(String NumeroDeSerieComputadpor) {
        this.NumeroDeSerieComputador = NumeroDeSerieComputadpor;
    }
    }

