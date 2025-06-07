import java.util.Scanner;

public class Database {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] arr = new int[10];
        System.out.println("Enter array.");
        for (int i = 0; i < 10; i++) {
            System.out.print("a["+i+"] : ");
            arr[i] = sc.nextInt();
        }
        System.out.println("Sum : "+sum(arr));
        System.out.println("Min : "+min(arr));
        System.out.println("Max : "+max(arr));
        System.out.println("Avg : "+avg(arr));
        sc.close();
    }

    static int sum(int[] arr) {
        int sum=0;
        for (int i = 0; i < arr.length; i++) {
            sum+=arr[i];
        }
        return sum;
    }
    static int min(int[] arr) {
        int min=Integer.MAX_VALUE;
        for (int i = 0; i < arr.length; i++) {
            min = Math.min(arr[i],min);
        }
        return min;
    }
    static int max(int[] arr) {
        int max=Integer.MIN_VALUE;
        for (int i = 0; i < arr.length; i++) {
            max = Math.max(arr[i],max);
        }
        return max;
    }
    static int avg(int[] arr) {
        int sum=0;
        for (int i = 0; i < arr.length; i++) {
            sum+=arr[i];
        }
        return sum/arr.length;
    }
}
