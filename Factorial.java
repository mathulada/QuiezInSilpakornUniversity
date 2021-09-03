import java.util.Scanner;

public class Factorial {

    int fact(int n) {
        System.out.println("Current n @ 1 = " + n);
        if (n == 0) {
            return 1;
        }
        int result = n * fact(n - 1); 
        System.out.println("Current n @2 = " + n);
        return result;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        Factorial aa = new Factorial();
        System.out.println(aa.fact(n));
    }

}
