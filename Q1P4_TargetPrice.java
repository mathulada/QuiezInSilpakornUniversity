
import java.util.Scanner;

public class Q1P4_TargetPrice {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int asw = -99;

        int price[] = new int[N + 1];

        for (int i = 0; i < N; i++) {
            price[i] = sc.nextInt();
        }
        int Q = sc.nextInt();
        for (int i = 0; i < Q; i++) {
            int K = sc.nextInt();
            int M = sc.nextInt();

            int center = K / 2;
            int Left = (M - center) - 1;
            int Right = (M + center) - 1;
            //System.out.println("L = "+Left + " R = "+Right);
            int sum = 0;
            for (int L = Left; L <= Right; L++) {
                if (Left < 0 || Right >= N) {
                    //System.out.println("No "+"L = "+Left + " R = "+Right);
                    asw = 1;
                    if (L>=0 && L<N){
                        sum += price[L];
                    }
                } else if (Left >= 0 && Right < N) {
                    sum += price[L];
                    asw = 2;
                    /*System.out.println(price[L]);
                    System.out.println("Yes "+"L = "+Left + " R = "+Right);*/
                }
            }
            if (asw == 1) {
                System.out.println("no "+sum);
            } else if (asw == 2) {
                System.out.println(sum);
            }
        }
    }
    
}
