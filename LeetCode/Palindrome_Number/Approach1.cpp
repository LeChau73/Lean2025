#include<iostream>
#include<math.h>
using namespace std;

bool isPalindrome(int x) {

    if(x > 0) {
        int numberes = static_cast<int>(log10(x)) + 1;
    }
    else {
        return 0;
    }
    
    if (numberes % 2 == 0) {
        int  phan_du1, phan_nguyen1, phan_du2, phan_nguyen2;
        //Số lượng là số chẵn
        int phan_nua = numberes / 2;
        int tach = static_cast<int>(pow(10, phan_nua));
        int nua_dau = x / tach;
        int nua_sau = x % tach;

         //Ở đây sẻ làm theo cách
         //4756 | 6574 theo ta thấy 4756 / 100 == 6574 % 10     
        for (int i = 0; i < phan_nua; i++)
        {
            //Luu du du cua phan dau
            phan_nguyen1 = nua_dau / static_cast<int>(pow(10, phan_nua-(i+1)));
            phan_du1 = nua_dau % static_cast<int>(pow(10, phan_nua-(i+1)));
            nua_dau = phan_du1;
            //Luu du nguyen cua phan sau
            phan_nguyen2 = nua_sau / 10;
            phan_du2 = nua_sau % 10;
            nua_sau = phan_nguyen2;
            
            if(phan_nguyen1 != phan_du2 ) {
                return 0;
            }

        }

        return 1;   

    } else {

        int  phan_du1, phan_nguyen1, phan_du2, phan_nguyen2;
        //Số lượng là số chẵn
        int phan_nua = numberes / 2;
        int tach = static_cast<int>(pow(10, phan_nua));
        int nua_dau = (x / tach) / 10;
        int nua_sau = x % tach;
        for (int i = 0; i < phan_nua; i++)
        {
            //Luu du du cua phan dau
            phan_nguyen1 = nua_dau / static_cast<int>(pow(10, phan_nua-(i+1)));
            phan_du1 = nua_dau % static_cast<int>(pow(10, phan_nua-(i+1)));
            nua_dau = phan_du1;
            //Luu du nguyen cua phan sau
            phan_nguyen2 = nua_sau / 10;
            phan_du2 = nua_sau % 10;
            nua_sau = phan_nguyen2;
            
            if(phan_nguyen1 != phan_du2 ) {
                return 0;
            }
        }

        return 1;   
    }
}

int main () {

    cout << "KQ:" << isPalindrome(74157);

    return 0; 
}