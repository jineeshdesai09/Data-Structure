import java.util.*;

class VOWANX
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        
        for(int i=0; i<t; i++) {
            int n = sc.nextInt();
            String str = sc.next();
            System.out.println(checkVowel(str,n));
        }

        sc.close();
	}

    public static String checkVowel(String s, int n) {
        StringBuffer reverse = new StringBuffer();
        MyStack<Character> st1 = new MyStack<>();
        MyStack<Character> st2 = new MyStack<>();
        char[] c = s.toCharArray();
        st1.push(c[0]);
        boolean flag = true;
        for(int i=1; i<c.length; i++) {
            if (c[i]=='a'||c[i]=='e'||c[i]=='i'||c[i]=='o'||c[i]=='u') {
                if (flag) {
                    while(!st1.isEmpty()) {
                        st2.push(st1.pop());
                    }
                    st2.push(c[i]);
                    flag = false;
                }
                else {
                    while(!st2.isEmpty()) {
                        st1.push(st2.pop());
                    }
                    st1.push(c[i]);
                    flag = true;
                }
            }
            else {
                if (flag) {
                    st1.push(c[i]);
                }
                else {
                    st2.push(c[i]);
                }
            }
        }

        if (flag) {
            while (!st1.isEmpty()) {
                reverse.append(st1.pop());
            }
        }
        else {
            while (!st2.isEmpty()) {
                reverse.append(st2.pop());
            }
        }
        return reverse.reverse().toString();
    }

    /* Without use of stack */
    // public static String checkVowel(String s, int n) {
    //     StringBuffer sBuf = new StringBuffer();
    //     for (char c : s.toCharArray()) {
    //         if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u') {
    //             sBuf.reverse();
    //             sBuf.append(c);
    //         }
    //         else {
    //             sBuf.append(c);
    //         }
    //     }
    //     return sBuf.toString();
    // }
}