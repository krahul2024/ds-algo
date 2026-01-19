import java.util.Scanner;
import java.util.List;
import java.util.ArrayList;

public class longestCommonSubsequence {
    public static void main(String[] a) {
        lcs();
    }

    static void lcs() {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();

        int[] arr1 = new int[n];
        int[] arr2 = new int[m];

        for (int i = 0; i < n; i++) {
            arr1[i] = sc.nextInt();
        }

        for (int i = 0; i < m; i++) {
            arr2[i] = sc.nextInt();
        }
        sc.close();

        int[][] mem = new int[n+1][m+1];
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (arr1[i-1] == arr2[j-1]) {
                    mem[i][j] = 1 + mem[i-1][j-1];
                } else {
                    mem[i][j] = Math.max(mem[i-1][j], mem[i][j-1]);
                }
            }
        }

        System.out.println(mem[n][m]);

        List<Integer> lcsArr = new ArrayList<>();

        int i = n, j = m;
        while (i > 0 && j > 0) {
            if (arr1[i-1] == arr2[j-1]) {
                lcsArr.add(arr1[i-1]);
                i--; j--;
            } else if (mem[i][j-1] > mem[i-1][j]) {
                j--;
            } else {
                i--;
            }
        }

        for (i = lcsArr.size() - 1; i >= 0; i--) {
            System.out.print (lcsArr.get(i) + (i > 0 ? " " : "\n"));
        }
    }
}
