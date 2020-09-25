/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package classes;

import java.util.Date;

/**
 *
 * @author causticroot
 */
//Extends = herança
public class Aluno extends Pessoa
{
    public String matricula;
    //Trazendo o construtor da classe
    public Aluno(String nome, String cpf, String dataNascimento, String mattricula) {
        super(nome, cpf, dataNascimento);
    }
    //Definindo um construtor default
    public Aluno()
    {
        
    }

}
