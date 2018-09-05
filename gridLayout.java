package shreyash.program;

import javax.swing.*;
import java.awt.GridLayout;
public class gridLayout {	
	public static void main(String []args) {
		JFrame f = new JFrame("FlowLayout");
		JButton b1 =new JButton("button 1");
		JButton b2 =new JButton("button 2");
		JButton b3 =new JButton("button 3");
		JButton b4 =new JButton("button 4");	
		f.add(b1);
		f.add(b2);
		f.add(b3);
		f.add(b4);
		f.setLayout(new GridLayout(2,2)); //GridLayout(int row , int column)
		f.setSize(300,300);
		f.setVisible(true);	
	}
}
		
