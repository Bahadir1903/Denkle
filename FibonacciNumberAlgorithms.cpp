// FibonacciNumberAlgorithms.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//
#include <cmath>
#include <math.h>
#include <conio.h>
#include <iostream>
#include <array>
#include <limits>
using namespace std;

//--------eleman numarası klavyeden girilen fibonacci serisinin elemanını ekrana yazan c++ programı ------
int main()
{
	int x;
	int y;
	int z;
    int f0=0;
    int f1=1;
    int fhesap;
	//cout << " Fibonacci serisinin eleman numarasini giriniz : "; 
	//array< int, 1000> fib;// fibonacci serisi için 100 elemanlı dizi tanımlanması 
	//cin >> x;
	//fib[0] = 0; fib[1] = 1; // fibonacci serisinin ilk elemanları 
	//for (int i = 2; i < x; i++) {

	//	fib[i] = fib[i - 1] + fib[i - 2]; 
	//}
	//cout << " Fibonacci serisinin " << x << ". elemani : " << fib[x - 1] << endl;
	//return 0;  

 //   while (true) {
 //       cin >> x;
 //       if (x < 0) break; // Negatif sayı girilirse döngüden çık
 //       if (x == 0) {
 //           cout << " Fibonacci serisinin " << x << ". elemani : 0" << endl;
 //       }
 //       else if (x == 1) {
 //           cout << " Fibonacci serisinin " << x << ". elemani : 1" << endl;
 //       }
 //       else {
 //           y = 0;
 //           z = 1;
 //           for (int i = 2; i <= x; i++) {
 //               int temp = z;
 //               z = y + z;
 //               y = temp;
 //           }
 //           cout << " Fibonacci serisinin " << x << ". elemani : " << z -1 << endl;
 //       }
 //   }
 //    
 //   for ( ;;) { // sonsuz döngü 
 //       cin >> x;
 //       if (x < 0) break ; // Negatif sayı girilirse döngüden çık
 //       if (x == 0) {
 //           cout << " Fibonacci serisinin " << x << ". elemani : 0" << endl;
 //       }
 //       else if (x == 1) {
 //           cout << " Fibonacci serisinin " << x << ". elemani : 1" << endl;
 //       }
 //       else {
 //           f0 = 0;
 //           f1 = 1;
 //           for (int i = 2; i <= x; i++) {
 //               fhesap = f0 + f1;
 //               f0 = f1;
 //               f1 = fhesap; // fibonacci serisinde bir sonraki eleman hesaplanması
 //           }
 //           cout << " Fibonacci serisinin " << x << ". elemani : " << fhesap-1 << endl;
 //       }
	//}
    long long int fib1 = 0, fib2 = 1, siradaki = 0;
    cout << "Kacınci elemana kadar yazdirmak istersiniz ? : ";
    int eleman;
   cin >> eleman;
     // Bu satır muhtemelen fib1 (0) ve fib2 (1) zaten başlangıçta olduğu için döngüyü ayarlıyor.

    for (int i = 0; i < eleman; i++)
    {
        siradaki = fib1 + fib2;
        cout<<siradaki<<endl; // Bu satır yorum satırı yapılmış, yani elemanlar ekrana yazdırılmıyor.
        fib1 = fib2;
        fib2 = siradaki;
    }
    cout << "fibonacci serisinin " << eleman << ". elemanı " << siradaki;
	// "/n" endln arasında ki fark şudur  : endl ifadesi çıktıyı yazdırdıktan sonra tamponu temizler ve yeni satıra geçer. tampon = geçici bellek alanı 
    //rastgele girilen pozitif bir tam sayının asal olup olmadığını bulan c++ programı yazınız
}

