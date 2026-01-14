import java.util.Scanner;

public class coinCombinations2 {
    public static void main(String[] a) {
        solve();
    }

    static void solve() {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int x = sc.nextInt();
        int coins[] = new int[n];
        for (int i = 0; i < n; i++) {
            coins[i] = sc.nextInt();
        }
        sc.close();

        long ways[] = new long[x+1];
        int mod = 1000000007;
        ways[0] = 1;

        for (int i = 0; i < n; i++) {
            for (int sum = 1; sum <= x; sum++) {
                if (sum >= coins[i]) {
                    ways[sum] += ways[sum - coins[i]];
                    if (ways[sum] >= mod) {
                        ways[sum] -= mod;
                    }
                }
            }
        }

        System.out.println(ways[x] % mod);
    }
}
