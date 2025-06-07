import java.util.*;
public class VowelOrNot {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a character");
        char a = sc.nextLine().charAt(0);
        if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'){
            System.out.println("Character is vowel");
        }
        else{
            System.out.println("Character is not vowel");
        }
    }
}
