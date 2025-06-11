import java.util.Scanner;

public class ABForm {
    public static void main(String[] args) {
        MyStack<Character> sa = new MyStack<>();
        MyStack<Character> sb = new MyStack<>();
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter string (contains a and b only) : ");
        String str = sc.next();
        for(char c : str.toCharArray()) {
            if(c=='a') {
                sa.push(c);
            }
            else {
                sb.push(c);
            }
        }
        System.out.println("a = "+sa.size()+"\nb = "+sb.size());
        sc.close();
    }
}
