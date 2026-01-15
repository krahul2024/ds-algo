import java.util.Scanner;

public class gridPaths1 {
    public static void main(String[] a) {
        solve();
    }

    static void solve() {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        char[][]grid = new char[n][n];
        for (int i = 0; i < n; i++) {
            String row = sc.next();
            for (int j = 0; j < n; j++) {
                grid[i][j] = row.charAt(j);
            }
        }
        sc.close();

        int [][]paths = new int[n+1][n+1];
        int mod = 1000000007;
        paths[1][1] = (grid[0][0] == '.' ? 1: 0);

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (grid[i-1][j-1] == '.') {
                    paths[i][j] += (paths[i-1][j]%mod + paths[i][j-1] % mod)%mod;
                }
            }
        }

        System.out.println(paths[n][n]);
    }
}
