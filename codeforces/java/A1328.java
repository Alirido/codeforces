/*
	A. Divisibility Problem
	Time limit 1 s
	Memory limit 256 Mb
*/

import java.util.Scanner;

public class A1328 {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int t = scan.nextInt();
		for (int i=0; i<t; i++) {
			int a = scan.nextInt();
			int b = scan.nextInt();
			int mod = a % b;
			int result = (mod == 0) ? 0 : (b - mod);
			System.out.println(result);
		}
	}
}