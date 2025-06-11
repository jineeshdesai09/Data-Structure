import java.util.Scanner;

public class Recognize {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a string : ");
        String s = sc.next();
        palindrome(s);
        sc.close();
    }
    public static void palindrome(String s) {
        MyStack<Character> st = new MyStack<>();
        int len = s.length();
        for(int i=0; i<len/2; i++) {
            st.push(s.charAt(i));
        }
        int mid = len%2==0?len/2:(len/2+1);
        for(int i=mid; i<len; i++) {
            if (st.pop()!=s.charAt(i)) {
                System.out.println("String is not palindrome.");
                return;
            }
        }
        System.out.println("String is palindrome.");
    }
}
