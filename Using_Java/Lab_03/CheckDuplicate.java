import java.util.Scanner;

public class CheckDuplicate {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] a = new int[5];
        for (int i = 0; i < 5; i++) {
            a[i] = sc.nextInt();
        }
        for (int i = 0; i < a.length-1; i++) {
            for (int j = i+1; j < a.length; j++) {
                if (a[i]==a[j]) {
                    System.out.println("Duplicate numbers are at "+i+" and "+j);
                    System.exit(0);
                }
            }
        }
        System.out.println("There is no duplicate.");
        sc.close();        
    }
}
