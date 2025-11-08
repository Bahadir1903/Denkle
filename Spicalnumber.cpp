//rastgele girilen pozitif bir tam sayının asal olup olmadığını bulan c++ programı yazınız
#include <conio.h>
#include <math.h> 
#include<iostream>

using namespace std;

int main()
{
 //  int x;
 //   int y;
 //   int z;
	//cout << " Pozitif bir tam sayi giriniz : ";
 //   cin >> x;
 //   if (x < 0) {
	//	cout << " Lutfen pozitif bir tam sayi giriniz. " << endl;   
	//	cin >> x; 
 //   }
 //   if (x == 0) {
 //               cout << " Lutfen pozitif bir tam sayi giriniz. " << endl;
	//			return 0;
 //   }
 //   if (x == 1) {
 //       cout << x << " Sayisi asal degildir . " << endl;
 //   }
 //   
 //   else {
 //       y = 0;
 //       for (int i = 2; i <=sqrt (x ) ; i++) { // sqrt ile x in karekökünü alıyoruz 
 //           if (x % i == 0) { //
 //               y = 1; 
 //               break;
 //           }
 //       }
 //       if (y == 0) { // y değişkeni 0 ise asal sayı demektir 
 //           cout << x << " Sayisi asaldir . " << endl;
 //       }
	//	else { // farklı bir bölen bulunduysa asal değildir . 
 //           cout << x << " Sayisi asal degildir . " << endl;
 //       }
	//}
        int sayi = 0, i;
        bool kontrol = false;
        cout << "Lutfen pozitif bir tam sayi giriniz (1 ile 32767 arasinda):";
        cin >> sayi;
        if (sayi > 1)
        {
            for (i = 2; i <= sayi / 2 + 1; i++)
            {
                cout << sayi << " sayisinin " << i << " sayisina tam bolunup bolunmedigi kontrol edildi" << endl;
                if (sayi % i == 0)
                {
                    kontrol = true;
                    //break;
                }
            }

            cout << sayi << " sayisi ";
            if (kontrol == false)
            {
                cout << "asaldir" << endl;
            }
            else
            {
                cout << "asal degildir" << endl;
            }
        }
        else
        {
            cout << "Sadece 1'den buyuk pozitif sayilarin asal olup olmadigi kontrol edilebilir" << endl;
        }
        getch();
    }
   



