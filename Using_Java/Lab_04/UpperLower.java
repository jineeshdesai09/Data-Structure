import java.util.Scanner;

public class UpperLower {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a string : ");
        String str = sc.nextLine();
        String ans="";
        for(int i=0; i<str.length(); i++) {
            if(str.charAt(i)>='A' && str.charAt(i)<='Z') {
                ans += (char)(str.charAt(i)+32);
            }
            else if (str.charAt(i)==' ') {
                ans += str.charAt(i);
            }
            else {
                ans += (char)(str.charAt(i)-32);
            }
        }
        // char[] c = str.toCharArray();
        // for (int i=0; i<c.length; i++) {
        //     if (c[i]>='A' && c[i]<='Z'){
        //         c[i]+=32;
        //     }
        //     else {
        //         c[i]-=32;
        //     }
        // }
        // for (char ch : c) {
        //     ans+=ch;
        // }
        System.out.println(ans);
        sc.close();
    }
}