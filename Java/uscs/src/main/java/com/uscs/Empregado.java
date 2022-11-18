package com.uscs;
/**
   *
 * @author Rodolfo_Moreno
 */
public class Empregado {
    private String codigoEmpregado;
    private String nome;
    private String cargo;
    private String salario;
    private static int contador;

    /**
     * @return the codigoEmpregado
     */
    public String getCodigoEmpregado() {
        return codigoEmpregado;
    }

    /**
     * @param codigoEmpregado the codigoEmpregado to set
     */
    public void setCodigoEmpregado(String codigoEmpregado) {
        contador++;
        this.codigoEmpregado = codigoEmpregado;
    }

    /**
     * @return the nome
     */
    public String getNome() {
        return nome;
    }

    /**
     * @param nome the nome to set
     */
    public void setNome(String nome) {
        this.nome = nome;
    }

    /**
     * @return the cargo
     */
    public String getCargo() {
        return cargo;
    }

    /**
     * @param cargo the cargo to set
     */
    public void setCargo(String cargo) {
        this.cargo = cargo;
    }

    /**
     * @return the salario
     */
    public String getSalario() {
        return salario;
    }

    /**
     * @param salario the salario to set
     */
    public void setSalario(String salario) {
        this.salario = salario;
    }
        /**
     * @return the contador
     */
    public int getContador() {
        return contador;
    }

    /**
     * @param contador the contador to set
     */
    public void setContador(int contador) {
        Empregado.contador = contador;
    }
    public void totalEmpregados(){
        setContador(getContador()+1);
        }
    public void imprimeEmpregado(){
        System.out.println("INICIO DO PROGRAMA");
        System.out.println("Codigo do Colaborador:"+getCodigoEmpregado());
        System.out.println("Nome do Colaborador:"+getNome());
        System.out.println("Cargo do Colaborado:"+getCargo());
        System.out.println("Salario colaborador:"+getSalario());
        System.out.println("Total empregados:"+getContador());
    }
}

