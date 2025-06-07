public class FactorsOfNumber {
    public static void main(String[] args){
        int n = 5;
        int fac = 0;
        for(int i=1;i<=n;i++){
            if(n%i==0){
                fac=i;
                System.out.println(fac);
            }
        }
    }
}
