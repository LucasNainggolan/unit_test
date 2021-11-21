#include "tutorial1.hpp"

int absolut(int x){
    //mengembalikan nilai absolut
    if(x>=0){
        return x;
    }else{
        return -x;
    }
}

int kuadrat(int x){
    //mengembalikan nilai kuadrat
    return x*x;
}

int fibbo(int x){
    // mengembalikan suku ke x deret fibbonacci
    int temp;
    int suku_sebelumnya = 0;
    int hasil = 1;
    for(int i = 1; i< x; i++){
        temp = hasil;
        hasil += suku_sebelumnya;
        suku_sebelumnya = temp;
    }
    return hasil;
}

int max(int x, int y){
    // mengembalikan nilai terbesar antara x dan y
    if(x>=y){
        return x;
    }
    else{
        return y;
    }
}