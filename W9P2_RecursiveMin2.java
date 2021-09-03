
import java.util.Scanner;

public class W9P2_RecursiveMin2 {

    static Scanner sc;

    int min(int n) {
        int k = sc.nextInt();
        if (n == 1) {
            return k;
        }
        int minBefore = min(n - 1);

        if (k < minBefore) {
            return k;
        } else {
            return minBefore;
        }
    }

    public static void main(String[] args) {
        sc = new Scanner(System.in);
        int N = sc.nextInt();
        W9P2_RecursiveMin2 minFinder = new W9P2_RecursiveMin2();
        System.out.print(minFinder.min(N));
    }
}
