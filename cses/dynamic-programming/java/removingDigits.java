import java.util.Scanner;
import java.util.ArrayList;

public class removingDigits {
    public static void main(String[] a) {
        solve();
    }

    static ArrayList<Integer> getDigits(int n) {
        ArrayList<Integer> digits = new ArrayList<Integer>();

        while (n > 0) {
            digits.add(n%10);
            n /= 10;
        }

        return digits;
    }

    static void solve() {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.close();

        int steps[] = new int[n+1];
        int inf = 1000000007;

        for (int i = 1; i <= n; i++) {
            steps[i] = inf;
            ArrayList<Integer> digits = getDigits(i);

            for (int j = 0; j < digits.size(); j++) {
                int digit = digits.get(j);
                if (i >= digit) {
                    steps[i] = Math.min(steps[i], steps[i-digit] + 1);
                }
            }
        }

        System.out.println(steps[n]);
    }
}
