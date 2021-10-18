package javacodes;

class Palindrome {
	public static void main(String args[]) {
		int num = 121, rem, revInt = 0, oriInt;
		oriInt = num;

		while (num != 0) {
			rem = num % 10;
			revInt = revInt * 10 + rem;
			num = num / 10;
		}

		if (oriInt == revInt)
			System.out.println(oriInt + " is a Palindrome.");
		else
			System.out.println(oriInt + " is not a Palindrome.");
	}
}