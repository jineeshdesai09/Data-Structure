import java.util.Scanner;

public class AddElement {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int arr[] = new int[5];
        for (int i = 0; i < arr.length; i++) {
            System.out.print("a[" + i + "] : ");
            arr[i] = sc.nextInt();
        }

        System.out.print("Enter val : ");
        int val = sc.nextInt();
        System.out.print("Enter index : ");
        int ind = sc.nextInt();
        sc.close();

        int i;
        int arr2[] = new int[arr.length + 1];

        for (i = 0; i < ind - 1; i++) {
            arr2[i] = arr[i];
        }
        arr2[ind - 1] = val;
        for (i = ind - 1; i < arr.length; i++) {
            arr2[i + 1] = arr[i];
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