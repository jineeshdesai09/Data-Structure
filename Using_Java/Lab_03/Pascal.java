public class Pascal {
    public static void main(String[] args) {
        int a[][] = new int[10][10];
        for (int i = 0; i < 10; i++) {
            for (int j = 10; j > i ; j--) {
                System.out.print("  ");
            }
            for (int j = 0; j <= i; j++) {
                if (j==0 || j==i) {
                    a[i][j] = 1;
                }
                else {
                    a[i][j] = a[i-1][j-1]+a[i-1][j];
                }
                System.out.printf("%5d",a[i][j]);
            }
            System.out.println();
        }        
    }
}
