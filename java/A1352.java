/*
	A. Sum of Round Numbers
	Time limit 1 s
	Memory limit 256 Mb
*/

import java.util.Scanner;
import java.util.ArrayList;

public class A1352 {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int t = scan.nextInt();
		scan.nextLine();
		for (int i=0; i<t; i++) {
			String n = scan.nextLine();
			int length = n.length();
			int nResult = 0;
			ArrayList<Integer> result = new ArrayList<Integer>();
			for (int j=0; j<length; j++) {
				if (n.charAt(j) != '0') {
					int zero = 1;
					for (int k=1; k<length-j; k++) {
						zero *= 10;
					}
					result.add((n.charAt(j) - '0')*zero);
					nResult++;
				}
			}
			System.out.println(nResult);
			for (int j=0; j<result.size(); j++) {
				System.out.print(result.get(j) + " ");
			}
			System.out.println();
		}
	}
}