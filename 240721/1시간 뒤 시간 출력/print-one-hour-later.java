import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int h, m;
        sc.useDelimiter(":");
        h = sc.nextInt();
        m = sc.nextInt();
        System.out.printf("%d:%d\n", h+1, m);
    }
}