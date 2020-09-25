/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package classes;

/**
 *
 * @author causticroot
 */
public class Professor extends Pessoa
{
    public Double salario;
    public String disciplina;
    
    //Criando um construtor com parâmetros
    public Professor(Double salario, String disciplina, String nome, String cpf, String dataNascimento)
    {
        super(nome, cpf, dataNascimento);
        this.salario = salario;
        this.disciplina = disciplina;
        
    }

    //Criand um construtor default
    public Professor() {
    }
}
