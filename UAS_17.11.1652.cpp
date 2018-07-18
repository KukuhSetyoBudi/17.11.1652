#include <iostream>
#include <string>
using namespace std;
class Kalkulator
{
    protected :
    float Bil1;
    float Bil2;
    long int Hasil;
    float Hasil1;
    long int Hasil2;
    float Hasil3;
    float Jumlah;
};
class Kalkulator_Science : public Kalkulator
{
private :
    public:
    void input()
    {
        cout<<"Kalkulator Science"<<endl;
        cout<<"Masukkan Bilangan Pertama 	: "; cin>>Bil1;
        cout<<"Masukkan Bilangan Kedua 	: "; cin>>Bil2;
    }
    void output()
    {
        	Hasil=Bil1 + Bil2 ;
            cout<<"Tambah 		= "<<Hasil<<endl;
            Hasil=Bil1 - Bil2 ;
            cout<<"Kurang 		= "<<Hasil<<endl;
            Hasil=Bil1 + Bil2;
            Hasil1=Hasil / 2;
            cout<<"rata-rata 	= "<<Hasil1<<endl;
            Hasil=Bil1 * Bil2;
            cout<<"Kali 		= "<<Hasil<<endl;
            Hasil3=Bil1 / Bil2;
            cout<<"Bagi 		= "<<Hasil3<<endl;
            Hasil=Bil1 * Bil2;
            Hasil2=Hasil / 100;
            cout<<"Persen 		= "<<Hasil2<<"%"<<endl;


    }
};

class Kalkulator_Dagang: public Kalkulator
{

    private :
    public:
        void input()
        {
            cout<<"Kalkulator Dagang "<<endl;
            cout<<"Masukkan Bilangan pertama: "; cin>>Bil1;
            cout<<"Masukkan Bilangan Kedua : "; cin>>Bil2;
        }
        void output()
        {
        	Hasil=Bil1 + Bil2 ;
            cout<<"Tambah 		= "<<Hasil<<endl;
            Hasil=Bil1 - Bil2 ;
            cout<<"Kurang 		= "<<Hasil<<endl;
            Hasil=Bil1 * Bil2;
            cout<<"Kali 		= "<<Hasil<<endl;
            Hasil3=Bil1 / Bil2;
            cout<<"Bagi 		= "<<Hasil3<<endl;
            Hasil=Bil1 + Bil2;
            Hasil1=Hasil * 5 / 100;
            Hasil2=Hasil - Hasil1;
            cout<<"Diskon 5% 	= "<<Hasil2<<endl;

        }
};
void keluar()
{
	cout<<"Anda Telah Keluar Dari Program"<<endl;
	exit(0);
}
    int main()
    {
    	atas :
        Kalkulator_Science Ks;
        Kalkulator_Dagang Kd;
        int pil;
        cout<<"==========================\n";
        cout<<"||	KALKULATOR	||"<<endl;
        cout<<"||1. Kalkulator Science	||"<<endl;
        cout<<"||2. Kalkulator Dagang  ||"<<endl;
        cout<<"||3. Keluar		||"<<endl;
        cout<<"==========================\n";
        cout<<"pilih : "; cin>>pil;
       
       
        if(pil==1)
        {
            Ks.input();
            Ks.output();
            cout<<endl;
            goto atas;
        }
        if (pil==2)
        {
            Kd.input();
            Kd.output();
            cout<<endl;
            goto atas;
        }
        if(pil==3)
        {
        	keluar();
        }
        return 0;
    }
