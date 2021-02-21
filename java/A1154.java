/*
	A. Restoring Three Numbers
	Time limit 1 s
	Memory limit 256 Mb
*/

import java.util.Scanner;
import java.util.Arrays;

public class A1154 {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int[] arr = new int[4];
		for (int i=0; i<4; i++) {
			arr[i] = scan.nextInt();
		}
		Arrays.sort(arr);

		for (int i=0; i<3; i++) {
			System.out.print(arr[3]-arr[i]);
			System.out.print(" ");
		}

	}
}