import java.util.*;

public class lcm {
    public static int findLcm(int x, int y) {
        // returns the LCM
        return (x / findGcd(x, y)) * y;
    }

    static int findGcd(int x, int y) {
        if (x == 0)
            // returns y is x==0
            return y;
        // calling function that returns GCD
        return findGcd(y % x, x);
    }

    public static void main(String[] args) {
        int x, y;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the first number: ");
        x = sc.nextInt();
        System.out.print("Enter the second number: ");
        y = sc.nextInt();
        System.out.println("LCM of " + x + " and " + y + " is " + findLcm(x, y));

    }
}
