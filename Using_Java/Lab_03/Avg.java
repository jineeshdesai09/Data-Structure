import java.util.Scanner;

public class Avg {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] a = new int[5];
        int sum=0;
        for (int i = 0; i < 5; i++) {
            a[i] = sc.nextInt();
            sum+=a[i];
        }
        System.out.println("avg : "+sum/(a.length));
        sc.close();        
    }
}
