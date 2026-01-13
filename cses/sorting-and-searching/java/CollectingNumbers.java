import java.util.Scanner;

public class CollectingNumbers {
    public static void main(String[] args) {
        collectingNumbers();
    }

    static void collectingNumbers() {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();

        int[] arr = new int[n + 1];
        for (int i = 0; i < n; i++) {
            int x = in.nextInt();
            arr[x] = i;
        }

        int totalCount = 1;
        for (int i = 0; i < arr.length - 1; i++) {
            if (arr[i] > arr[i+1])
            totalCount += 1;
        }

        System.out.println(totalCount);

        in.close();
    }
}
