import java.util.Scanner;

public class DeleteDuplicate {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int arr[] = new int[5];
        for (int i = 0; i < arr.length; i++) {
            System.out.print("a[" + i + "] : ");
            arr[i] = sc.nextInt();
        }
        int size = arr.length;
        System.out.print("Old array : ");
        for (int i = 0; i < size; i++) {
            arr[i] = arr[i];
            System.out.print(arr[i] + " ");
        }
        for (int i = 0; i < size-1; i++) {
            for (int j = i+1; j < size; j++) {
                if (arr[i]==arr[j]) {
                    for (int k = j; k < size-1; k++) {
                        arr[k] = arr[k+1];
                    }
                    size--;
                    j--;
                }
            }
        }

        int newArr[] = new int[size];
        System.out.print("\nNew array : ");
        for (int i = 0; i < size; i++) {
            newArr[i] = arr[i];
            System.out.print(newArr[i] + " ");
        }
        sc.close();
    }
}
