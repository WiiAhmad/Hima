#include <iostream>
#include <cstring>

int jumlah, pilihan, pilihan2 = 0, total, harga;
string yn; 

main(){
    menu:
    cout << "PROJECT TUGAS AKHIR HIMA" << endl;
    cout << "-------------------------------" << endl;
    cout << "MENU :" << endl;
    cout << "1. Makanan" << endl;
    cout << "2. Minuman" << endl;
    cout << "3. Sayur" << endl;
    cout << "4. Desserts" << endl;
    cout << "Masukan pilihan anda :";
    cin >> pilihan;

    switch(pilihan){
        case 1:
            cout << "anda memilih makanan" << endl;
            cout << "Mie goreng Rp.10000" << endl;
            cout << "Nasi goreng Rp.15000" << endl;
            cout << "Ayam goreng Rp.20000" << endl;
            cout << "masukan pilihan anda : "; cin >> pilihan2;
            switch(pilihan2){
                case 1:
                cout << "anda memesan mie goreng, masukan jumlah yang ingin anda beli :";
                cin >> jumlah;
                harga = jumlah * 10000;
                total = harga + total;
                cout << "total belanjaan anda adalah =" << total << endl;
                cout << "apakah anda ingin membeli lagi? "; cin >> yn;
                pilihan2 = 0;
                cout << pilihan2;
                    if(yn == "y" || yn == "Y"){
                        goto menu;
                    }else if(yn == "n" || yn == "N"){
                        cout << "terima kasih telah berbelanja" << endl;
                        return 0;
                    }
                break;
                case 2:
                cout << "anda memesan nasi goreng, masukan jumlah yang ingin anda beli :";
                cin >> jumlah;
                harga = jumlah * 15000;
                total = harga + total;
                cout << "total belanjaan anda adalah =" << total << endl;
                cout << "apakah anda ingin membeli lagi? "; cin >> yn;
                    if(yn == "y" || yn == "Y"){
                        goto menu;
                    }else if(yn == "n" || yn == "N"){
                        cout << "terima kasih telah berbelanja" << endl;
                        return 0;
                    }
                break;
                    case 3:
                cout << "anda memesan ayam goreng, masukan jumlah yang ingin anda beli :";
                cin >> jumlah;
                harga = jumlah * 20000;
                total = harga + total;
                cout << "total belanjaan anda adalah =" << total << endl;
                cout << "apakah anda ingin membeli lagi? "; cin >> yn;
                    if(yn == "y" || yn == "Y"){
                        goto menu;
                    }else if(yn == "n" || yn == "N"){
                        cout << "terima kasih telah berbelanja" << endl;
                        return 0;
                    }
                default:
                cout << "anda salah memasukan pilihan!!!" << endl;
                goto menu;
                }
        break;
        case 2:
        cout << "anda memilih minuman" << endl;
            cout << "Es teh Rp.5000" << endl;
            cout << "Es Kelapa Rp.10000" << endl;
            cout << "Es jeruk Rp.7000" << endl;
            cout << "masukan pilihan anda : "; cin >> pilihan2;
            switch(pilihan2){
                case 1:
                cout << "anda memesan Es teh, masukan jumlah yang ingin anda beli :";
                cin >> jumlah;
                harga = jumlah * 5000;
                total = harga + total;
                cout << "total belanjaan anda adalah =" << total << endl;
                cout << "apakah anda ingin membeli lagi? "; cin >> yn;
                pilihan2 = 0;
                cout << pilihan2;
                    if(yn == "y" || yn == "Y"){
                        goto menu;
                    }else if(yn == "n" || yn == "N"){
                        cout << "terima kasih telah berbelanja" << endl;
                        return 0;
                    }
                break;
                case 2:
                cout << "anda memesan Es Kelapa, masukan jumlah yang ingin anda beli :";
                cin >> jumlah;
                harga = jumlah * 10000;
                total = harga + total;
                cout << "total belanjaan anda adalah =" << total << endl;
                cout << "apakah anda ingin membeli lagi? "; cin >> yn;
                    if(yn == "y" || yn == "Y"){
                        goto menu;
                    }else if(yn == "n" || yn == "N"){
                        cout << "terima kasih telah berbelanja" << endl;
                        return 0;
                    }
                break;
                    case 3:
                cout << "anda memesan Es jeruk, masukan jumlah yang ingin anda beli :";
                cin >> jumlah;
                harga = jumlah * 7000;
                total = harga + total;
                cout << "total belanjaan anda adalah =" << total << endl;
                cout << "apakah anda ingin membeli lagi? "; cin >> yn;
                    if(yn == "y" || yn == "Y"){
                        goto menu;
                    }else if(yn == "n" || yn == "N"){
                        cout << "terima kasih telah berbelanja" << endl;
                        return 0;
                    }
                default:
                cout << "anda salah memasukan pilihan!!!" << endl;
                goto menu;
                }
        default:
            cout << "anda salah memasukan angka!!!" << endl;
                goto menu;

             case 3:
        		cout << "anda memilih sayuran" << endl;
            cout << "Sayur sop iga Rp.15000" << endl;
            cout << "Sayur asem Rp.12000" << endl;
            cout << "Sayur lodeh Rp.11000" << endl;
            cout << "masukan pilihan anda : "; cin >> pilihan2;
            switch(pilihan2){
                case 1:
                cout << "anda memesan sop iga, masukan jumlah yang ingin anda beli :";
                cin >> jumlah;
                harga = jumlah * 15000;
                total = harga + total;
                cout << "total belanjaan anda adalah =" << total << endl;
                cout << "apakah anda ingin membeli lagi? "; cin >> yn;
                pilihan2 = 0;
                cout << pilihan2;
                    if(yn == "y" || yn == "Y"){
                        goto menu;
                    }else if(yn == "n" || yn == "N"){
                        cout << "terima kasih telah berbelanja" << endl;
                        return 0;
                    }
                break;
                case 2:
                cout << "anda memesan sayur asem, masukan jumlah yang ingin anda beli :";
                cin >> jumlah;
                harga = jumlah * 12000;
                total = harga + total;
                cout << "total belanjaan anda adalah =" << total << endl;
                cout << "apakah anda ingin membeli lagi? "; cin >> yn;
                    if(yn == "y" || yn == "Y"){
                        goto menu;
                    }else if(yn == "n" || yn == "N"){
                        cout << "terima kasih telah berbelanja" << endl;
                        return 0;
                    }
                break;
                    case 3:
                cout << "anda memesan sayur lodeh, masukan jumlah yang ingin anda beli :";
                cin >> jumlah;
                harga = jumlah * 11000;
                total = harga + total;
                cout << "total belanjaan anda adalah =" << total << endl;
                cout << "apakah anda ingin membeli lagi? "; cin >> yn;
                    if(yn == "y" || yn == "Y"){
                        goto menu;
                    }else if(yn == "n" || yn == "N"){
                        cout << "terima kasih telah berbelanja" << endl;
                        return 0;
                    }
                default:
                cout << "anda salah memasukan pilihan!!!" << endl;
                goto menu;
                }


             case 4:
        		cout << "anda memilih desserts" << endl;
            cout << "Puding mangga Rp.12000" << endl;
            cout << "Pai susu Rp.5000" << endl;
            cout << "Waffle Rp.10000" << endl;
            cout << "masukan pilihan anda : "; cin >> pilihan2;
            switch(pilihan2){
                case 1:
                cout << "anda memesan puding mangga, masukan jumlah yang ingin anda beli :";
                cin >> jumlah;
                harga = jumlah * 12000;
                total = harga + total;
                cout << "total belanjaan anda adalah =" << total << endl;
                cout << "apakah anda ingin membeli lagi? "; cin >> yn;
                pilihan2 = 0;
                cout << pilihan2;
                    if(yn == "y" || yn == "Y"){
                        goto menu;
                    }else if(yn == "n" || yn == "N"){
                        cout << "terima kasih telah berbelanja" << endl;
                        return 0;
                    }
                break;
                case 2:
                cout << "anda memesan pai susu, masukan jumlah yang ingin anda beli :";
                cin >> jumlah;
                harga = jumlah * 5000;
                total = harga + total;
                cout << "total belanjaan anda adalah =" << total << endl;
                cout << "apakah anda ingin membeli lagi? "; cin >> yn;
                    if(yn == "y" || yn == "Y"){
                        goto menu;
                    }else if(yn == "n" || yn == "N"){
                        cout << "terima kasih telah berbelanja" << endl;
                        return 0;
                    }
                break;
                    case 3:
                cout << "anda memesan waffle, masukan jumlah yang ingin anda beli :";
                cin >> jumlah;
                harga = jumlah * 10000;
                total = harga + total;
                cout << "total belanjaan anda adalah =" << total << endl;
                cout << "apakah anda ingin membeli lagi? "; cin >> yn;
                    if(yn == "y" || yn == "Y"){
                        goto menu;
                    }else if(yn == "n" || yn == "N"){
                        cout << "terima kasih telah berbelanja" << endl;
                        return 0;
                    }
        		default:
            cout << "anda salah memasukan angka!!!" << endl;
                goto menu;
    }
	}
}