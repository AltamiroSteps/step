#include <stdio.h>
double f(int i);
int g(int i, double *b);

int main() {

	int j = 7;
	double d = f(j);
	printf("d %.ef", d);


	double u = 3.16;
	if (g(j, &u) != 1) {
		printf("erro");
	}
	else {
		printf("u=%ef", u);
	}
	return 0;
}


double f(int i) {

	return i * 3.5;
}

int g(int i, double *b) {
	if (i > 100) {
		return -1;
	}
	(*b) = i * 3.5;
	return 1;

}