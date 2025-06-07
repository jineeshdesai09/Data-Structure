import java.util.Scanner;

public class Merge {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int arr[] = new int[5];
        for (int i = 0; i < arr.length; i++) {
            System.out.print("a[" + i + "] : ");
            arr[i] = sc.nextInt();
        }
        int arr2[] = new int[5];
        for (int i = 0; i < arr.length; i++) {
            System.out.print("a[" + i + "] : ");
            arr2[i] = sc.nextInt();
        }
        sc.close();
        int i;
        int mer[] = new int[arr.length+arr2.length];
        for ( i = 0; i < arr.length; i++) {
            mer[i] = arr[i];
        }
        for(int j = 0; j < arr2.length; j++) {
            mer[i] = arr2[j];
            i++;
        }

        System.out.print("arr1 : ");
        for (int j = 0; j < arr.length; j++) {
            System.out.print(arr[j]+" ");
        }
        System.out.print("\narr2 : ");
        for (int j = 0; j < arr2.length; j++) {
            System.out.print(arr2[j]+" ");
        }
        System.out.print("\nmerged : ");
        for (int j = 0; j < mer.length; j++) {
            System.out.print(mer[j]+" ");
        }
    }
}
