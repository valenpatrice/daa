include <iostream>
using namespace std;

int main(){
    int a = 10;
    int b = 5;
    int c, pil;

    pilihan:
        cout<<"0.exit"<<endl;
        cout<<"1.penjumlahan"<<endl;
        cout<<"pilihan : ";
        cin>>pil;
        system("clear");

    if(pil==0){
        cout<<"Thanks"<<endl;
        return 0;
    }else if(pil==1){
        c=a+b;
        cout<<c<<endl;
        goto pilihan;
    }else if(pil==2){
        for(int a=1; a<=3; a++)
            cout<< a <<endl;
        }
    goto pilihan;
    }else{
        cout<<"Pilihan salah"<<endl;
        goto pilihan;
    }

    return 0;
}