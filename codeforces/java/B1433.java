/*
	B. Yet Another Bookshelf
	Time limit 1 s
	Memory limit 256 Mb
*/

import java.util.Scanner;
import java.util.Arrays;

public class B1433 {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int t = scan.nextInt();
		while (t-- > 0) {
			int n = scan.nextInt();
			int left = n+1;
			int right = -1;
			int zero = 0;
			for (int i=0; i<n; i++) {
				int x = scan.nextInt();
				if (x == 1) {
					if (i < left)
						left = i;
					if (i > right)
						right = i;
				} else
					zero++;
			}
			System.out.println(zero - left - (n-right-1));
		}
	}

}