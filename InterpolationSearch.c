#include <stdio.h>

// If x is present in arr[0..n-1], then returns
// index of it, else returns -1.
int interpolationSearch(int arr[], int lo, int hi, int x)
{
	int pos;
	// Since array is sorted, an element present
	// in array must be in range defined by corner
	if (lo <= hi && x >= arr[lo] && x <= arr[hi]) {
		// Probing the position with keeping
		// uniform distribution in mind.
		pos = lo
			+ (((double)(hi - lo) / (arr[hi] - arr[lo]))
				* (x - arr[lo]));

		if (arr[pos] == x)
			return pos;
    
		if (arr[pos] < x)
			return interpolationSearch(arr, pos + 1, hi, x);

		if (arr[pos] > x)
			return interpolationSearch(arr, lo, pos - 1, x);
	}
	return -1;
}

int main()
{
	
	int arr[] = { 10, 12, 13, 16, 18, 19, 20, 21,
				22, 23, 24, 33, 35, 42, 47 };
	int n = sizeof(arr) / sizeof(arr[0]);

	int x = 18; // Element to be searched
	int index = interpolationSearch(arr, 0, n - 1, x);

	if (index != -1)
		printf("Element found at index %d", index);
	else
		printf("Element not found.");
	return 0;
}
