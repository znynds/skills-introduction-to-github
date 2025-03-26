import java.util.Scanner;
public class areaAndVolu{
public static double area(double radius) {
        return Math.PI * radius * radius;
    }

public static double volu(double radius,double height){
	double area =Math.PI * radius * radius;
	double volu = area * height; 
	return volu;
}
public static void main(String[] args){
	Scanner scanner = new Scanner(System.in);	
	System.out.println("输入3个圆的半径");
	double radius1 = scanner.nextDouble();
	double radius2 = scanner.nextDouble();
	double radius3 = scanner.nextDouble();
	System.out.println("输入3个柱体的高");
	double height1 = scanner.nextDouble();
	double height2 = scanner.nextDouble();
	double height3 = scanner.nextDouble();
	double area1 = area(radius1);
	double area2 = area(radius2);
	double area3 = area(radius3);
	double areaSum = area1 + area2 + area3;
	
	double volu1 = volu(radius1,height1);
	double volu2 = volu(radius2,height2);
	double volu3 = volu(radius3,height3);
	double voluSum = volu1 + volu2 + volu3;
	
	System.out.println("areasum = " +areaSum);
	System.out.println("volusum = " +voluSum);
}
}