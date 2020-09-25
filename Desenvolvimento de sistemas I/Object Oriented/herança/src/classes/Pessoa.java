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
public class Pessoa 
{
    public String nome;
    public String cpf;
    public String dataNascimento;
    
    public Pessoa(String nome, String cpf, String dataNascimento)
    {
        this.nome = nome;
        this.cpf = cpf;
        this.dataNascimento = dataNascimento;
    }
    
    public Pessoa()
    {
        
    }
}
