
import java.util.Scanner;

 public class Example1 {
	public static void main(String[] args) {
		System.out.println("���������ɸ����֣�ÿ����һ�����ֻس�ȷ��");
		Scanner add = new Scanner(System.in);
		double sum = 0;
		double x = add.nextDouble();
		while( x!= 0){
			sum = sum + x;
			x = add.nextDouble();
		}
		System.out.println("��Щ���ֵĺ�Ϊ"+ sum);
	}
}

