
import java.util.Scanner;

class ACDetails{
    String acno;
    double balance;
    String name;

    public ACDetails(String acno,double balance,String name){
        this.acno = acno;
        this.balance = balance;
        this.name = name;
    }

    public void deposit() {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter money to deposit : ");
        double add = sc.nextDouble();
        balance += add;
        System.out.println(add+" deposited.");
        sc.close();
    }

    public void withdrow() {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter money to deposit : ");
        double wid = sc.nextDouble();
        sc.close();
        if(balance<wid) {
            System.out.println("Not enough balance.");
            return;
        }
        balance-=wid;
    }

    public void checkBalance() {
        System.out.println("Current balance : "+balance);
    }
}
public class BankAccount {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ACDetails ad[] = new ACDetails[2];
        for (int i = 0; i < 2; i++) {
            System.out.println("\nFor account "+i);
            System.out.print("Enter account number : ");
            String acno = sc.next();
            System.out.print("Enter balance : ");
            double balance = sc.nextDouble();
            System.out.print("Enter your name : ");
            String name = sc.next();
    
            ad[i] = new ACDetails(acno, balance, name);
            
        }
        System.out.print("\nEnter account index to perform methods : ");
        int n = sc.nextInt();
        System.out.println("[1] Deposit money\n[2] Withdrow money\n[3] Check balance\n");
        System.out.print("Enter your choice : ");
        int choice  = sc.nextInt();
        switch (choice) {
            case 1:
                ad[n].deposit();
                break;
            case 2:
                ad[n].withdrow();
                break;
            case 3:
                ad[n].checkBalance();
                break;
            default:
                System.out.println("Incorrect choice");
        }
        sc.close();
    }
}
