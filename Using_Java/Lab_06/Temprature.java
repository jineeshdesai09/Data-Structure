
import java.util.Scanner;

public class Temprature {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double tem;
        System.out.print("Enter temprature in celsius : ");
        tem = sc.nextDouble();
        System.out.println(tem+"C = "+celToF(tem)+"F"); 
        System.out.print("Enter temprature in fehrenhit : ");
        tem = sc.nextDouble();
        System.out.println(tem+"F = "+feToCel(tem)+"C");
        sc.close(); 
    }
    public static double  feToCel(double  f) {
        return (9/5.0)*(f-32);
    }
    public static double  celToF(double  c) {
        return c*(5/9.0)+32;
    }
}
