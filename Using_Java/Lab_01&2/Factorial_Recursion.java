import java.util.*;
public class Factorial_Recursion {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number ");
        int n = sc.nextInt();
        int fac=1;
        if(n>0){
            fac=n*fac(n=n-1);
        }
        System.out.println("Factorial is "+fac);
    }
}