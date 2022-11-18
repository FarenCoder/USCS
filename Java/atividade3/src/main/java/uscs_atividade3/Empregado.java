package uscs_atividade3;

public class Empregado {
	   private String nome_empregado; 
	   private String endereco_empregado; 
	   private double valor_hora; 
	   private int horas;
	   private double salario;
	   private double bonus;
	   private String nome_secretaria;
	   
	   public Empregado() {
	       
	   }

	   public Empregado(String nome_empregado, String endereco_empregado,
	           double valor_hora, int horas) {
	       super();
	       this.nome_empregado = nome_empregado;
	       this.endereco_empregado = endereco_empregado;
	       this.valor_hora = valor_hora;
	       this.horas = horas;
	   }

	   public void Imprime_Empregado() { 
	       System.out.println("----- Função Imprime_Empregado ----"); 
	       System.out.println("Nome do Empregado: " + this.nome_empregado ); 
	       System.out.println("Endereço do Empregado: " + this.endereco_empregado ); 
	       System.out.println("Valor da hora do Empregado: " + this.valor_hora); 
	       System.out.println("Horas Trabalhadas: " + this.horas);
	       System.out.printf("O salario do Mês é: %.2f", salario);
	   }
	   
	   public void Imprime_Gerente() { 
	       System.out.println("----- Função Imprime_Gerente ----"); 
	       System.out.println("Nome do Empregado: " + this.nome_empregado );
	       System.out.println("Nome da Secretaria: " + this.nome_secretaria );
	       System.out.println("Endereço do Empregado: " + this.endereco_empregado ); 
	       System.out.println("Valor da hora do Empregado: " + this.valor_hora); 
	       System.out.println("Horas Trabalhadas: " + this.horas);
	       System.out.printf("O salario do Mês é: %.2f", salario);
	   }
	   
	   public void CalculaSalario() {
		   
		   salario = (getvalor_hora() * gethoras()) + getbonus();
		   
	   }
	   
	   public String getnome_empregado() {
	       return nome_empregado;
	   }


	   public void setnome_empregado(String nome_empregado) {
	       this.nome_empregado = nome_empregado;
	   }


	   public String getendereco_empregado() {
	       return endereco_empregado;
	   }


	   public void setendereco_empregado(String endereco_empregado) {
	       this.endereco_empregado = endereco_empregado;
	   }


	   public double getvalor_hora() {
	       return valor_hora;
	   }


	   public void setvalor_hora(double valor_hora) {
	       this.valor_hora = valor_hora;
	   }
       
	   public int gethoras() {
	       return horas;
	   }


	   public void sethoras(int horas) {
	       this.horas = horas;
	   }
	   
	   public double getbonus() {
	       return bonus;
	   }


	   public void setbonus(double bonus) {
	       this.bonus = bonus;
	   }
	   public String getnome_secretaria() {
	       return nome_empregado;
	   }


	   public void setnome_secretaria(String nome_secretaria) {
	       this.nome_secretaria = nome_secretaria;
	   }
	   
	}