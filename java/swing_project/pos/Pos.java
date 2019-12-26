import java.awt.BorderLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JFrame;
import javax.swing.JPanel;

class Pos extends JFrame implements ActionListener{
	
	JPanel pnlMain;
	PnlBeforeLogIn pnlBeforeLogIn;
	
	public Pos(){
		this.setSize(1280, 800);
		this.setResizable(false);
		this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		pnlMain = new JPanel();
		pnlMain.setLayout(new BorderLayout());
		////////////////////////////
		
		pnlBeforeLogIn = new PnlBeforeLogIn();
		pnlBeforeLogIn.getBtnLogIn().addActionListener(this);
		pnlMain.add(pnlBeforeLogIn);
		
		////////////////////////////
		this.add(pnlMain);
		this.setVisible(true);
	}
	
	@Override
	public void actionPerformed(ActionEvent e){
		if(e.getSource() == pnlBeforeLogIn.getBtnLogIn()){
			System.out.println("test");
		}
	}
}
