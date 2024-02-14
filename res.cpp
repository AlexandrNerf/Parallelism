
#include <iostream>
#include <cmath>
#define PI 3.14159265358979323846

#if USE_DOUBLE == 1
using Numeric = double;
#define sinx(x) \
	sin(x)
#else
using Numeric = float;
#define sinx(x) \
	sinf(x)	
#endif

using namespace std;

Numeric arr[10000001];





int main()
{
	Numeric sum = 0;
	for (int i = 0; i < 10000000; i++) {
		arr[i] = sinx(((Numeric)i*PI*2) / (Numeric)10000000);
		sum += arr[i];
	}
	cout << sum;
	return 0;
}
