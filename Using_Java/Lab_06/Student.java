
import java.util.Scanner;

class StudentDetail {

    String enNo;
    String name;
    int sem;
    double CPI;

    public StudentDetail(String enNo, String name, int sem, double CPI) {
        this.enNo = enNo;
        this.name = name;
        this.sem = sem;
        this.CPI = CPI;
    }

    public void print() {
        System.out.println("Employee ID : " + enNo);
        System.out.println("Name : " + name);
        System.out.println("Semester : " + sem);
        System.out.println("CPI : " + CPI);
    }
}

public class Student {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String enNo;
        String name;
        int sem;
        double CPI;
        StudentDetail sd[] = new StudentDetail[5];
        for (int i = 0; i < 5; i++) {
            System.out.println("\nFor student " + (i+1));
            System.out.print("Enter enrollment number : ");
            enNo = sc.next();
            System.out.print("Enter name : ");
            name = sc.next();
            System.out.print("Enter semester : ");
            sem = sc.nextInt();
            System.out.print("Enter CPI : ");
            CPI = sc.nextDouble();

            sd[i] = new StudentDetail(enNo, name, sem, CPI);
        }
        System.out.println();
        for (int i = 0; i < 5; i++) {
            System.out.println("Detail of student "+i);
            sd[i].print();
        }
        sc.close();
    }
}
