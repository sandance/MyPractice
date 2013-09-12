import java.util.*;

public class solution {
	Scanner sc = new Scanner(System.in);
	
	int xs = sc.nextInt();
	int ys = sc.nextInt();
	int n  = sc.nextInt();
	
	int [] x = new int[n]; 
	int [] y = new int[n];

	for(int i=0;i<n;i++){
		x[i] = sc.nextInt();
		y[i] = sc.nextInt();
	}
	
	int [] single = new int[n];
	int [][] pair = new int[n][n];
	
	for(int i=0;i<n;i++) {
		single[i] = 2*((x[i]-xs)*(x[i]-xs) +(y[i]-ys)*(y[i]-ys));
		// so single = s(2(x1 - x0)^2 + (x2-x0)^2)
	}

	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++) {
			pair[i][j] = (x[i]-xs)*(x[i]-xs)+(y[i]-ys)*(y[i]-ys) + 	 (x[j]-xs)*(x[j]-xs)+(y[j]-xs)*(y[j]-ys);  // pair[i][j] = x[i]^2 + y[i]^2 + x[j]^2 + y[j]^2 
			}
	}

	
	int [] best = new int [1<<n]; // AS n =2 or 3 it would be 100 or 1000
	int [] prev = new int [1<<n];
	
	for(int mask=1; mask < (1<<n); mask++)  // check the array 1..100 or 1000
	{
		int i=0;
		
		while(mask & (1<<i) ==0)
			i++;
		
		 

	
