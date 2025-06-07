import java.util.Scanner;

public class AddSorted {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int arr[] = new int[5];
        for (int i = 0; i < arr.length; i++) {
            System.out.print("a[" + i + "] : ");
            arr[i] = sc.nextInt();
        }
        
        System.out.print("Enter val : ");
        int val = sc.nextInt();
        sc.close();

        int i=0;
        int arr2[] = new int[arr.length + 1];

        while (i<arr.length && arr[i]<val) {
            arr2[i] = arr[i];
            i++;
        }
        arr2[i] = val;
        while (i<arr.length) {
            arr2[i + 1] = arr[i];
            i++;
        }

        System.out.print("Old : ");
        for (i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.print("\nNew : ");
        for (i = 0; i < arr2.length; i++) {
            System.out.print(arr2[i] + " ");
        }
    }
}
