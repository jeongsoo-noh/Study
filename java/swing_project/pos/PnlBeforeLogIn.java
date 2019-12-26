import java.awt.Color;
import java.awt.Font;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.BufferedReader;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;

import javax.swing.BorderFactory;
import javax.swing.ImageIcon;
import javax.swing.JButton;
import javax.swing.JCheckBox;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JTextField;

public class PnlBeforeLogIn extends JPanel implements ActionListener{
	
	private JTextField tfID, tfPW;
	private JCheckBox cbSaveID;
	private JButton btnLogIn;
	
	public PnlBeforeLogIn(){
		
		this.setLayout(null);
		////////////////////////////
		
		// Font
		
		Font font = new Font("Calibri", Font.BOLD, 18);
		
		// ID Label
		
		JLabel lblID = new JLabel("ID");
		lblID.setBounds(850, 300, 150, 30);
		lblID.setFont(font);
		this.add(lblID);
		
		// ID TextField
		
		tfID = new JTextField(10);
		tfID.setBounds(900, 300, 150, 30);
		tfID.setFont(font);
		this.add(tfID);
		
		// PW Label
		
		JLabel lblPW = new JLabel("PW");
		lblPW.setBounds(850, 350, 150, 30);
		lblPW.setFont(font);
		this.add(lblPW);
		
		// PW TextField
		
		tfPW = new JTextField(10);
		tfPW.setBounds(900, 350, 150, 30);
		tfPW.setFont(font);
		this.add(tfPW);
		
		// CheckBox Label
		
		JLabel lblSaveID = new JLabel("Save ID");
		lblSaveID.setFont(font);
		lblSaveID.setBounds(980, 355, 100, 100);
		this.add(lblSaveID);
		
		// CheckBox
		
		cbSaveID = new JCheckBox();
		cbSaveID.setBounds(950, 392, 30, 30);
		this.add(cbSaveID);
		
		// Log In
		
		btnLogIn = new JButton("Log In");
		btnLogIn.setFont(font);
		btnLogIn.addActionListener(this);
		btnLogIn.setForeground(Color.WHITE);
		btnLogIn.setBounds(925, 430, 100, 50);
		btnLogIn.setBackground(new Color(245, 179, 60));
		this.add(btnLogIn);
		
		// Login White Frame
		
		JButton btnFrame = new JButton("");
		btnFrame.setBounds(780, 230, 360, 300);
		btnFrame.setBorder(BorderFactory.createLineBorder(Color.WHITE, 5));
		btnFrame.setBackground(new Color(254, 210, 0));
		this.add(btnFrame);
		
		// Background
		
		JLabel lblBg = new JLabel("");
		lblBg.setBounds(0, 0, 1280, 800);
		lblBg.setIcon(new ImageIcon("Bg.png"));
		this.add(lblBg);
		
		// Set ID if checked before
		
		File file = new File("ID.txt");

		if(file.exists()){
			try {
				FileReader fr = new FileReader(file);
				BufferedReader br = new BufferedReader(fr);
				try {
					tfID.setText(br.readLine());
				} catch (IOException e) {
					e.printStackTrace();
				}

			} catch (FileNotFoundException e) {
				e.printStackTrace();
			}
		}
		////////////////////////////
	}

	public JButton getBtnLogIn(){
		return btnLogIn;
	}
	
	@Override
	public void actionPerformed(ActionEvent e) {
		
		if(e.getSource() == btnLogIn)
		{
			try {
				String str = tfID.getText();
				if(!str.equals("") && cbSaveID.isSelected()){
					FileWriter fw = new FileWriter("ID.txt");
					fw.write(tfID.getText());
					fw.close();
				}
			} catch (IOException e1) {
				e1.printStackTrace();
			}		
		}
	}
}
