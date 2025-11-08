#include<stdlib.h>
#include <conio.h>
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	float dizi[4]; 
	float temp; 
	float ortalama = 0;
	float sin30 = 0.5;
	float geometric_mean;
	float gepmetric_means[10];
	float harmonic_mean = 0;

	// PI sabiti (float olarak)
	constexpr float PI = 3.14159265f;

	// Sinüs değerlerini saklayacak dizi (10 açı için)
	int angles[10] = { 30, 60, 120, 180, 210, 240, 270, 300, 330, 360 };
	float geometric_means[10];

	// Açıları radyana çevirip sinüslerini hesapla ve diziye koy
	for (int i = 0; i < 10; ++i) {
		float rad = angles[i] * PI / 180.0f;
		geometric_means[i] = std::sinf(rad); // float sürümü
	}
	
	cout << "4 adet sayı giriniz:\n";
	for (int i= 0 ; i< 4 ; i++ )
	{
		cin >> dizi[i];
	}
	for (int i = 0; i < 4 - 1; i++)
	{
		for (int j = 0; j < 4 - 1 - i; j++)
		{
			if (dizi[j] > dizi[j+1]  )
			{
				temp = dizi[j];
				dizi[j] = dizi[j + 1];
				dizi[j + 1] = temp;
			}
		}

	}
	cout << " Sıralanmış dizi : ";
	for (int i = 0; i < 4; i++) {
		cout << dizi[i] << "  ";
	}
for (int k = 0; k < 4; k++) {
			if (dizi[k] < 0) {
				cout << "// NEGATIF SAYI VAR : " << dizi[k] << endl;
			}
		}
for (int m = 0; m < 4; m++) {
			if (dizi[m] == 0) {
				cout << " // SIFIR DEGERI VAR : " << dizi[m] << endl;
			}
			for (int a = 0; a < 4; a++) {
			cout << " // GEOMETRIK ORTALAMA DEGERI : " << endl;
			geometric_mean = geometric_mean * dizi[a];
			cout << pow(geometric_mean, 1.0 / 4.0) << endl;
		}
			for (int b = 0; b < 4; b++) {
			if (dizi[b] == sin30) {
				cout << "// 30 DERECEYE ESIT SAYI VAR : " << dizi[b] << endl;
			}
		}
		}
for (int l = 0; l < 4; l++) {
	ortalama = dizi[l] + ortalama;
	cout << "//ORTALAMA DEGERI : " << ortalama / 4 << endl;
}
		for (int c = 0; c < 4; c++) {
	 
			harmonic_mean = harmonic_mean + (1 / dizi[c]);
			cout << "// HARMONIL ORTALMA DEGERI : " << 4 / harmonic_mean << endl;
		}
		for (int e = 0; e < 10; e++) {
			for (int f = 0; f < 0 ; f++) {
				if (geometric_means[e] == ortalama) {
					cout << " // ORTALAMA DEGERINE ESIT SINUS DEGERI : " << geometric_means[e] << endl;
				}
				if (geometric_means[e] > ortalama) {

					cout << " // ORTALAMA DEGERINDEN BUYUK SINUS DEGERLERI :  " << geometric_means[e] << endl; 
				}
			}
		}
	for (int i = 0; i < 4; i++) {
		for (int j = i + 1; j < 4; j++) {
			if (dizi[i] == dizi[j]) {
				cout << "// TEKRAR EDEN SAYI VAR : " << dizi[i] << endl;
			}
		}
		
		
		
		
		
		
		

	}

		for (int g = 0; g < 4; g++) {
			for (int z = 0; z < 4; z++) {
				geometric_means[g] = dizi[z] / 180.0f * PI;
				cout << " // DIZIDEKI ACI DEGERLERININ RADYAN KARSILIKLARI : " << geometric_means[g] << endl;
				if (geometric_means[g] == 30 * PI / 180.0f) { 
					cout << " // DIZIDEKI ACI DEGERLERINDEN 30 DERECEYE ESIT OLAN VAR : " << geometric_means[g] << endl;	
				}
			}
		}
