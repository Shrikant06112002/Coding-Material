class TestEx {
	public void div(int num1, int num2) {
		try {
			System.out.println(num1 / num2);
		} catch (ArithmeticException ae) {
			System.out.println("getMessage: " + ae.getMessage());
			System.out.println("getCause: " + ae.getCause());
			System.out.println("toString: " + ae.toString());
			System.out.println("printStackTrace: ");
			ae.printStackTrace();

		}
	}
}

public class Except4 {
	public static void main(String[] args) {

		TestEx t = new TestEx();
		t.div(4, 0);
	}
}
