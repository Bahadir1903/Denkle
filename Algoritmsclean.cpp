#include <iostream>
#include <cmath> // math.h yerine cmath kullanıldı
#include <numeric> // Ek olarak bazı modern fonksiyonlar için eklenebilir, ancak burada kullanılmadı.

// conio.h kaldırıldı

// PI sabiti (float olarak)
constexpr float PI = 3.14159265f;

// Fonksiyonları std:: ile çağırmak daha iyi bir C++ uygulamasıdır.
// using namespace std; satırı kaldırıldı.

int main()
{
    float dizi[4];
    float temp;
    float ortalama = 0.0f; // Başlatma eklendi
    float sin30 = 0.5f;
    float geometric_mean = 1.0f; // Çarpım için 1.0f ile başlatıldı

    // geometric_means[10] ve gepmetric_means[10] tanımlarından biri gereksizdi, geometric_means[10] korundu.
    float geometric_means[10];
    float harmonic_mean_toplami = 0.0f; // Harmonik ortalama için toplam değişkeni
    float harmonic_mean = 0.0f;

    // Sinüs değerlerini saklayacak dizi (10 açı için)
    int angles[10] = { 30, 60, 120, 180, 210, 240, 270, 300, 330, 360 }; // angles dizisi kullanıldı çünkü sabit değeri var  

    // Açıları radyana çevirip sinüslerini hesapla ve diziye koy
    std::cout << "// Sinüs Değerlerinin Hesaplanması" << std::endl;
    for (int i = 0; i < 10; ++i) {
        float rad = angles[i] * PI / 180.0f;
        geometric_means[i] = std::sinf(rad);
        std::cout << "Sin(" << angles[i] << " derece) = " << geometric_means[i] << std::endl;
    }

    std::cout << "\n4 adet sayı giriniz:\n";
    for (int i = 0; i < 4; i++)
    {
        std::cout << "Sayı " << i + 1 << ": ";
        std::cin >> dizi[i];
    }

    // ---------- 1. Sıralama (Bubble Sort) ----------
    for (int i = 0; i < 4 - 1; i++)
    {
        for (int j = 0; j < 4 - 1 - i; j++)
        {
            if (dizi[j] > dizi[j + 1])
            {
                temp = dizi[j];
                dizi[j] = dizi[j + 1];
                dizi[j + 1] = temp;
            }
        }
    }
    std::cout << "\n--- Sonuçlar ---\n";
    std::cout << "Sıralanmış dizi: ";
    for (int i = 0; i < 4; i++) {
        std::cout << dizi[i] << " ";
    }
    std::cout << std::endl;

    // ---------- 2. Negatif Sayı Kontrolü ----------
    for (int k = 0; k < 4; k++) {
        if (dizi[k] < 0) {
            std::cout << "NEGATIF SAYI VAR: " << dizi[k] << std::endl;
        }
    }

    // ---------- 3. Sıfır Değeri Kontrolü (Hata düzeltildi: = yerine ==) ----------
    for (int m = 0; m < 4; m++) {
        if (dizi[m] == 0.0f) { // Karşılaştırma (==) kullanıldı
            std::cout << "SIFIR DEGERI VAR: " << dizi[m] << std::endl;
        }
    }

    // ---------- 4. Aritmetik Ortalama Hesabı (Çıktı döngü dışına alındı) ----------
    for (int l = 0; l < 4; l++) {
        ortalama += dizi[l];
    }
    ortalama /= 4.0f;
    std::cout << "ARITMETIK ORTALAMA DEGERI: " << ortalama << std::endl;

    // ---------- 5. Geometrik Ortalama Hesabı (Başlatma ve çıktı düzeltildi) ----------
    for (int a = 0; a < 4; a++) {
        geometric_mean *= dizi[a];
    }
    if (geometric_mean >= 0) { // Negatif sayılar için kontrol eklendi (kök alınamayabilir)
        geometric_mean = std::pow(geometric_mean, 1.0f / 4.0f);
        std::cout << "GEOMETRIK ORTALAMA DEGERI: " << geometric_mean << std::endl;
    }
    else {
        std::cout << "GEOMETRIK ORTALAMA HESAPLANAMADI: Negatif sayıların kök alınma sorunu." << std::endl;
    }

    // ---------- 6. Harmonik Ortalama Hesabı (Hassasiyet ve çıktı düzeltildi) ----------
    for (int c = 0; c < 4; c++) {
        if (dizi[c] != 0) { // Sıfıra bölme hatası önlendi
            harmonic_mean_toplami += (1.0f / dizi[c]); // 1.0f ile bölme hassasiyeti sağlandı
        }
        else {
            harmonic_mean_toplami = 0.0f; // Sıfır varsa harmonik ortalama tanımsızdır
            break;
        }
    }

    if (harmonic_mean_toplami != 0) {
        harmonic_mean = 4.0f / harmonic_mean_toplami;
        std::cout << "HARMONIK ORTALAMA DEGERI: " << harmonic_mean << std::endl;
    }
    else {
        std::cout << "HARMONIK ORTALAMA HESAPLANAMADI: Dizide 0 olduğu için." << std::endl;
    }

    // ---------- 7. sin(30) Kontrolü (Hata düzeltildi: = yerine == ve hassasiyet) ----------
    for (int b = 0; b < 4; b++) {
        // float değerler direkt olarak == ile kontrol edilmemeli, küçük bir aralık (epsilon) kullanılmalı
        if (std::abs(dizi[b] - sin30) < 0.0001f) {
            std::cout << "30 DERECE SINUSUNE ESIT SAYI VAR (0.5): " << dizi[b] << std::endl;
        }
    }

    // ---------- 8. Tekrar Eden Sayı Kontrolü ----------
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (dizi[i] == dizi[j]) {
                std::cout << "TEKRAR EDEN SAYI VAR: " << dizi[i] << std::endl;
            }
        }
    }

    // ---------- 9. Sinüs Değerleri ve Ortalama Karşılaştırması (Döngü düzeltildi) ----------
    std::cout << "\n// Sinüs Değerleri ve Aritmetik Ortalama (" << ortalama << ") Karşılaştırması:" << std::endl;
    for (int e = 0; e < 10; e++) {
        // İç döngü (f < 0 olan) tamamen gereksizdi, kaldırıldı.

        // Eşitlik kontrolü (Hata düzeltildi: = yerine == ve hassasiyet)
        if (std::abs(geometric_means[e] - ortalama) < 0.0001f) {
            std::cout << "ORTALAMA DEGERINE ESIT SINUS DEGERI: " << geometric_means[e] << std::endl;
        }

        // Büyüklük kontrolü
        if (geometric_means[e] > ortalama) {
            std::cout << "ORTALAMA DEGERINDEN BUYUK SINUS DEGERI: " << geometric_means[e] << std::endl;
        }
    }

    // ---------- 10. Dizideki Sayıların Radyan Karşılıkları ----------
    std::cout << "\n// Dizideki Sayıların Radyan Karşılıkları (Açı kabul edilirse):" << std::endl;
    for (int z = 0; z < 4; z++) {
        float radyan = dizi[z] / 180.0f * PI;
        std::cout << "DIZIDEKI ACI DEGERININ RADYAN KARSILIGI (" << dizi[z] << " derece kabulü): " << radyan << std::endl;

        // 30 derece kontrolü (Hata düzeltildi: hassasiyet kullanıldı)
        if (std::abs(radyan - (30.0f * PI / 180.0f)) < 0.0001f) {
            std::cout << "DIZIDEKI ACI DEGERLERINDEN 30 DERECEYE ESIT OLAN VAR: " << dizi[z] << std::endl;
        }
    }

    // std::system("pause"); // Gerekliyse eklenebilir, modern C++'ta tercih edilmez.
    return 0;
}