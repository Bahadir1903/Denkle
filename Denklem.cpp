#include<stdlib.h>
#include <conio.h>
#include <iostream>
#include <math.h>
using namespace std;


int main()
{
    int dizi[10];
    int temp; // Geçici değişken 


    cout << "10 adet sayı giriniz:\n";
    for (int i = 0; i < 10; i++) { //Girdiğimiz sayıları diziye atıyoruz .
        cin >> dizi[i];
    }


    for (int i = 0; i < 10 - 1; i++) { //diziyi küçükten büyüğe sıralıyoruz 
        for (int j = 0; j < 10 - 1 -i ; j++) { // Bubble Sort algoritması 
            if (dizi[j] > dizi[j + 1]) { // yanlış sıradaysa yer değiştir 
                temp = dizi[j]; // Geçici değişken 
                dizi[j] = dizi[j + 1]; // Yer  değiştir 
                dizi[j + 1] = temp; // Geçici değişkeni geri ata 
                cout << "Karşılaştırılan İki sayı ";
                cout << dizi[j] << " " << dizi[j + 1] << endl;// Karşılaştırılan iki sayıyı ekrana yazdırıyoruz 
                for (int k = 0; k < 10; k++) { // Dizideki sayıların içeriğini aynen yazdırır .

					cout << dizi[k] << " "; // Diziyi ekrana yazdırıyoruz 
               }
                // slash kaldır tekrar dene fotodaki 
            } 
        }
    }


    cout << "Sıralanmış dizi: "; // Sıralanmış diziyi ekrana yazdırıyoruz 
    for (int i = 0; i < 10; i++) { // Sıralanmış diziyi ekrana yazdırıyoruz 
        cout << dizi[i] << " "; // Sıralanmış diziyi ekrana yazdırıyoruz 
    }
    cout << endl;
    // Farklı bir sürü sayı sıralaması için algoritmayı kullanabiliriz 
    // Ödev olarak çıkar. 
    //quick soft da farklı bir algoritma 

    return 0;
}