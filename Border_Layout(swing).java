package shreyash.program;
import javax.swing.*;
import java.awt.BorderLayout;

public class SwingApp {
	public static void main(String [] args) {
		JFrame f=new JFrame("Border Layout"); //creating instance of JFrame

		JButton b1=new JButton ("left");	//creating instance of JButton
		JButton b2=new JButton ("right");	//creating instance of JButton
		JButton b3=new JButton ("top");		//creating instance of JButton
		JButton b4=new JButton ("bottom");	//creating instance of JButton
		JButton b5=new JButton ("center");		//creating instance of JButton
		//b.setBounds(130,100,100,40);  //x-axis ,y-axis,width,height
	
		f.add(b1, BorderLayout.WEST); //adding button to the frame
		f.add(b2, BorderLayout.EAST);
		f.add(b3, BorderLayout.NORTH);
		f.add(b4, BorderLayout.SOUTH);
		f.add(b5, BorderLayout.CENTER);
		
		f.setSize(500,500);   //500 width and 500 height
		//f.setLayout(null);	//using no layout  managers
		f.setVisible(true); 	//making the frame visible
}
}
