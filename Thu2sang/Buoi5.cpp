# include <iostream>
using namespace std;
// Bai 1: Nhap danh sach lien ket la so nguyen
// a) Nhap 5 phan tu   b) In 5 phan tu ra man hinh 
// Cau truc tu dinh nghia
struct NUT {
  int GiaTri;
  NUT *pNext;
};
struct DSLK {
  NUT *pDau;
  NUT *pCuoi;
};
DSLK d;
// Ham chinh 
int main(){
    // Bien nhap 
    d.pDau = d.pCuoi = NULL;
    int n;
    cin >> n;
    // Nhap lieu 
    for (int i = 1; i <= n; i++) {
        NUT *p = new NUT;
        cout << "Nhap gia tri thu " << i << ": ";
        cin >> p->GiaTri;
        p->pNext = NULL;

        if (d.pDau == NULL) {
           d.pDau = d.pCuoi = p;
        } else {
           d.pCuoi->pNext = p;
           d.pCuoi = p;
        }
    }
    // Xuat ra 5 phan tu 
    NUT *p = d.pDau;
    while (p != NULL) {
    cout << p->GiaTri << " ";
    p = p->pNext;
  }
}
// Bai 2: Nhap dslk gom 5 phan tu 
// a) Dem so luong so duong trong ds / b) Tinh tong gia tri phan tu trong ds 
// Cau truc tu dinh nghia
struct NUT {
  int GiaTri;
  NUT *pNext;
};
struct DSLK {
  NUT *pDau;
  NUT *pCuoi;
};
DSLK d;
// Ham chinh 
int main(){
    // Bien nhap 
    d.pDau = d.pCuoi = NULL;
    int n;
    cin >> n;
    // Nhap lieu 
    for (int i = 1; i <= n; i++) {
        NUT *p = new NUT;
        cout << "Nhap gia tri thu " << i << ": ";
        cin >> p->GiaTri;
        p->pNext = NULL;

        if (d.pDau == NULL) {
           d.pDau = d.pCuoi = p;
        } else {
           d.pCuoi->pNext = p;
           d.pCuoi = p;
        }
    }
    // Xu ly cau a 
    int dem = 0;
    NUT *p = d.pDau;
    while (p != NULL) {
    if (p->GiaTri > 0) {
      dem++;
    }
    p = p->pNext;
   }
   // Xuat cau a 
    cout << "So luong so duong: " << dem << endl;
   // Xu ly cau b 
    int tong = 0;
    NUT *p = d.pDau;
    while (p != NULL) {
    tong += p->GiaTri;
    p = p->pNext;
   }
   // Xuat cau b
    cout << "Tong gia tri: " << tong << endl;
}
// Bai 3: Nhap dslk SINHVIEN(HoTen,Diem) gom 5 phan tu
// a) In ra cac sinh vien có diem >= 7  b) Cho biet sinh vien có diem cao nhat 
// Cau truc tu dinh nghia
struct SINHVIEN {
  string HoTen;
  float Diem;
  SINHVIEN *pNext;
};

struct DSLK {
  SINHVIEN *pDau;
  SINHVIEN *pCuoi;
};
DSLK d;
// Ham chinh
int main(){
    // Bien nhap 
    d.pDau = d.pCuoi = NULL;
    // Nhap lieu 
    for (int i = 1; i <= 5; i++) {
      SINHVIEN *p = new SINHVIEN;
      cout << "Nhap ho ten sinh vien thu " << i << ": ";
      cin >> p->HoTen;
      cout << "Nhap diem sinh vien thu " << i << ": ";
      cin >> p->Diem;
      p->pNext = NULL;

      if (d.pDau == NULL) {
        d.pDau = d.pCuoi = p;
      } else {
        d.pCuoi->pNext = p;
        d.pCuoi = p;
      }
    }
    // Xu ly cau a 
    cout << "Danh sach sinh vien co diem >= 7:" << endl;
    SINHVIEN *p = d.pDau;
    while (p != NULL) {
    if (p->Diem >= 7) {
      cout << "Ho ten: " << p->HoTen << endl;
      cout << "Diem: " << p->Diem << endl;
    }
    p = p->pNext;
   }
   // Xu ly cau b 
   SINHVIEN *p1 = d.pDau;
   SINHVIEN *pMax = NULL;
   while (p1 != NULL) {
    if (pMax == NULL || p1->Diem > pMax->Diem) {
      pMax = p1;
    }
    p1 = p1->pNext;
  }
  cout << "Sinh vien co diem cao nhat:" << endl;
  cout << "Ho ten: " << pMax->HoTen << endl;
  cout << "Diem: " << pMax->Diem << endl;
}
// Bai 4: Nhap danh sach lien ket HANGHOA (Ten,SoLuong,DonGia,ThanhTien)
// a) Tinh tong hoa don cua danh sach hang hoa b) Tim va lam tron so luong, tinh lai thanh tien   c) Tim hang hoa co thanh tien cao nhat 
// Cau truc tu dinh nghia
struct HANGHOA {
  string Ten;
  int SoLuong;
  float DonGia;
  float ThanhTien;
  HANGHOA *pNext;
};

struct DSLK {
  HANGHOA *pDau;
  HANGHOA *pCuoi;
};
DSLK d;
// Ham chinh 
int main(){
  // Bien nhap 
  d.pDau = d.pCuoi = NULL;
  int n;
  cout << "Nhap so luong hang hoa: ";
  cin >> n;
  // Nhap lieu 
  for (int i = 1; i <= n; i++) {
    HANGHOA *p = new HANGHOA;
    cout << "Nhap ten hang hoa thu " << i << ": ";
    cin >> p->Ten;
    cout << "Nhap so luong hang hoa thu " << i << ": ";
    cin >> p->SoLuong;
    cout << "Nhap don gia hang hoa thu " << i << ": ";
    cin >> p->DonGia;

    p->ThanhTien = p->SoLuong * p->DonGia;
    p->pNext = NULL;

    if (d.pDau == NULL) {
      d.pDau = d.pCuoi = p;
    } else {
      d.pCuoi->pNext = p;
      d.pCuoi = p;
    }
  }
  // Xu ly cau a 
  float tong = 0;
  HANGHOA *p1 = d.pDau;
  while (p1 != NULL) {
    tong += p1->ThanhTien;
    p1 = p1->pNext;
  }
  cout <<"Tong hoa don danh sach hang hoa la: "<<tong<< endl;
  // Xu ly cau c 
  HANGHOA *p2 = d.pDau;
  HANGHOA *pMax = NULL;
  while (p2 != NULL) {
    if (pMax == NULL || p2->ThanhTien > pMax->ThanhTien) {
      pMax = p2;
    }
    p2 = p2->pNext;
  }
  cout << "Hang hoa co thanh tien cao nhat:" << endl;
  cout << "Ten: " << pMax->Ten << endl;
  cout << "So luong: " << pMax->SoLuong << endl;
  cout << "Don gia: " << pMax->DonGia << endl;
  cout << "Thanh tien: " << pMax->ThanhTien << endl;
}