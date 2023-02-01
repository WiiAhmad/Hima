#include <iostream>
#include <cstring>
#include <conio.h>

using namespace std;
int jumlah, pilihan, pilihan2, total, harga;
string yn; 

main(){
    menu:
    cout << "PROJECT TUGAS AKHIR HIMA" << endl;
    cout << "-------------------------------" << endl;
    cout << "MENU :\t\t\tTotal belanja anda :" << total << endl;
    cout << "\t1. Makanan" << endl;
    cout << "\t2. Minuman" << endl;
    cout << "\t3. Sayur" << endl;
    cout << "\t4. Desserts" << endl;
    cout << "\t5. Exit" << endl;
    cout << "-------------------------------" << endl;
    cout << "Masukan pilihan anda :"; cin >> pilihan;

    switch(pilihan){
        case 1:
        		system("cls");
            cout << "-------------------------------" << endl;
            cout << "Anda Memilih Makanan" << endl;
            cout << "1. Mie goreng Rp.10000" << endl;
            cout << "2. Nasi goreng Rp.15000" << endl;
            cout << "3. Ayam goreng Rp.20000" << endl;
            cout << "-------------------------------" << endl;
            cout << "Masukan pilihan anda : "; cin >> pilihan2;
            switch(pilihan2){
                case 1:
                system("cls");
                cout << "Anda memesan mie goreng, masukan jumlah yang ingin anda beli :";
                cin >> jumlah;
                harga = jumlah * 10000;
                total = harga + total;
                cout << "Total belanjaan anda adalah =" << total << endl;
                cout << "Apakah anda ingin membeli lagi? (y/n)"; cin >> yn;
                cout << pilihan2;
                    if(yn == "y" || yn == "Y"){
                    		system("cls");
                        goto menu;
                    }else if(yn == "n" || yn == "N"){
                        cout << "Terimakasih telah berbelanja :)" << endl;
                        getch();
                    }
                    break;
                case 2:
                system("cls");
                cout << "Anda memesan nasi goreng, masukan jumlah yang ingin anda beli :";
                cin >> jumlah;
                harga = jumlah * 15000;
                total = harga + total;
                cout << "Total belanjaan anda adalah =" << total << endl;
                cout << "Apakah anda ingin membeli lagi? (y/n)"; cin >> yn;
                    if(yn == "y" || yn == "Y"){
                    system("cls");
                        goto menu;
                    }else if(yn == "n" || yn == "N"){
                        cout << "Terimakasih telah berbelanja :)" << endl;
                        getch();
                    }
                    break;
                case 3:
                system("cls");
                cout << "Anda memesan ayam goreng, masukan jumlah yang ingin anda beli :";
                cin >> jumlah;
                harga = jumlah * 20000;
                total = harga + total;
                cout << "Total belanjaan anda adalah =" << total << endl;
                cout << "Apakah anda ingin membeli lagi? (y/n)"; cin >> yn;
                    if(yn == "y" || yn == "Y"){
                    system("cls");
                        goto menu;
                    }else if(yn == "n" || yn == "N"){
                        cout << "terima kasih telah berbelanja" << endl;
                        getch();
                    }
                default:
                cout << "ANDA SALAH MEMASUKAN PILIHAN!!!" << endl;
                goto menu;
                }
            break;
        case 2:
        		system("cls");
            cout << "-------------------------------" << endl;
            cout << "Anda Memilih Minuman" << endl;
            cout << "1. Es teh Rp.5000" << endl;
            cout << "2. Es Kelapa Rp.10000" << endl;
            cout << "3. Es jeruk Rp.7000" << endl;
            cout << "-------------------------------" << endl;
            cout << "Masukan pilihan anda : "; cin >> pilihan2;
            switch(pilihan2){
                case 1:
                system("cls");
                cout << "Anda memesan Es teh, masukan jumlah yang ingin anda beli :";
                cin >> jumlah;
                harga = jumlah * 5000;
                total = harga + total;
                cout << "Total belanjaan anda adalah =" << total << endl;
                cout << "Apakah anda ingin membeli lagi? (y/n)"; cin >> yn;
                cout << pilihan2;
                    if(yn == "y" || yn == "Y"){
                    system("cls");
                        goto menu;
                    }else if(yn == "n" || yn == "N"){
                        cout << "Terimakasih telah berbelanja :)" << endl;
                        getch();
                    }
                    break;
                case 2:
                system("cls");
                cout << "Anda memesan Es Kelapa, masukan jumlah yang ingin anda beli :";
                cin >> jumlah;
                harga = jumlah * 10000;
                total = harga + total;
                cout << "Total belanjaan anda adalah =" << total << endl;
                cout << "Apakah anda ingin membeli lagi? (y/n)"; cin >> yn;
                    if(yn == "y" || yn == "Y"){
                    system("cls");
                        goto menu;
                    }else if(yn == "n" || yn == "N"){
                        cout << "Terimakasih telah berbelanja :)" << endl;
                        getch();
                    }
                    break;
                case 3:
                system("cls");
                cout << "Anda memesan Es jeruk, masukan jumlah yang ingin anda beli :";
                cin >> jumlah;
                harga = jumlah * 7000;
                total = harga + total;
                cout << "Total belanjaan anda adalah =" << total << endl;
                cout << "Apakah anda ingin membeli lagi? (y/n)"; cin >> yn;
                    if(yn == "y" || yn == "Y"){
                    system("cls");
                        goto menu;
                    }else if(yn == "n" || yn == "N"){
                        cout << "Terimakasih telah berbelanja :)" << endl;
                        getch();
                    }
                default:
                cout << "ANDA SALAH MEMASUKAN PILIHAN!!!" << endl;
                goto menu;
                }
        case 3:
            system("cls");
            cout << "-------------------------------" << endl;
        	cout << "Anda memilih sayuran" << endl;
            cout << "Sayur sop iga Rp.15000" << endl;
            cout << "Sayur asem Rp.12000" << endl;
            cout << "Sayur lodeh Rp.11000" << endl;
            cout << "-------------------------------" << endl;
            cout << "masukan pilihan anda : "; cin >> pilihan2;
            switch(pilihan2){
                case 1:
                system("cls");
                cout << "Anda memesan sop iga, masukan jumlah yang ingin anda beli :";
                cin >> jumlah;
                harga = jumlah * 15000;
                total = harga + total;
                cout << "Total belanjaan anda adalah =" << total << endl;
                cout << "Apakah anda ingin membeli lagi? (y/n)"; cin >> yn;
                cout << pilihan2;
                    if(yn == "y" || yn == "Y"){
                    system("cls");
                        goto menu;
                    }else if(yn == "n" || yn == "N"){
                        cout << "Terimakasih telah berbelanja :)" << endl;
                        getch();
                    }
                    break;
                case 2:
                system("cls");
                cout << "Anda memesan sayur asem, masukan jumlah yang ingin anda beli :";
                cin >> jumlah;
                harga = jumlah * 12000;
                total = harga + total;
                cout << "Total belanjaan anda adalah =" << total << endl;
                cout << "Apakah anda ingin membeli lagi? (y/n)"; cin >> yn;
                    if(yn == "y" || yn == "Y"){
                    system("cls");
                        goto menu;
                    }else if(yn == "n" || yn == "N"){
                        cout << "Terimakasih telah berbelanja :)" << endl;
                        getch();
                    }
                    break;
                case 3:
                system("cls");
                cout << "Anda memesan sayur lodeh, masukan jumlah yang ingin anda beli :";
                cin >> jumlah;
                harga = jumlah * 11000;
                total = harga + total;
                cout << "Total belanjaan anda adalah =" << total << endl;
                cout << "Apakah anda ingin membeli lagi? (y/n)"; cin >> yn;
                    if(yn == "y" || yn == "Y"){
                    system("cls");
                        goto menu;
                    }else if(yn == "n" || yn == "N"){
                        cout << "Terimakasih telah berbelanja :)" << endl;
                        getch();
                    }
                default:
                cout << "ANDA SALAH MEMASUKAN PILIHAN!!!" << endl;
                goto menu;
                }
        case 4:
        		system("cls");
            cout << "-------------------------------" << endl;
        	cout << "Anda memilih desserts" << endl;
            cout << "Puding mangga    Rp.12000" << endl;
            cout << "Pai susu         Rp.5000" << endl;
            cout << "Waffle           Rp.10000" << endl;
            cout << "-------------------------------" << endl;
            cout << "masukan pilihan anda : "; cin >> pilihan2;
            switch(pilihan2){
                case 1:
                system("cls");
                cout << "anda memesan puding mangga, masukan jumlah yang ingin anda beli :";
                cin >> jumlah;
                harga = jumlah * 12000;
                total = harga + total;
                cout << "Total belanjaan anda adalah =" << total << endl;
                cout << "Apakah anda ingin membeli lagi? (y/n)"; cin >> yn;
                cout << pilihan2;
                    if(yn == "y" || yn == "Y"){
                    system("cls");
                        goto menu;
                    }else if(yn == "n" || yn == "N"){
                        cout << "Terimakasih telah berbelanja :)" << endl;
                        getch();
                    }
                    break;
                case 2:
                system("cls");
                cout << "Anda memesan pai susu, masukan jumlah yang ingin anda beli :";
                cin >> jumlah;
                harga = jumlah * 5000;
                total = harga + total;
                cout << "total belanjaan anda adalah =" << total << endl;
                cout << "Apakah anda ingin membeli lagi? (y/n)"; cin >> yn;
                    if(yn == "y" || yn == "Y"){
                    system("cls");
                        goto menu;
                    }else if(yn == "n" || yn == "N"){
                        cout << "Terimakasih telah berbelanja :)" << endl;
                        getch();
                    }
                    break;
                case 3:
                system("cls");
                cout << "Anda memesan waffle, masukan jumlah yang ingin anda beli :";
                cin >> jumlah;
                harga = jumlah * 10000;
                total = harga + total;
                cout << "Total belanjaan anda adalah =" << total << endl;
                cout << "Apakah anda ingin membeli lagi? (y/n)"; cin >> yn;
                    if(yn == "y" || yn == "Y"){
                    system("cls");
                        goto menu;
                    }else if(yn == "n" || yn == "N"){
                        cout << "Terimakasih telah berbelanja :)" << endl;
                        getch();
                    }
                default:
                    cout << "ANDA SALAH MEMASUKAN PILIHAN!!!" << endl;
                goto menu;
                }
        case 5:
            if(total > 1){
                cout << "Total belanjaan anda adalah =" << total << endl;
                cout << "Terimakasih telah berbelanja :)" << endl;
                getch();
            }else{
                cout << "Anda belum membeli apapun" << endl;
                getch();
            }
            break;
        default:
            cout << "ANDA SALAH MEMASUKAN PILIHAN!!!" << endl;
        goto menu;
	}
}