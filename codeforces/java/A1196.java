/*
	A. Three Piles of Candies
	Time limit 1 s
	Memory limit 256 Mb
*/

import java.util.Scanner;
import java.util.Arrays;

public class A1196 {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int q = scan.nextInt();
		for (int i=0; i<q; i++) {
			long a = scan.nextLong();
			long b = scan.nextLong();
			long c = scan.nextLong();
			long[] arr = {a, b, c};
			Arrays.sort(arr);
			if (arr[0] < arr[1]) {
				long dif = arr[1] - arr[0];
				if (dif <= arr[2]) {
					arr[2] -= dif;
					System.out.println(arr[1]+arr[2]/2);
				} else
					System.out.println(arr[0]+arr[2]);
			} else
				System.out.println(arr[0] + arr[2]/2);
		}
	}
}