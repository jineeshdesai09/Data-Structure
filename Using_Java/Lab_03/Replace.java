import java.util.Scanner;

public class Replace {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] a = new int[5];
        for (int i = 0; i < 5; i++) {
            a[i] = sc.nextInt();
        }
        
        int n1, n2;
        System.out.print("Enter number 1 : ");
        n1 = sc.nextInt();
        System.out.print("Enter number 2 : ");
        n2 = sc.nextInt();
        
        int ind1=-1, ind2=-1;
        for (int i = 0; i < a.length; i++) {
            if (n1==a[i]) {
                ind1 = i;
            }
            else if (n2==a[i]) {
                ind2 = i;
            }
        }
        if (ind1==-1 || ind2==-1) {
            System.out.println("No element found.");
            System.exit(0);
        }

        System.out.print("Old : ");
        for (int i = 0; i < 5; i++) {
            System.out.print(a[i]+" ");
        }

        int temp = a[ind1];
        a[ind1] = a[ind2];
        a[ind2] = temp;
        System.out.print("\nNew : ");
        for (int i = 0; i < 5; i++) {
            System.out.print(a[i]+" ");
        }
        sc.close();   
    }
}
