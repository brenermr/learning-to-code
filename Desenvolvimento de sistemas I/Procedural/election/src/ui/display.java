/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ui;

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

        jLabel1 = new javax.swing.JLabel();
        jButtonMotherfucker2 = new javax.swing.JButton();
        jButtonMotherfucker1 = new javax.swing.JButton();
        jButtonMotherfucker3 = new javax.swing.JButton();
        jButtonCounting = new javax.swing.JButton();
        jTextFieldOutput = new javax.swing.JTextField();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);
        setResizable(false);

        jLabel1.setText("ELECTION OF MOTHERCFUCKERS");

        jButtonMotherfucker2.setText("MOTHERFUCKER 2");
        jButtonMotherfucker2.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButtonMotherfucker2ActionPerformed(evt);
            }
        });

        jButtonMotherfucker1.setText("MOTHERFUCKER 1");
        jButtonMotherfucker1.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButtonMotherfucker1ActionPerformed(evt);
            }
        });

        jButtonMotherfucker3.setText("MOTHERCUKER 3");
        jButtonMotherfucker3.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButtonMotherfucker3ActionPerformed(evt);
            }
        });

        jButtonCounting.setText("COUNTING");
        jButtonCounting.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButtonCountingActionPerformed(evt);
            }
        });

        jTextFieldOutput.setEditable(false);
        jTextFieldOutput.setFocusable(false);

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(layout.createSequentialGroup()
                        .addGap(74, 74, 74)
                        .addComponent(jButtonCounting))
                    .addGroup(layout.createSequentialGroup()
                        .addGap(23, 23, 23)
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING, false)
                            .addComponent(jButtonMotherfucker1, javax.swing.GroupLayout.Alignment.LEADING, javax.swing.GroupLayout.DEFAULT_SIZE, 195, Short.MAX_VALUE)
                            .addComponent(jButtonMotherfucker2, javax.swing.GroupLayout.Alignment.LEADING, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                            .addComponent(jTextFieldOutput)
                            .addComponent(jButtonMotherfucker3, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                            .addComponent(jLabel1, javax.swing.GroupLayout.Alignment.LEADING))))
                .addContainerGap(26, Short.MAX_VALUE))
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addGap(30, 30, 30)
                .addComponent(jLabel1)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addComponent(jButtonMotherfucker1, javax.swing.GroupLayout.PREFERRED_SIZE, 56, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(18, 18, 18)
                .addComponent(jButtonMotherfucker2, javax.swing.GroupLayout.PREFERRED_SIZE, 57, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(18, 18, 18)
                .addComponent(jButtonMotherfucker3, javax.swing.GroupLayout.PREFERRED_SIZE, 57, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(18, 18, 18)
                .addComponent(jButtonCounting)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(jTextFieldOutput, javax.swing.GroupLayout.PREFERRED_SIZE, 82, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addContainerGap(15, Short.MAX_VALUE))
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    int[] motherfuckers = new int[3]; //Array  com 3 índices, cada índice é equivalente a um candidato
    
    
    private void jButtonMotherfucker1ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButtonMotherfucker1ActionPerformed
        motherfuckers[0]++;
    }//GEN-LAST:event_jButtonMotherfucker1ActionPerformed

    private void jButtonMotherfucker2ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButtonMotherfucker2ActionPerformed
        motherfuckers[1]++;
    }//GEN-LAST:event_jButtonMotherfucker2ActionPerformed

    private void jButtonMotherfucker3ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButtonMotherfucker3ActionPerformed
        motherfuckers[2]++;
    }//GEN-LAST:event_jButtonMotherfucker3ActionPerformed

    private void jButtonCountingActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButtonCountingActionPerformed
        String winner = "";
        
        
        
        if(motherfuckers[0] == motherfuckers[1] && motherfuckers[1] == motherfuckers[2])
        {
            winner = "DRAW";
        }else if(motherfuckers[0] > motherfuckers[1] && motherfuckers[0] > motherfuckers[2])
        {
            winner = "Motherfucker 1";
        }else if(motherfuckers[1] > motherfuckers[0] && motherfuckers[1] > motherfuckers[2])
        {
            winner = "Motherfucler 2";
        }else if(motherfuckers[2] > motherfuckers[0] && motherfuckers[2] > motherfuckers[1])
        {
            winner = "Motherfucker 3";
        }else if(motherfuckers[0] == motherfuckers[1])
        {
            winner = "Motherfucker 1 and 2, DRAW!";
        }else if(motherfuckers[1] == motherfuckers[2])
        {
            winner = "Motherfucker 2 and 3, DRAW";
        }else if(motherfuckers[0] == motherfuckers[2])
        {
            winner = "Motherfuckers 1 and 3, DRAW";
        }
       
       jTextFieldOutput.setText(winner);
       motherfuckers[0] = 0;
       motherfuckers[1] = 0;
       motherfuckers[2] = 0;
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
    private javax.swing.JTextField jTextFieldOutput;
    // End of variables declaration//GEN-END:variables
}
