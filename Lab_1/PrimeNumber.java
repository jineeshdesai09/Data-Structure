import java.util.*;

public class PrimeNumber {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int n = scanner.nextInt();
        int flag=0;
        for(int i=2;i<n;i++){
            if(n%i==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            System.out.println(n + " is a prime number.");
        }
        else{
            System.out.println(n + " is not a prime number.");
        }
    }    
}
