#include<iostream>
#include <string.h>
#include <conio.h>

using namespace std;
 

double func(double x)
{
    return x*x - 4; //f(x) = X^2 - 4
}
 

double a,b,c,ep;

void bisection(double a,double b)
{
    while ((b-a) >= ep)  //b-a >= Epsilon
	{
	    c = (a+b)/2;
	    if (func(c)*func(a) < 0)
		{     
	        b=c;
	    }
	    else
		{
	        a=c;
	    }
	} 
}
 
int main()
{
	menu:
	cout << "TUGAS METODE NUMERIK" << endl;
	cout << "PROGRAM BISECTION"<<endl<<endl;
	cout << "DAVID MARIO YOHANES SAMOSIR"<<endl;
	cout << "2115101055"<<endl;
	cout << "ILKOM - B"<<endl<<endl;
	
	//soal f(x) = X^2 - 4 , [0,5]
	cout << "Fungsi f(x) = X^2 - 4" <<endl;
	cout << "ENTER Untuk Input Batas-Batasnya!"<<endl;
	getch();
	cout << "\n" <<endl;
    cout << "Input Batas Awal = ";
	cin >> a; //batas awal
	cout << "Input Batas Akhir = ";
    cin >> b; //batas akhir
    cout << "Input Epsilon = ";
	cin >> ep; //batas awal
    bisection(a,b); 
    cout<<"\n";
    cout<<"Nilai Root dari Fungsi f(x)= "<<c<<endl<<endl;
    
    char ulang;
	cout <<"Ingin Hitung Lagi? (Y/N) :";
		cin >> ulang;
		cout <<endl;
		if (ulang == 'y' | ulang == 'Y'){
			system("cls");
			goto menu;
		}
		else{
			cout << "Terimakasih Sudah Menggunakan Program Ini :D";
		}
		return 0;
}
