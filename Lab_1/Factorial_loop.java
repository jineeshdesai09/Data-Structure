import java.util.*;
public class Factorial_loop{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number ");
        int n = sc.nextInt();
        int fac=1;
        for(int i=1;i<=n;i++){
            fac=fac*i;
        }
        System.out.println("Factorial is "+fac);
    }
}
