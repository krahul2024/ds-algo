import java.util.Scanner;
import java.math.*;

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

        int maxLen = 1;
        int i = 0, j = 0;

        while (i <= j && j < n-1) {
            if (songs[j] == songs[j+1]) {
                j++;
                i = j;
            } else {

            }
        }

        System.out.println(maxLen);
        sc.close();
    }
}
// 1 4 4 3 2 3
