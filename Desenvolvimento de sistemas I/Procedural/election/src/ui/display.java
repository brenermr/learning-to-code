/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ui;

import javax.swing.JOptionPane;

/**
 *
 * @author causticroot
 */
public class display extends javax.swing.JFrame {

    /**
     * Creates new form display
     */
    public display() {
        initComponents();
    }

    /**
     * This method is called from within the constructor to initialize the form.
     * WARNING: Do NOT modify this code. The content of this method is always
     * regenerated by the Form Editor.
     */
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jTextField1 = new javax.swing.JTextField();
        jLabel1 = new javax.swing.JLabel();
        jButtonMotherfucker2 = new javax.swing.JButton();
        jButtonMotherfucker1 = new javax.swing.JButton();
        jButtonMotherfucker3 = new javax.swing.JButton();
        jButtonCounting = new javax.swing.JButton();
        jTextFieldOutput = new javax.swing.JTextField();
        jSeparator1 = new javax.swing.JSeparator();
        jLabel2 = new javax.swing.JLabel();
        jLabel3 = new javax.swing.JLabel();
        jTextFieldVotes = new javax.swing.JTextField();
        jSeparator2 = new javax.swing.JSeparator();
        jLabel4 = new javax.swing.JLabel();
        jScrollPane1 = new javax.swing.JScrollPane();
        jTextAreaRanking = new javax.swing.JTextArea();

        jTextField1.setText("jTextField1");

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);
        setResizable(false);

        jLabel1.setText("CANDIDATOS:");

        jButtonMotherfucker2.setText("Isac Nilson");
        jButtonMotherfucker2.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButtonMotherfucker2ActionPerformed(evt);
            }
        });

        jButtonMotherfucker1.setText("Mário Cleiton");
        jButtonMotherfucker1.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButtonMotherfucker1ActionPerformed(evt);
            }
        });

        jButtonMotherfucker3.setText("Acm Feto");
        jButtonMotherfucker3.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButtonMotherfucker3ActionPerformed(evt);
            }
        });

        jButtonCounting.setText("CONTAR");
        jButtonCounting.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButtonCountingActionPerformed(evt);
            }
        });

        jTextFieldOutput.setEditable(false);
        jTextFieldOutput.setFocusable(false);

        jLabel2.setText("Vencedor:");

        jLabel3.setText("Votos:");

        jTextFieldVotes.setEditable(false);

        jLabel4.setText("RESULTADOS");

        jTextAreaRanking.setColumns(20);
        jTextAreaRanking.setRows(5);
        jScrollPane1.setViewportView(jTextAreaRanking);

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(jSeparator1, javax.swing.GroupLayout.Alignment.TRAILING)
            .addGroup(layout.createSequentialGroup()
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(jSeparator2)
                    .addGroup(layout.createSequentialGroup()
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addGroup(layout.createSequentialGroup()
                                .addGap(23, 23, 23)
                                .addComponent(jButtonMotherfucker1)
                                .addGap(18, 18, 18)
                                .addComponent(jButtonMotherfucker2, javax.swing.GroupLayout.PREFERRED_SIZE, 102, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addGap(18, 18, 18)
                                .addComponent(jButtonMotherfucker3, javax.swing.GroupLayout.PREFERRED_SIZE, 102, javax.swing.GroupLayout.PREFERRED_SIZE))
                            .addGroup(layout.createSequentialGroup()
                                .addGap(154, 154, 154)
                                .addComponent(jLabel1))
                            .addGroup(layout.createSequentialGroup()
                                .addGap(155, 155, 155)
                                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                                    .addComponent(jButtonCounting)
                                    .addComponent(jLabel4)))
                            .addGroup(layout.createSequentialGroup()
                                .addGap(20, 20, 20)
                                .addComponent(jLabel2)
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                .addComponent(jTextFieldOutput, javax.swing.GroupLayout.PREFERRED_SIZE, 130, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addGap(33, 33, 33)
                                .addComponent(jLabel3)
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                .addComponent(jTextFieldVotes, javax.swing.GroupLayout.PREFERRED_SIZE, 93, javax.swing.GroupLayout.PREFERRED_SIZE)))
                        .addGap(0, 0, Short.MAX_VALUE))
                    .addGroup(layout.createSequentialGroup()
                        .addContainerGap()
                        .addComponent(jScrollPane1)))
                .addContainerGap())
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addGap(11, 11, 11)
                .addComponent(jLabel1)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(jSeparator1, javax.swing.GroupLayout.PREFERRED_SIZE, 10, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(3, 3, 3)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jButtonMotherfucker1, javax.swing.GroupLayout.PREFERRED_SIZE, 56, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(jButtonMotherfucker2, javax.swing.GroupLayout.PREFERRED_SIZE, 57, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(jButtonMotherfucker3, javax.swing.GroupLayout.PREFERRED_SIZE, 57, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(18, 18, 18)
                .addComponent(jSeparator2, javax.swing.GroupLayout.PREFERRED_SIZE, 10, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(jLabel4)
                .addGap(16, 16, 16)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabel2)
                    .addComponent(jTextFieldOutput, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(jLabel3)
                    .addComponent(jTextFieldVotes, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(37, 37, 37)
                .addComponent(jButtonCounting)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(jScrollPane1, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addContainerGap(67, Short.MAX_VALUE))
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    int[] votes = new int[3]; //Array  com 3 índices, cada índice é equivalente a um candidato
    String[] names = {"Mário Cleiton", "Isac Nilson", "Acm Feto"};
    
    
    private void jButtonMotherfucker1ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButtonMotherfucker1ActionPerformed
        votes[0]++;
    }//GEN-LAST:event_jButtonMotherfucker1ActionPerformed

    private void jButtonMotherfucker2ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButtonMotherfucker2ActionPerformed
        votes[1]++;
    }//GEN-LAST:event_jButtonMotherfucker2ActionPerformed

    private void jButtonMotherfucker3ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButtonMotherfucker3ActionPerformed
        votes[2]++;
    }//GEN-LAST:event_jButtonMotherfucker3ActionPerformed

    private void jButtonCountingActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButtonCountingActionPerformed
        String outputFormat;
        String draw_names = "";
        
        int max_votes = 0;
        int winner = 0;
        int draw_votes = 0; // 0- sem empate, 1- empate sem votos, 2- empate com votos iguais ,3-empate entre dois
        for(int i=0; i < names.length; i++)
        {
            if(votes[i] > max_votes)
            {
                max_votes = votes[i];
                winner = i;
                
            } 
        }
        
        if(votes[0] == votes[1] && votes[0] == votes[2])
        {
            if(votes[0] == 0 && votes[1] == 0 && votes[2] == 0)
            {
                draw_votes = 1;
            }else
            {
                draw_votes = 2;
            }
        }else if(votes[0] == votes[1] || votes[0] == votes[2] || votes[1] == votes[2])
        {
            if(votes[0] == votes[1])
                {
                    draw_votes = 3;
                    if(votes[0] != 0 || votes[1] != 0)
                    {
                        if(votes[0] == max_votes && votes[1] == max_votes)
                        {
                            draw_names = names[0] + " & " + names[1];
                            JOptionPane.showMessageDialog(null, "Os candidatos: " + draw_names + ", empataram com: " + max_votes + ",voto(s).");
                            jTextFieldOutput.setText("DUO DRAW");
                            jTextFieldVotes.setText("");
                        }else
                        {
                            draw_votes = 0;
                        }
                    }else
                    {
                        draw_votes = 0;
                    }
                }else if(votes[0] == votes[2])
                {
                    draw_votes = 3;
                    if(votes[0] != 0 || votes[2] != 0)
                    {
                        if(votes[0] == max_votes && votes[2] == max_votes)
                        {
                            draw_names = names[0] + " & " + names[2];
                            JOptionPane.showMessageDialog(null, "Os candidatos: " + draw_names + ", empataram com: " + max_votes + ",voto(s).");
                            jTextFieldOutput.setText("DUO DRAW");
                            jTextFieldVotes.setText("");
                        }else
                        {
                            draw_votes = 0;
                        }
                    }else
                    {
                        draw_votes = 0;
                    }          
                }else if(votes[1] == votes[2])
                {
                    draw_votes = 3;
                    if(votes[1] != 0 || votes[2] != 0)
                    {
                        if(votes[1] == max_votes && votes[2] == max_votes)
                        {
                            draw_names = names[1] + " & " + names[2];
                            JOptionPane.showMessageDialog(null, "Os candidatos: " + draw_names + ", empataram com: " + max_votes + ",voto(s).");
                            jTextFieldOutput.setText("DUO DRAW");
                            jTextFieldVotes.setText("");
                        }else
                        {
                            draw_votes = 0;
                        }
                        
                    }else
                    {
                        draw_votes = 0;
                    }
                }
        }else
        {
            draw_votes = 0;
        }
        
        if(draw_votes == 0)
        {
            switch (winner) 
            {
                case 0:
                    jTextFieldOutput.setText(names[0]);
                    jTextFieldVotes.setText(String.valueOf(max_votes));
                    break;
                case 1:
                    jTextFieldOutput.setText(names[1]);
                    jTextFieldVotes.setText(String.valueOf(max_votes));
                    break;
                case 2:
                    jTextFieldOutput.setText(names[2]);
                    jTextFieldVotes.setText(String.valueOf(max_votes));
                    break;
            }
        }else if(draw_votes == 1)
        {
            jTextFieldOutput.setText("ALL nULL");
        }else if(draw_votes == 2)
        {
            jTextFieldOutput.setText("ALL DRAW");
        }

        
        outputFormat = String.format(""
                + "- %s, votos: %d\n- %s, votos: %d\n- %s, votos: %d"
                + "", names[0], votes[0], names[1], votes[1], names[2], votes[2]);
        jTextAreaRanking.setText(outputFormat);
        
        max_votes = 0;
        draw_names = "";
        draw_votes = 0;
        for(int i=0; i < names.length; i++)
        {
            votes[i] = 0;
        }
                    
 
    }//GEN-LAST:event_jButtonCountingActionPerformed

    /**
     * @param args the command line arguments
     */
    public static void main(String args[]) {
        /* Set the Nimbus look and feel */
        //<editor-fold defaultstate="collapsed" desc=" Look and feel setting code (optional) ">
        /* If Nimbus (introduced in Java SE 6) is not available, stay with the default look and feel.
         * For details see http://download.oracle.com/javase/tutorial/uiswing/lookandfeel/plaf.html 
         */
        try {
            for (javax.swing.UIManager.LookAndFeelInfo info : javax.swing.UIManager.getInstalledLookAndFeels()) {
                if ("Nimbus".equals(info.getName())) {
                    javax.swing.UIManager.setLookAndFeel(info.getClassName());
                    break;
                }
            }
        } catch (ClassNotFoundException ex) {
            java.util.logging.Logger.getLogger(display.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(display.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(display.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(display.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>

        /* Create and display the form */
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new display().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton jButtonCounting;
    private javax.swing.JButton jButtonMotherfucker1;
    private javax.swing.JButton jButtonMotherfucker2;
    private javax.swing.JButton jButtonMotherfucker3;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JLabel jLabel2;
    private javax.swing.JLabel jLabel3;
    private javax.swing.JLabel jLabel4;
    private javax.swing.JScrollPane jScrollPane1;
    private javax.swing.JSeparator jSeparator1;
    private javax.swing.JSeparator jSeparator2;
    private javax.swing.JTextArea jTextAreaRanking;
    private javax.swing.JTextField jTextField1;
    private javax.swing.JTextField jTextFieldOutput;
    private javax.swing.JTextField jTextFieldVotes;
    // End of variables declaration//GEN-END:variables
}
