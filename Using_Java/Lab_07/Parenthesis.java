import java.util.Scanner;

public class Parenthesis {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        System.out.print("Enter string containing parenthesis only : ");
        String s = sc.next();
        System.out.println(chekBalanced(s));
        sc.close();
    }
    public static int chekBalanced(String s) {
        MyStack<Character> st = new MyStack<>();
        char[] ch = s.toCharArray();
        for (char c : ch) {
            if (c=='(' || c =='[' || c=='{') {
                st.push(c);
            }
            else {
                if (st.isEmpty()) {
                    return 1;
                }
                char paren = st.pop();
                if (c==')' && paren!='(' || c==']' && paren!='[' || c=='}' && paren!='{') {
                    return 0;
                }
            }
        }
        return 1;
    }
}
