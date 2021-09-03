import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.Map;
import java.util.Scanner;


public class Quiz1CountFrequency {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Map<Integer, Integer> mapRM = new LinkedHashMap<Integer, Integer>();
        int N = sc.nextInt();

        for (int i = 0; i < N; i++) {
            int input = sc.nextInt();
            if (!mapRM.containsKey(input)) {
                mapRM.put(input, 1);
            } else {
                int val = mapRM.get(input);

                mapRM.put(input, ++val);
            }
        }
        System.out.println(mapRM.size());

        Iterator<Integer> keySetIterator = mapRM.keySet().iterator();
        while (keySetIterator.hasNext()) {
            Integer key = keySetIterator.next();
            System.out.println(key + " " + mapRM.get(key));
        }

    }

}
