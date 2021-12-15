#include <stddef.h>
#include <stdio.h>
float prediction(float* features, int n_features)
{
	float coefs[] = {
		6.0, -0.9999999999999997, 3.5
	};
	float res = 0;
	for (int i = 0; i < n_features; i++)
	{
		res += features[i] * coefs[i];
	}
	res += coefs[2];
	return res;
}
int main()
{
	float features[] = {
		3, 8
	};
	printf("%f", prediction(features, 2));
	return 0; 
}
  