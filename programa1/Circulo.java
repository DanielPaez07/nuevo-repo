import java.awt.*;
import javax.swing.JApplet;
import javax.swing.JFrame;

public class Circulo extends JApplet {
  int i=100, j=70,o1,o2,c;
  public void paint (Graphics g) {
    g.drawString (".", 100, 100);//centro
    for (i=0;i<=200;i++)
    {
      for (j=0;j<=200;j++)
      {
        o1=(i-100)*(i-100);
        o2=(j-100)*(j-100);
        c=o1+o2;
        if (c==900)
        {
          g.drawString (".", i, j);
        }
      }
    }
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