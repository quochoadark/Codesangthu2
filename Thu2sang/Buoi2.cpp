#include <iostream>
using namespace std;
// BT1: Nhap day so gom 8 phan tu so nguyen 
// a) Sap xep tang dung interchange sort 
// b) Sap xep giam dung Selecttion Sort 
// C) Sap xep tang dung Bouble Sort 

// Ham chinh 
// int main(){
//     // bien nhap 
//     int n = 8;
//     int a[n];
//     // nhap lieu
//     cout << "Nhap day so gom 8 phan tu: ";
//     for (int i = 0; i < n; i++){
//         cin >> a[i];
//     }
//     // Xu ly cau a 
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = i + 1; j < n; j++) {
//             if (a[i] > a[j]) {
//             int temp = a[i];
//             a[i] = a[j];
//             a[j] = temp;
//             }
//         }
//     }
//     // Xuat cau a
//     cout << "Day so sau khi sap xep tang: ";
//     for (int i = 0; i < n; i++) {
//         cout << a[i] << " ";
//     }
//     // Xu ly cau b 
//     for (int i = 0; i < n - 1; i++) {
//     int minIndex = i;
//         for (int j = i + 1; j < n; j++) {
//             if (a[j] > a[minIndex]) {
//                 minIndex = j;
//         }
//     }
//     int temp = a[i];
//     a[i] = a[minIndex];
//     a[minIndex] = temp;
//     }
//     // Xuat cau b
//     cout << "\nDay so sau khi sap xep giam: ";
//     for (int i = 0; i < n; i++) {
//         cout << a[i] << " ";
//     }
//     // Xu ly cau c 
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < n - i - 1; j++) {
//             if (a[j] > a[j + 1]) {
//                 int temp = a[j];
//                 a[j] = a[j + 1];
//                 a[j + 1] = temp;
//             }
//         }
//     }
//     // Xuat cau c 
//     cout << "\nDay so sau khi sap xep tang: ";
//     for (int i = 0; i < n; i++) {
//         cout << a[i] << " ";
//     }
// }

// BT2: Nhap danh sach 8 ban SinhVien(Ten,Diem)
// a) Sap xep tang dung interchange sort 
// b) Sap xep giam dung Selecttion Sort 
// C) Sap xep tang dung Bouble Sort 

// # include <string>
// // Cau truc tu dinh nghia
// struct SinhVien{
//     string Ten;
//     float Diem;
// };
// // Ham Chinh 
// int main(){
//     // Bien nhap
//     int n = 8;
//     SinhVien a[n];
//     // Nhap lieu
//     for (int i = 0; i < n; i++) {
//     cout << "Nhap ten sinh vien thu " << i + 1 << ": ";
//     cin >> a[i].Ten;
//     cout << "Nhap diem cua sinh vien thu " << i + 1 << ": ";
//     cin >> a[i].Diem;
//     }
//     // Xu ly cau a 
//     for (int i = 0; i < n - 1; i++) {
//          for (int j = i + 1; j < n; j++) {
//             if (a[i].Diem < a[j].Diem) {
//                 SinhVien temp = a[i];
//                 a[i] = a[j];
//                 a[j] = temp;
//             }
//         }
//     }
//     // Xuat cau a 
//     cout << "\nDanh sach sinh vien sau khi sap xep giam dan theo diem:\n";
//     for (int i = 0; i < 8; i++) {
//         cout << a[i].Ten << " - " << a[i].Diem << endl;
//     }
//     // Xu ly cau b 
//     for (int i = 0; i < n - 1; i++) {
//     int minIndex = i;
//         for (int j = i + 1; j < n; j++) {
//             if (a[j].Diem > a[minIndex].Diem) {
//                 minIndex = j;
//             }
//          }
//         SinhVien temp = a[i];
//         a[i] = a[minIndex];
//         a[minIndex] = temp;
//         }
//     // Xuat cau b
//     cout << "\nDanh sach sinh vien sau khi sap xep tang dan theo diem:\n";
//     for (int i = 0; i < 8; i++){
//         cout << a[i].Ten << " - " << a[i].Diem << endl;
//     }
//     // Xu ly cau c 
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < n - i - 1; j++) {
//             if(a[j].Diem < a[j + 1].Diem) {
//                 SinhVien temp = a[j];
//                 a[j] = a[j + 1];
//                 a[j + 1] = temp;
//             }
//         }
//     }
//     // Xuat cau c
//     cout << "\nDanh sach sinh vien sau khi sap xep giam dan theo diem:\n";
//     for (int i = 0; i < 8; i++){
//         cout << a[i].Ten << " - " << a[i].Diem << endl;
//     }
// }

// BT3: Nhap danh sach  gom 8 hinh chu nhat (Dai va Rong)
// Cau truc tu dinh nghia
// struct HINHCHUNHAT {
//     float Dai;
//     float Rong;
//     float DienTich;
// };
// // Ham Chinh 
// int main(){
//     // Bien nhap
//     int n = 8;
//     HINHCHUNHAT a[n];
//     // Nhap lieu
//     for (int i = 0; i < n; i++) {
//             cout << "Nhap dai HCN thu " << i + 1 << ": ";
//             cin >> a[i].Dai;
//             cout << "Nhap rong HCN thu " << i + 1 << ": ";
//             cin >> a[i].Rong;
//             // Tinh dien tich HCN
//             a[i].DienTich = a[i].Dai * a[i].Rong;
//         }
//     // Xu ly cau a 
//     for (int i = 0; i < n; i++) {
//         cout << "\nDien tich HCN thu " << i + 1 << ": ";
//     }
//     // Xu ly cau b
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = i + 1; j < n; j++) {
//             if (a[i].DienTich > a[j].DienTich) {
//                 HINHCHUNHAT temp = a[i];
//                 a[i] = a[j];
//                 a[j] = temp;
//             }
//         }
//     }
//     // Xuat cau b
//     cout << "\nDanh sach sinh vien sau khi sap xep tang dan theo diem:\n";
//     for (int i = 0; i < 8; i++) {
//         cout << a[i].DienTich<< endl;
//     }
//     // Xu ly cau c 
//     for (int i = 0; i < n - 1; i++) {
//         int minIndex = i;
//         for (int j = i + 1; j < n; j++) {
//             if (a[j].DienTich < a[minIndex].DienTich) {
//                 minIndex = j;
//             }
//         }
//             HINHCHUNHAT temp = a[i];
//             a[i] = a[minIndex];
//             a[minIndex] = temp;
//     }
//     // Xuat cau c
//     cout << "\nDanh sach sinh vien sau khi sap xep giam dan theo diem:\n";
//     for (int i = 0; i < 8; i++) {
//         cout << a[i].DienTich<< endl;
//     }
//     // Xu ly cau d 
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = n - 1; j > i; j--) {
//             if (a[j].DienTich > a[j - 1].DienTich) {
//                 HINHCHUNHAT temp = a[j];
//                 a[j] = a[j - 1];
//                 a[j - 1] = temp;
//             }
//         }
//     }
//     // Xuat cau d
//     cout << "\nDanh sach sinh vien sau khi sap xep tang dan theo diem:\n";
//     for (int i = 0; i < 8; i++) {
//         cout << a[i].DienTich<< endl;
//     }
// }

// BT4: Nhap danh sach gom 8 diem (x,y,KhoangCach)
// Cau truc tu dinh nghia
struct ToaDo {
    float x;
    float y;
    float KhoangCach;
};
// Ham Chinh 
int main(){
    // Bien nhap
    int n = 8;
    ToaDo a[n];
    // Nhap lieu
    for (int i = 0; i < n; i++) {
            cout << "Nhap toa do x thu " << i + 1 << ": ";
            cin >> a[i].Dai;
            cout << "Nhap toa y thu " << i + 1 << ": ";
            cin >> a[i].Rong;
            // Tinh Khoang cach
            a[i].KhoangCach = sqrt(pow(a[i].x-3,2) + pow(a[i].y-4,2))
        }
    // Xu ly cau a 
    for (int i = 0; i < n; i++) {
        cout << "\nDien tich HCN thu " << i + 1 << ": ";
    }
    // Xu ly cau b
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i].KhoangCach < a[j].KhoangCach) {
                ToaDo temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    // Xuat cau b
    cout << "\nDanh sach sinh vien sau khi sap xep giam dan theo diem:\n";
    for (int i = 0; i < 8; i++) {
        cout << a[i].KhoangCach<< endl;
    }
    // Xu ly cau c 
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j].KhoangCach > a[minIndex].KhoangCach) {
                minIndex = j;
            }
        }
            ToaDo temp = a[i];
            a[i] = a[minIndex];
            a[minIndex] = temp;
    }
    // Xuat cau c
    cout << "\nDanh sach sinh vien sau khi sap xep tang dan theo diem:\n";
    for (int i = 0; i < 8; i++) {
        cout << a[i].KhoangCach<< endl;
    }
    // Xu ly cau d 
    for (int i = 0; i < n - 1; i++) {
        for (int j = n - 1; j > i; j--) {
            if (a[j].KhoangCach < a[j - 1].KhoangCach) {
                ToaDo temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }
        }
    }
    // Xuat cau d
    cout << "\nDanh sach sinh vien sau khi sap xep giam dan theo diem:\n";
    for (int i = 0; i < 8; i++) {
        cout << a[i].KhoangCach<< endl;
    }
}

// BT5: Nhap day so gom 8 phan tu 
// a) Dung ham con sort giam interchange sort 
// b) Dung ham con sort giam Selection sort 
// c) Dung ham con sort tang Double sort 
// Ham con interchange sort
void SapXepInterchangeSort(int a[])
{
  for (int i = 0; i < 7; i++)
  {
    for (int j = i + 1; j < 8; j++)
    {
      if (a[i] < a[j])
      {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }
}   
// Ham con selection sort 
void SapXepSelectionSort(int a[])
{
  for (int i = 0; i < 7; i++)
  {
    int min_index = i;
    for (int j = i + 1; j < 8; j++)
    {
      if (a[j] < a[min_index])
      {
        min_index = j;
      }
    }
    int temp = a[i];
    a[i] = a[min_index];
    a[min_index] = temp;
  }
}
// Ham con buble sort 
void SapXepDoubleSort(int a[])
{
  for (int i = 0; i < 7; i++)
  {
    for (int j = i + 1; j < 8; j++)
    {
      if (a[i] > a[j])
      {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
    for (int j = 7 - i; j > i; j--)
    {
      if (a[j] < a[j - 1])
      {
        int temp = a[j];
        a[j] = a[j - 1];
        a[j - 1] = temp;
      }
    }
  }
}
// Ham chinh
int main(){
  int a[8] = {1, 5, 3, 2, 8, 7, 6, 4};

  // Sắp xếp dãy số giảm dần
  SapXepInterchangeSort(a);
  for (int i = 0; i < 8; i++)
  {
    cout << a[i] << " ";
  }
  // Sắp xếp dãy số giảm dần
  SapXepSelectionSort(a);
  for (int i = 0; i < 8; i++)
  {
    cout << a[i] << " ";
  }
  // Sắp xếp dãy số tăng dần
  SapXepDoubleSort(a);
  for (int i = 0; i < 8; i++)
  {
    cout << a[i] << " ";
  }
}

