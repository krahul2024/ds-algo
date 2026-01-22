import java.util.Scanner;
import java.util.TreeMap;
import java.util.Map;

public class playlist {
    public static void main(String[] args) {
        solve ();
    }

    static void solve () {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int songs[] = new int[n];

        for (int i = 0; i < n; i++)
            songs[i] = sc.nextInt();

        sc.close();

        Map<Integer, Integer> index = new TreeMap<>();
        int maxLen = 1, i = 0, j = 1;

        index.put (songs[0], 0);

        while (i < j && j < songs.length) {
            if (index.containsKey(songs[j])) {
                int idx = index.get(songs[j]);
                while (i <= idx) {
                    index.remove(songs[i]);
                    i++;
                }
            }

            index.put(songs[j], j);
            if (j-i+1 > maxLen) {
                maxLen = j-i+1;
            }

            j++;
        }

        System.out.println(maxLen);
    }
}
// 1 4 4 3 2 3
