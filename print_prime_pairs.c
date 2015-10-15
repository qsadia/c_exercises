#include <stdio.h>

int is_prime(int n)
{
	int is_prime = 0;
	if (n % 2 != 0 && n % 3 != 0 && n % 5 != 0 && n % 7 != 0)
	{
		is_prime = 1;
	}

	return is_prime;
}


void print_prime_pairs(int n)
{
	int count = 0;
 	int pair1 = 0;
 	int pair2 = 0;

 	for(int i = 1; i <= n; i++)
 	{
 		if(is_prime(i))
 		{
 			pair1 = i;

 			if (is_prime(pair1+2)){
 				pair2 = pair1+2;
 				printf("%d, %d\n", pair1, pair2);
 			}

 		}
 	}
}


int main()
{
	print_prime_pairs(1000);
	return 0;
}