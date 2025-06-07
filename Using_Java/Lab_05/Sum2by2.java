import java.util.Scanner;

public class Sum2by2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a[][] = new int[2][2];        
        int b[][] = new int[2][2];        
        int c[][] = new int[2][2];
        System.out.println("Enter array a");
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                System.out.print("a["+i+"]["+j+"] : ");
                a[i][j] = sc.nextInt();
            }
        }
        System.out.println("Enter array b");
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                System.out.print("b["+i+"]["+j+"] : ");
                b[i][j] = sc.nextInt();
            }
        }
        System.out.print("c(a+b) : { ");
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                c[i][j] = a[i][j] + b[i][j];
                System.out.print(c[i][j]+",");
            }
        }
        System.out.println("}");
        sc.close();
    }
}
