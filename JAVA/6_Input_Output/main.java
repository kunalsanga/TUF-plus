import java.util.Scanner;

public class main {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("enter your age: ");
        int age = sc.nextInt();
        System.out.print("enter your name: ");
        String name = sc.next();
        System.out.println(name+" and age is "+age);
        
    }
    
}
