import javax.swing.UIManager;

class Main{
	public static void main(String args[]){
		try{
			UIManager.setLookAndFeel
			("javax.swing.plaf.nimbus.NimbusLookAndFeel");
		}catch(Exception e){
			System.out.println("ERROR");
		}
		new Pos();
	}
}