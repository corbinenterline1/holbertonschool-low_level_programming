#include "holberton.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: is input array
 * @n: is number of elements in array
 * int c is counter, t is temporary storage, e is end
 * set e to equal the number of elements (n - 1, to account for first
 * element of 0).
 * For loop has c increment while less than half the string
 * so you don't swap both halves twice, accomplishing nothing.
 * in loop, set temp to array spot c, then set a[c] to equal a[end]
 * then set a[e] to equal t.
 * So array at c point goes into temp, then current main spot
 * and current end spot are switched in array, then replace array
 * at end element, with temp. Decrement end, then loop until half.
 * Result: Elements of an array's contents reversed in order.
 */
void reverse_array(int *a, int n)
{
	int c;
	int t;
	int e;

	e = n - 1;
	for (c = 0; c < n / 2; c++)
	{
		t = a[c];
		a[c] = a[e];
		a[e] = t;
		e--;
	}
}
