
import java.util.Scanner;

 public class Example1 {
	public static void main(String[] args) {
		System.out.println("请输入若干个数字，每输入一个数字回车确认");
		Scanner add = new Scanner(System.in);
		double sum = 0;
		double x = add.nextDouble();
		while( x!= 0){
			sum = sum + x;
			x = add.nextDouble();
		}
		System.out.println("这些数字的和为"+ sum);
	}
}

