#include <iostream>
#include "Diem.h"

using namespace std;

int main() {
    
    Diem A(15.3, 27.7); 
    A.Xuat(); 
    
    A.TinhTien(1.5, -2.0); 
    A.Xuat(); 

    A.SetHoanhDo(10.0);
    A.SetTungDo(20.0);
    cout << "Hoanh do: " << A.GetHoanhDo() << ", Tung do: " << A.GetTungDo() << endl;

    return 0;
}

