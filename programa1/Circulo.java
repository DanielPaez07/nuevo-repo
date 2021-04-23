import java.awt.*;
import javax.swing.JApplet;
import javax.swing.JFrame;

public class Circulo extends JApplet {
  int i, j;
  double r,o1,o2,c;
  public void paint (Graphics g) {
    g.drawString (".", 100, 100);//centro
    for (i=0;i<=200;i++)
    {
      for (j=0;j<=200;j++)
      {
        //Formula general de una circunferencia
        o1=Math.pow((i-100),2);
        o2=Math.pow((j-100),2);
        c=o1+o2;
        r= Math.sqrt(c);
        if (r==40)
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