public class StringToNumber {
    public static void main(String[] args) {

        String s1 = "12";
        String s2 = "123";
        String s3 = "1234";
        String s4 = "12345";
        String s5 = "123456";

        short a = Short.parseShort(s1);      // ��������
        int b = Integer.parseInt(s2);        // ������
        long c = Long.parseLong(s3);         // ��������
        float d = Float.parseFloat(s4);      // �����ȸ�����
        double e = Double.parseDouble(s5);   // ˫���ȸ�����


        double sum = a + b + c + d + e;
        System.out.println("Sum = " + sum);

        
        int myInt = 6789;
        String myStr = Integer.toString(myInt);
        System.out.println("myStr = " + myStr);
    }
}