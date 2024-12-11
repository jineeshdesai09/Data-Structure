public class PowerOfNumber{
    public static void main(String[] args) {
    int a = 5;
    int n = 5;
    for(int i=1;i<=n;i++){
        int pow = a;
        pow = pow * a;
    }
    System.out.println(pow);
    }
}