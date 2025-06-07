import java.util.Scanner;

public class SortLarge {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] a = new int[5];
        for (int i = 0; i < 5; i++) {
            a[i] = sc.nextInt();
        }
        int min = 0, max = 0;
        for (int i = 1; i < 5; i++) {
            if (a[min]>a[i])
                min = i;
            else if (a[max]<a[i])
                max = i;
        }
        System.out.println("Min index : "+min);
        System.out.println("Max index : "+max);
        sc.close();        
    }
}
