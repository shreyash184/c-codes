package shreyash.program;

import javax.swing.*;
import java.awt.FlowLayout;
public class flowLayout {	
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
		f.setLayout(new FlowLayout());
		f.setSize(500,500);
		f.setVisible(true);	
	}
}
		
