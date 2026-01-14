import java.util.Scanner;

public class coinCombinations1 {
    public static void main(String[] a) {
        solve();
    }

    static void solve() {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int sum = sc.nextInt();
        int coins[] = new int[n];
        for (int i = 0; i < n; i++) {
            coins[i] = sc.nextInt();
        }
        sc.close();

        int ways[] = new int[sum+1];
        int mod = 1000000007;

        ways[0] = 1;
        for (int i = 1; i <= sum; i++) {
            for (int j = 0; j < n; j++) {
                int c = coins[j];
                if (i >= c) {
                    ways[i] += ways[i - c];
                    if (ways[i] >= mod) ways[i] -= mod;
                }
            }
        }

        System.out.println(ways[sum]);
    }
}
