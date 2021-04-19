import java.util.Scanner;

public class Numeros{

  public static void main (String[] args){
    Scanner entrada=new Scanner (System.in);
    int sup,inf,i,j;
    System.out.println("Digite el valor del limite superior");
    sup =entrada.nextInt();
    System.out.println("Digite el valor del limite inferior");
    inf =entrada.nextInt();
    System.out.println("Numeros pares");
     for (i=inf ; i<=sup; i++){
       if (i%2 ==0){
         System.out.println(i);
       }
     }
     j=inf;
     System.out.println("Numeros impares");
     while (j<=sup){
       if(j%2==1){
         System.out.println(j);
       }
       j++;
     }
  }
}