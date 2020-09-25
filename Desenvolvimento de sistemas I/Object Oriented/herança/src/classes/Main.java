/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package classes;

import java.util.Calendar;

/**
 *
 * @author causticroot
 */
public class Main 
{
    public static void main(String[] args)
    {
        //Instanciando um objeto, utilizando um constutor com argumentos
        Aluno aluno1 = new Aluno("Matheus", "6666", "15/03/19", "40020");
        
        //Instanciando um objeto, utilizando um constutor com argumentos
        Professor p1 = new Professor(700.00, "História", "Marcos", "8888", "15/12/1965");
        
        //Instanciando um objeto com o construtor default
        Aluno aluno2 = new Aluno();
        Professor p2 = new Professor();
        //Logo, os atributos precisam ser receber o valor
        aluno2.nome = "Pedro";
        aluno2.cpf = "2222";
        aluno2.matricula = "40010";
        aluno2.dataNascimento = "13/11/1999";
        
    }
}
