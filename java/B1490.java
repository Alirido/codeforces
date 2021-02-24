/*
	B.Balanced Remainders
	Time limit 2 s
	Memory limit 256 Mb
*/

import java.util.Scanner;

public class B1490 {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int t = scan.nextInt();
		for (int i=0; i<t; i++) {
			int n = scan.nextInt();
			int[] arr = new int[n];
			int[] c = {0, 0, 0};
			for (int j=0; j<n; j++) {
				arr[j] = scan.nextInt();
				c[arr[j]%3]++;
			}
			int balancedRemainder = n/3;
			int result = 0;
			int temp = 0;
			int j = 0;
			while (
				c[0] != balancedRemainder || 
				c[1] != balancedRemainder ||
				c[2] != balancedRemainder) {
				c[j] += temp;
				if (c[j] > balancedRemainder) {
					temp = c[j]-balancedRemainder;
					result += temp;
					c[j] = balancedRemainder;
				} else {
					temp = 0;
				}
				j = (j+1)%3;
			}

			System.out.println(result);
		}
	}
}