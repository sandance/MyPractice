import java.util.*;
import java.io.*;

public class solution implements Runnable {

	private Scanner in = new Scanner(System.in);
	private PrintWriter out = new PrintWriter(System.out);
	private double a,v,l,d,w;
	private double ans;

	public static void main(String[] args) throws IOException {
			new Thread(new solution()).start();
	}

	
	private void read() {
		 a = in.readInt();
		 v = in.readInt();
		 l = in.readInt();
		 d = in.readInt();
		 w = in.readInt();
	}

	private void remaining (double v0, double dst) {
		
				double t = (v-v0) / a;
				double d = v0* t + 0.5 * a* t* t;
			
				if ( d > dst ){
					return (Math.sqrt(v0*v0+2*a*dst) - v0) / a;
				return t + (dst -d )/ v;
				}
	}

	private void solve (){
			if ( w * w >= 2 *a*d || w >= v ) {
				ans = remaining(0,l);
				return;
			}

			double t1 = v/a; // Somobeg , i mean s =vt formula
			double t2 = (v-w) /a ;
			double dd = a * t1 * t1 / 2 + a * t2 * t2 / 2 + w * t2;
		
			System.out.println("DD earlier value "+ dd);

	
			if ( dd < d ){
					ans = t1 + t2 + (d-dd)/v + remaining(w,l-d);
					System.out.println("If it reached here, the total ans value "+ans);
					return;
			}

			double t1 = w/a;
			
						

	
	}


	private void write () {
				out.printf("%7f\n",ans);
	}


	private void run() {
			read();
			solve();
			write();
			out.close();
		}


			
		

	
	

	
					
