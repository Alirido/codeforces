/*
	A. Candies and Two Sisters
	Time limit 1 s
	Memory limit 256 Mb
*/

import java.util.Scanner;

public class A1335 {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int t = scan.nextInt();
		for (int i=0; i<t; i++) {
			int n = scan.nextInt();
			System.out.println((n-1)/2);
		}
	}
}