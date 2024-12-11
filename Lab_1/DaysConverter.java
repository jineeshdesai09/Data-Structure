import java.util.*;

public class DaysConverter{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the number of days: ");
        int totalDays = scanner.nextInt();
        
        int years = totalDays / 365;
        int remainingDaysAfterYears = totalDays % 365;
        int weeks = remainingDaysAfterYears / 7;
        int days = remainingDaysAfterYears % 7;
        
        System.out.println(totalDays + " days is equivalent to:");
        System.out.println(years + " year(s), " + weeks + " week(s), and " + days + " day(s).");
        
        scanner.close();
    }
}