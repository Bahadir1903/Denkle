
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <safeint.h>
#include <iostream>

using namespace std;

int main()
{
  
    
    float x=0, y=0;
    int sayaca = 0; 
    int sayacb = 0;
    int a, b = 0, c = 0, z = 0, k = 0;
    cout << "SAYI GIRINIZ :";
    cin >> a;
    while (a != 0) {
        if (a > 0) {
            c = a % 2; 
            if (c==1) {
                z = z + a;
                sayaca = sayaca + 1; 
         }
        }
        else {
            b = a % 2; 
            if (b == 0) {
                k = k + a;
                sayacb = sayacb -1 ; 
            }
		}
        cout << "SAYI GIRINIZ : ";
        cin >> a;
        
    }
	x = z / sayaca;
    y = k / sayacb;
    cout << "Pozitif tek sayilarin ortalamasi : " << x << endl;
    cout << "Negatif cift sayilarin ortalamasi : " << y * -1  << endl;


    
	return 0;
   
   
}


