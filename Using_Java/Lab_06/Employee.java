
import java.util.Scanner;


class Employee_Detail {

    String Employee_ID;
    String Name;
    String Designation;
    int Salary;

    public Employee_Detail(String Employee_ID, String Name, String Designation, int Salary) {
        this.Employee_ID = Employee_ID;
        this.Name = Name;
        this.Designation = Designation;
        this.Salary = Salary;
    }

    public void print(){
        System.out.println("Employee ID : "+Employee_ID);
        System.out.println("Name : "+Name);
        System.out.println("Designation : "+Designation);
        System.out.println("Salary : "+Salary);
    }
}

public class Employee {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Employee ID : ");
        String id = sc.next();
        System.out.print("Name : ");
        String name = sc.next();
        System.out.print("Designation : ");
        String des = sc.next();
        System.out.print("Salary : ");
        int sal = sc.nextInt();

        Employee_Detail ed = new Employee_Detail(id, name, des, sal);
        System.out.println("\nEmployee details\n");
        ed.print();
        sc.close();
    }
}
