import java.util.Scanner;

public class minimizingCoins {
    public static void main(String[] a) {
        solve();
    }

    static void solve() {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int inf = 1000000007;
        int sum = sc.nextInt();
        int coins[] = new int[n];
        for (int i = 0; i < n; i++) {
            coins[i] = sc.nextInt();
        }
        sc.close();

        int mem[] = new int[sum + 1];

        // 0 1 2 3 4 5 6 7 8 9 10 11 -> inf
        for (int i = 1; i <= sum; i++) {
            mem[i] = inf;

            for (int j = 0; j < n; j++) {
                if (i - coins[j] >= 0) {
                    mem[i] = Math.min(mem[i], mem[i-coins[j]] + 1);
                }
            }
        }

        System.out.println(mem[sum] != inf ? mem[sum] : -1);
    }
}
