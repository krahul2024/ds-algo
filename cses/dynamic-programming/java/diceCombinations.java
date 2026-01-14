import java.util.Scanner;

public class diceCombinations {
    public static void main(String[] a) {
        solve();
    }

    static void solve() {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int mod = 1000000007;
        int arr[] = new int[n+1];

        for (int i = 1; i <= Math.min(n, 6); i++)
            arr[i] = 1;

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= 6; j++) {
                if (i - j > 0) {
                    arr[i] = (arr[i] % mod + arr[i - j] % mod) % mod;
                }
            }
        }

        System.out.println(arr[n]);

        sc.close();
    }
}
