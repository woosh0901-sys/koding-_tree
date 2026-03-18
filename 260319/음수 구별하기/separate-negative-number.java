import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int n = scanner.nextInt();
        
        System.out.println(n);
        
        if (n < 0) {
            System.out.println("minus");
        }
        
        scanner.close();
    }
}