import java.util.Scanner;

public class maxNum{
	public static void main(String args[]){
		Scanner input = new Scanner(System.in);
		int num1 = input.nextInt(); 
        		int num2 = input.nextInt(); // ��ȡ�ڶ�������
       		int num3 = input.nextInt(); // ��ȡ����������
		int max = 0;
		if (num2 > max) {
            			max = num2;
        		}
        		if (num3 > max) {
            			max = num3;
        		}
	System.out.println(max);
	}

}