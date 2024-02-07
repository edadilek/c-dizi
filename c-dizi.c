#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void buyukKucukBul(int x[], int n);
void siralama(int x[], int n);
void terstenYaz(int x[], int n);



int main() {
	srand(time(NULL));
	int eleman, i;

	printf("Dizi kac elemanli olsun:");
	scanf("%d", &eleman);

	int* dizi;
	dizi = (int*)malloc(sizeof(int) * eleman);

	for (i = 0; i < eleman; i++) {
		dizi[i] = rand() % 100 + 1;

	}


	buyukKucukBul(dizi, eleman);
	siralama(dizi, eleman);
	terstenYaz(dizi, eleman);


	free(dizi);
	return 0;

}

void buyukKucukBul(int x[], int n) {
	int j, k, kacinci = 0;


	for (j = 0; j < n; j++) {

		if (x[j] < x[kacinci])
			kacinci = j;
	}
	printf("\nDizinin %d. elemani olan %d en kucuk sayidir\n", kacinci + 1, x[kacinci]);


	for (k = 0; k < n; k++) {

		if (x[k] > x[kacinci])
			kacinci = k;
	}
	printf("Dizinin %d. elemani olan %d en buyuk sayidir\n", kacinci + 1, x[kacinci]);
}

void siralama(int x[], int n) {

	int k, i, j, m;
	printf("Dizi:\t");
	for (k = 0; k < n; ++k) {
		printf("%d\t", x[k]);
	}
	for (i = 0; i < n - 1; ++i) {
		for (j = 0; j < n - i - 1; ++j) {
			if (x[j] < x[j + 1]) {
				k = x[j];
				x[j] = x[j + 1];
				x[j + 1] = k;
			}
		}
	}

	printf("\nSirali Dizi:\t");
	for (m = 0; m < n; ++m) {
		printf("%d\t", x[m]);
	}
}

void terstenYaz(int x[], int n) {
	int sayac = 1, i, j;

	printf("\nDizi:\t");
	for (i = 0; i < n; i++)
	{
		printf("%d\t", x[i]);
	}

	printf("\nTers dizi:\t");
	for (j = n - 1; j >= 0; j--)
	{
		printf("%d\t", x[j]);
		sayac++;
	}

}