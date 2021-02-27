/*
	A. Yet Another Two Integers Problem
	Time limit 1 s
	Memory limit 256 Mb
*/

import java.util.Scanner;
import java.lang.Math;

public class A1409 {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int t = scan.nextInt();
		for (int i=0; i<t; i++) {
			int a = scan.nextInt();
			int b = scan.nextInt();
			int result = (int)Math.ceil(Math.abs(b-a)/10.0);
			System.out.println(result);
		}
	}
}