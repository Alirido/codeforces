/*
	A. Remove Smallest
	Time limit 1 s
	Memory limit 256 Mb
*/

import java.util.Scanner;
import java.util.Arrays;

public class A1399 {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int t = scan.nextInt();
		for (int i=0; i<t; i++) {
			int n = scan.nextInt();
			int[] arr = new int[n];
			for (int idx=0; idx<n; idx++) {
				arr[idx] = scan.nextInt();
			}
			Arrays.sort(arr);
			int idx = 1;
			boolean isPossible = true;
			while (idx < n && isPossible) {
				if (arr[idx]-arr[idx-1] > 1) {
					isPossible = false;
				}
				idx++;
			}
			System.out.println(isPossible ? "YES" : "NO");
		}
	}
}