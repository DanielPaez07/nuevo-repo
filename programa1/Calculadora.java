import java.util.Scanner;

public class Calculadora
{
 public static void main (String[] args)
  {
   Scanner entrada=new Scanner (System.in);
   float n1,n2;
   int op;
   System.out.println ("Digite la operacion que desea realizar");
   System.out.println ("Suma=1"+"\n"+"Resta=2"+"\n"+"Multiplicacion=3"+"\n"+"Division=4");
   op=entrada.nextInt();
   if (op>4 || op<1)
     System.out.println("La operacion no es valida");
   else
     System.out.println("Digite el primer numero");
     n1=entrada.nextInt();
     System.out.println("Digite el segundo numero");
     n2=entrada.nextInt();
    operaciones(n1,n2,op);
   
  }
  public static void operaciones(float n1,float n2,int op){
    float div,sum,multi,res;
    switch (op){
   case 1:
   sum=n1+n2;
   System.out.println(n1+" + "+n2+" = "+sum);
   break;
   case 2:
   res=n1-n2;
   System.out.println(n1+" - "+n2+" = "+res);
   break;
   case 3:
   multi=n1*n2;
   System.out.println(n1+" x "+n2+" = "+multi);
   break;
   case 4:
   div=n1/n2;
   System.out.println(n1+" / "+n2+" = "+div);
   break;
     }
  }
}