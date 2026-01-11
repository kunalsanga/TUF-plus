import java.util.Scanner;

public class DoWhileExample {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int choice;

        do {
            System.out.println("\n--- MENU ---");
            System.out.println("1. Check Balance");
            System.out.println("2. Deposit Money");
            System.out.println("3. Exit");
            System.out.print("Enter choice: ");
            choice = sc.nextInt();

            if (choice == 1) {
                System.out.println("Balance: ₹10,000");
            } else if (choice == 2) {
                System.out.println("Money Deposited!");
            }
        } while (choice != 3);

        System.out.println("Thank you for using our service!");
    }
}
