/*
	A. Equalize Prices Again
	Time limit 1 s
	Memory limit 256 Mb
*/

import java.util.Scanner;
import java.util.Arrays;

public class A1234 {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int q = scan.nextInt();
		while (q-- > 0) {
			int n = scan.nextInt();
			int sum = 0;
			for (int i=0; i<n; i++) {
				int x = scan.nextInt();
				sum += x;
			}
			System.out.println(sum%n == 0? sum/n : sum/n + 1);

		}
	}
}