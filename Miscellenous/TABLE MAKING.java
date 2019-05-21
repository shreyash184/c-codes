import javax.swing.*;
import java.awt.event.*;
public class sample {
	public static void main(String []args) {
		JFrame f = new JFrame("sample");
		final JTextField t1=new JTextField();
		final JTextField t2=new JTextField();
		final JTextField t3=new JTextField();
		final JTextField t4=new JTextField();
		t1.setBounds(300,50,150,20);
		t2.setBounds(300,100,150,20);
		t3.setBounds(300,150,150,20);
		t4.setBounds(300,200,150,20);
		JButton b1=new JButton("Name");
		JButton b2=new JButton("age");
		JButton b3=new JButton("salary");
		JButton b4=new JButton("mobile no.");
		b1.setBounds(50,50,150,20);
		b2.setBounds(50,100,150,20);
		b3.setBounds(50,150,150,20);
		b4.setBounds(50,200,150,20);
		b1.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				t1.setText("Enter your Name");
			}
		});
		b2.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				t2.setText("Enter your age");
			}
		});
		b3.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				t3.setText("Enter your salary");
			}
		});
		b4.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				t4.setText("Enter your Mob No.");
			}
		});
		f.add(b1);
		f.add(b2);
		f.add(b3);
		f.add(b4);
		f.add(t1);
		f.add(t2);
		f.add(t3);
		f.add(t4);
		f.setSize(500,500);
		f.setLayout(null);
		f.setVisible(true);
}
}
		
				

