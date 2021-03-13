/*
	A. Captain Flint and Crew Recruitment
	Time limit 1 s
	Memory limit 256 Mb
*/

import java.util.Scanner;
import java.util.Arrays;

public class A1388 {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int t = scan.nextInt();
		while (t-- > 0) {
			int n = scan.nextInt();
			if (n <= 30)
				System.out.println("NO");
			else if (n == 36) {
				System.out.println("YES");
				System.out.println("6 10 15 5");
			} else if (n == 40) {
				System.out.println("YES");
				System.out.println("6 10 15 9");
			} else if (n == 44) {
				System.out.println("YES");
				System.out.println("6 10 15 13");
			} else {
				System.out.println("YES");
				System.out.println("6 10 14 " + (n-30));
			}
		}

	}

}