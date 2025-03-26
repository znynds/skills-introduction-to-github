import java.util.Scanner;

public class SumFromOneToN {
    public static void main(String[] args) {
        
        Scanner scanner = new Scanner(System.in);

        int number;
        while (true) {
            System.out.print("请输入一个 50 到 100 之间的整数：");
            number = scanner.nextInt();
            if (number >= 50 && number <= 100) {
                break; 
            } else {
                System.out.println("输入无效，请输入一个 50 到 100 之间的整数！");
            }
        }

        int sum = 0;
        for (int i = 1; i <= number; i++) {
            sum += i;
        }
        System.out.println( " 累加和是：" + sum);
    }
}