// AreaOfCircle

#include <stdio.h>
#define PI 3.14159

void main()
{
    float radius, area;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    
    area = PI * radius * radius;
    printf("The area of the circle is: %.2f\n", area);
}

// import java.util.Scanner;
// public class AreaOfCircle {
//     public static void main(String[] args) {
//         double r,area;
//         Scanner sc = new Scanner(System.in);
//         System.out.print("Enter radius of Circle ");
//         r =sc.nextDouble();
//         area= 3.14 * r * r ;
//         System.out.printf("Area of circle is ");
//         System.out.println(area);
//     }
// }
