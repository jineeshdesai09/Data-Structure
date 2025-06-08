
import java.util.Scanner;

public class Swap {
    int a,b;
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Swap s = new Swap();
        System.out.print("Enter a : ");
        s.a = sc.nextInt();
        System.out.print("Enter b : ");
        s.b = sc.nextInt();

        System.out.println("Before : a = "+s.a+", b = "+s.b);

        swapNumber(s);
        System.out.println("After : a = "+s.a+", b = "+s.b);
        
        sc.close();
    }
    public static void swapNumber(Swap s) {
        int temp = s.a;
        s.a = s.b;
        s.b = temp;
    }
}
