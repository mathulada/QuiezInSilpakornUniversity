
import java.util.Scanner;

class Bus {

    String id;
    int type;
    private int seats;
    private int reserved = 0;
    private boolean active = true;

    Bus(String id, int type, int seats) {
        this.id = id;
        this.type = type;
        this.seats = seats;
    }

    void printStats() {
        System.out.println(id);
        if (type == 1) {
            System.out.println("Fan");
        } else if (type == 2) {
            System.out.println("P1");
        } else if (type == 3) {
            System.out.println("VIP");
        }
        System.out.println(reserved + " " + seats);
        if (active) {
            System.out.println("Active");
        } else {
            System.out.println("Inactive");
        }
    }

    boolean reserve(int k) {
        if (!active || k + reserved > seats || k <= 0) {
            return false;
        } else {
            reserved += k;
            return true;
        }
    }

    void sendToRepair() {
        active = false;
    }

    void backToService() {
        active = true;
    }
}

public class BusCompany3 {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int Q = scan.nextInt();
        Bus[] buses = new Bus[Q + 1];
        for (int i = 1; i <= Q; ++i) {
            String id = scan.next();
            int type = scan.nextInt();
            int seats = scan.nextInt();
            buses[i] = new Bus(id, type, seats);
        }

        int N = scan.nextInt();
        for (int i = 0; i < N; ++i) {
            int P = scan.nextInt();
            int K = scan.nextInt();
            int T = scan.nextInt();
            if (P == 1) {
                boolean success = false;
                for (int j = 1; j <= Q; ++j) {
                    if (buses[j].type != T) // not a target tyep, skip
                    {
                        continue;
                    }
                    if (buses[j].reserve(K)) {
                        System.out.println(buses[j].id);
                        success = true;
                        break;
                    }
                }
                if (!success) {
                    System.out.println("sorry");
                }
            } else if (P == 2) {
                buses[T].sendToRepair();
            } else if (P == 3) {
                buses[T].backToService();
            }
        }
    }
}
