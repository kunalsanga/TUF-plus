import java.util.Scanner;

public class WhileLoopExample {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int correctPin = 1234;
        int attempts = 0;

        while (attempts < 3) {
            System.out.print("Enter PIN: ");
            int pin = sc.nextInt();

            if (pin == correctPin) {
                System.out.println("Access Granted!");
                break;
            }
            attempts++;
        }

        if (attempts == 3) {
            System.out.println("Card Blocked!");
        }
    }
}
