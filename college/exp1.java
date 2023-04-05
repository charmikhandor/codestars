import java.util.*;
import java.lang.math.*;
public class exp1{
    public static void main(){
        int a, b, c; 
        float x, y;
        Scanner sc=new Scanner(System.in);
        System.out.println(x: "Enter number of coeffecients a, b, c");
        a=sc.nextInt();
        b=sc.nextInt();
        c=sc.nextInt();
        x=(-b+sqrt(b*b - 4*a*c))/(2*a);
        x=(-b-sqrt(b*b - 4*a*c))/(2*a);
        System.out.println("the roots are" + x + "and" + y);  
    }
}