
import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;
import java.util.*;

public class Quiz1KeepNewNumber	 {

    public static void main(String[] args) {
        int count = 0;
        Scanner sc = new Scanner(System.in);
        Set<Integer> setQ1 = new LinkedHashSet<Integer>();
        while (true) {
            int input = sc.nextInt();
            if (input <= 0) {
                break;
            }else{
                count++;
            }
            if (!setQ1.contains(input)) {
                setQ1.add(input);
            }
        }
        Iterator<Integer> it = setQ1.iterator();
        System.out.println(count);
        System.out.println(setQ1.size());
        while (it.hasNext()) {
            System.out.print(it.next()+" ");
        }
        
    }

}
