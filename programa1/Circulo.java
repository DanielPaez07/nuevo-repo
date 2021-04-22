import java.awt.*;
import javax.swing.JApplet;
import javax.swing.JFrame;

public class Circulo extends JApplet {

  public void paint (Graphics g) {

    g.drawString (".", 50, 50);
  }

  public static void main (String[] args){
    JFrame frame = new JFrame ("Circulo");
    Circulo circuloApplet = new Circulo();
    circuloApplet.init();
    frame.getContentPane().add(circuloApplet);
    frame.setSize(200,200);
    frame.setVisible(true);
  }
}