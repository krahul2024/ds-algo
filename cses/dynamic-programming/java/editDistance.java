import java.util.Scanner;

public class editDistance {
    public static void main(String[] a) {
        solve();
    }

    static void solve() {
        Scanner sc = new Scanner(System.in);
        String s1 = sc.next();
        String s2 = sc.next();
        sc.close();

        int n = s1.length();
        int m = s2.length();

        int[][] distance = new int[n+1][m+1];

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (s1.charAt(i-1) == s2.charAt(j-1)) {
                    distance[i][j] = distance[i-1][j-1];
                } else {
                    //TODO: distance[i][j] = Math.max(distance[i][j], )
                }
            }
        }
    }
}
