import java.util.Scanner;

public class bookShop {
    public static void main(String[] a) {
        solve();
    }

    static void solve() {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int x = sc.nextInt();
        int[] prices = new int[n];
        int[] pages = new int[n];

        for (int i = 0; i < n; i++) {
            prices[i] = sc.nextInt();
        }

        for (int i = 0; i < n; i++) {
            pages[i] = sc.nextInt();
        }
        sc.close();

        int[][] mem = new int[n+1][x+1];

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= x; j++) {
                mem[i][j] = mem[i-1][j];

                if (j >= prices[i-1])
                    mem[i][j] = Math.max(mem[i][j], mem[i-1][j-prices[i-1]] + pages[i-1]);
            }
        }

        System.out.println(mem[n][x]);
    }
}
