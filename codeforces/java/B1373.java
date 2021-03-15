/*
	B. 01 Game
	Time limit 1 s
	Memory limit 256 Mb
*/

import java.util.Scanner;
import java.util.Arrays;

public class B1373 {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int t = scan.nextInt();
		while (t-- > 0) {
			String s = scan.next();
			int zeros = 0, one = 0;
			for (int i=0; i<s.length(); i++) {
				if (s.charAt(i) == '0')
					zeros++;
				else
					one++;
			}
			if (zeros < one)
				System.out.println(zeros%2 == 0? "NET" : "DA");
			else
				System.out.println(one%2 == 0? "NET" : "DA");
		}
	}

}