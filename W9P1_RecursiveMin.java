
import java.util.Scanner;

public class W9P1_RecursiveMin {

    int min(int[] A, int n) {
        if (n==1)
            return A[1];
        
        int minBefore = min (A,n-1);
        if (A[n] < minBefore)
            return A[n];
        else
            return minBefore;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int[] A = new int[N + 1];
        for (int i = 1; i <= N; ++i) {
            A[i] = sc.nextInt();
        }
        W9P1_RecursiveMin m = new W9P1_RecursiveMin();
        System.out.print(m.min(A, N));
        
    }
}
