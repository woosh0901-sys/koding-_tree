import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int N = scanner.nextInt();
        
        if (N >= 80) {
            System.out.println("pass");
        } else {
            System.out.println(80 - N + " more score");
        }
        
        scanner.close();
    }
}