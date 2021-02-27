import java.util.Scanner;

public class A1030 {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		byte t = in.nextByte();
		boolean hard = false;
		for (int i=0; i<t; i++) {
			byte x = in.nextByte();
			if (x==1)
				hard = true;
		}
		if (hard)
			System.out.println("HARD");
		else System.out.println("EASY");
		in.close();
	}
}