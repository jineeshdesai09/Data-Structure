import java.util.Scanner;

public class SortAlphabate {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String[] str = new String[5];
        System.out.println("Please add only in lower case.");
        for (int i = 0; i < str.length; i++) {
            str[i] = sc.next();
        }
        System.out.print("Old : ");
        for (int i = 0; i < str.length; i++) {
            System.out.print(str[i]+" ");
        }
        for (int i = 0; i < str.length; i++) {
            for (int j = 0; j < str.length-1-i; j++) {
                if (str[j].compareTo(str[j+1])>0) {
                    String temp = str[j];
                    str[j] = str[j+1];
                    str[j+1] = temp;
                }
            }
        }
        System.out.print("\nNew : ");
        for (int i = 0; i < str.length; i++) {
            System.out.print(str[i]+" ");
        }
        sc.close();
    }
}