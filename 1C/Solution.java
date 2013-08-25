import java.io.*;
import java.util.*;

//by lokesh , program 1C

public class Solution{
		static Scanner s = new Scanner(System.in);
		static double x1 = s.nextDouble();
		static double y1 = s.nextDouble();
		static double x2 = s.nextDouble();
		static double y2 = s.nextDouble();
		static double x3 = s.nextDouble();
		static double y3 = s.nextDouble();

		public double distance(double x1, double x2, double y1, double y2)
		{
			return (Math.sqrt(Math.pow(x2-x1,2) + Math.pow(y2-y1,2)));
		}

		public double area(double a, double b, double c)
		{
			double s=(a+b+c)/2;
			return Math.sqrt((s)*(s-a)*(s-b)*(s-c));
		}

		public double angle (double a, double b, double c)
		{
			return Math.acos((b*b + c*c - a*a)/(2*b*c));
		}

		public double hcf ( double x, double y)
		{
			double eps = 0.0001;
			while (Math.abs(x) > eps && Math.abs(y) > eps)
			{
				if (x>y)
					x -=Math.floor(x/y)*y;
				else
					y -=Math.floor(y/x)*x;
			}
			
			return x+y;
		}


		public static void main(String args[]) throws IOException 
		{
			Solution obj = new Solution();
			double a = obj.distance(x1,x2,y1,y2);
			double b = obj.distance(x3,x1,y3,y1);
			double c = obj.distance(x2,x3,y2,y3);
			double S = obj.area(a,b,c);
			double R = a*b*c/(4*S);

			double angleA = obj.angle(a,b,c);
			double angleB = obj.angle(b,a,c);
			double angleC = obj.angle(c,b,a);
			// just to make them round figure ?? 1.6 ~~ 2.0 ?

			double hcf2 = obj.hcf(obj.hcf(angleA,angleB),angleC);
			// just to make them round like 1.6 ~~ 1.0
			double n = Math.ceil((Math.PI)/hcf2);

			double area = (n/2)*R*R*Math.sin((2*Math.PI)/n);


			System.out.println(area);
		}
}
