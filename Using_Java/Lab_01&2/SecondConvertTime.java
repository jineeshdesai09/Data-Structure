import java.util.*;

public class SecondConvertTime{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the number of seconds: ");
        int totalSeconds = scanner.nextInt();
        
        int hours = totalSeconds / 3600;
        int minutes = (totalSeconds % 3600) / 60;
        int seconds = totalSeconds % 60;
        
        System.out.printf("%02d:%02d:%02d\n", hours, minutes, seconds);
        
        scanner.close();
    }
}