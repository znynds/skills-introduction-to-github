import java.util.Scanner;

public class SumFromOneToN {
    public static void main(String[] args) {
        
        Scanner scanner = new Scanner(System.in);

        int number;
        while (true) {
            System.out.print("������һ�� 50 �� 100 ֮���������");
            number = scanner.nextInt();
            if (number >= 50 && number <= 100) {
                break; 
            } else {
                System.out.println("������Ч��������һ�� 50 �� 100 ֮���������");
            }
        }

        int sum = 0;
        for (int i = 1; i <= number; i++) {
            sum += i;
        }
        System.out.println( " �ۼӺ��ǣ�" + sum);
    }
}