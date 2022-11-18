package uscs_atividade3;


public class programa {
	


	public static void main(String[] args) {

		Empregado func1 = new Empregado();
		
        func1.setnome_empregado("Antonio");
        func1.setendereco_empregado("Rua Brasil, 130");
        func1.setvalor_hora(50.00);
        func1.sethoras(230);
        
        func1.CalculaSalario();
        func1.Imprime_Empregado();
        
        Gerente func3 = new Gerente("Carlos","Ana", "Rua Silvio Torres, 36", 50, 230, 2000);
		
        func3.CalculaSalario();
        func3.Imprime_Gerente();
        
        
       
	}
}
