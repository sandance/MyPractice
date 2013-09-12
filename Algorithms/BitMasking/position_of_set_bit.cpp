#include<iostream>
using namespace std;

/* Algorithm 

The idea is to start from rightmost bit and one by one check value of every bit. Following is detailed algorithm.

1) If number is power of two then and then only its binary representation contains only one ’1′. That’s why check whether given number is power of 2 or not. If given number is not power of 2, 
then print error message and exit.

2) Initialize two variables; i = 1 (for looping) and pos = 1 (to find position of set bit)

3) Inside loop, do bitwise AND of i and number ‘N’. If value of this operation is true, then “pos” bit is set, 
so break the loop and return position. Otherwise, increment “pos” by 1 and left shift i by 1 and repeat the procedure.
*/

/*


int isPowerOfTwo(unsigned n)
{
	return n && (! (n & (n-1))); 
}

//Retuns position of the only set bit in 'n'

int findposition(unsigned n)
{

	if(!isPowerOfTwo(n))
		return -1;
	
	unsigned i = 1, pos=1;
	
	// Iterate through bits of n till we find a set bit
	// i & n will be non-zero only when i and n have a set but at same position 

	while( !(i & n))\
	{
		i = i << 1; // Unset current bit and set the next bit in 'i'
		
		//increment position 
		++pos;
	}
	
	return pos;
}


		
int main(void)
{
	int n=16;
	int pos=findposition(n);

	if(pos==-1)
		cout<<"Invalid number "<<n<<"\n"<<endl;
	else
		cout<<"Position "<<n<<" "<<pos<<"\n"<<endl;


	 n=11;
         pos=findposition(n);

        if(pos==-1)
                cout<<"Invalid number "<<n<<"\n"<<endl;
        else
                cout<<"Position "<<n<<" "<<pos<<"\n"<<endl;


	return 0;

}

*/

//######################################## Log Based solution ###########################################################
//#######################################################################################################################

unsigned int Log2n (unsigned int n)
{
			
	return (n > 1) ? 1+Log2n(n/2) : 0;
}


int isPowerOfTwo(unsigned n)
{
	return n && (!(n & (n-1)));
}

int findposition(unsigned  n)
{

	if(!isPowerOfTwo(n))
		return -1;
	return Log2n(n) + 1;
}






int main(void)
{
        int n=16;
        int pos=findposition(n);

        if(pos==-1)
                cout<<"Invalid number "<<n<<"\n"<<endl;
        else
                cout<<"Position "<<n<<" "<<pos<<"\n"<<endl;


         n=11;
         pos=findposition(n);

        if(pos==-1)
                cout<<"Invalid number "<<n<<"\n"<<endl;
        else
                cout<<"Position "<<n<<" "<<pos<<"\n"<<endl;


        return 0;

}

