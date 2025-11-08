#include <iostream>
#include <string>
#include <array>
#include <limits> 

using namespace std;

struct Person { // kisi yapısı tanımlaması
    string isim;
    string soyisim;
    string sehir;
    string yas;
    string irk;
};

int main() {
   array<Person, 5> kisiler; // 5 kişilik array dizisi , kisiler olusturulması 
   // 5 kişi için person yapısında dizi oluşturuluyor 
 

    for (int i = 0; i < 5; ++i) {
        cout << "Kisi " << (i + 1) << " bilgileri:\n";

        cout << "Isim: ";    getline(std::cin, kisiler[i].isim); //  getline ile tam satır okunur 
        cout << "Soyisim: "; getline(std::cin, kisiler[i].soyisim);
        cout << "Sehir: ";    getline(std::cin, kisiler[i].sehir);
        cout << "Yas: ";      getline(std::cin, kisiler[i].yas);
        cout << "Irk: ";      getline(std::cin, kisiler[i].irk);
        cout << '\n';
    }

    // Girilen verileri yazdırma örneği
    cout << "--- Girilen Kayitlar ---\n";
    for (int i = 0; i < 5; ++i) {
        const auto& p = kisiler[i]; // const auto ile kisiler dizisinden referans alınıyor 
        // const auto& p ifadesi ile kisiler dizisindeki her bir eleman p olarak adlandırılıyor 
        cout << i + 1 << ": " << p.isim << " " << p.soyisim // p. isiim p ifadesi ile erişim sağlanıyor
            << ", Sehir: " << p.sehir << ", Yas: " << p.yas << ", Irk: " << p.irk << '\n';
    }

    return 0;
    //--------eleman numarası klavyeden girilen fibonacci serisinin elemanını ekrana yazan c++ programı ------


}