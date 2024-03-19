#include <iostream>
using namespace std;
// Tim kiem tuyen tinh

// Bài 1: tìm phần tử có giá trị gồm 8 phần tử và Đếm phần tử chẵn và dương 
// int main(){
//     int a[8];
//     for(int i=0;i<8;i++)
//     {  
//         cout << "Nhap phan tu thu: " << i + 1 << ": ";
//         cin >> a[i];
//     }
//     int cnt = 0;
//     for(int i = 0; i < 8; i++) 
//     {
//         if(a[i] == 8) 
//         {
//             cout << "Phan tu co gia tri x = 8 tai vi tri " << i + 1 << endl;
//             cnt++;
//         }
//     }
//     int countchan = 0;
//     int countduong = 0;
//     for (int i = 0; i < 8; i++) 
//     {
//         if (a[i] % 2 == 0) 
//         {
//             countchan++;
//         }
//         if(a[i] > 0)
//         {
//             countduong++;
//         }
//     }
//     cout << "So luong phan tu chan: " << countchan << endl;
//     cout << "So luong phan tu duong: " << countduong << endl;
// }

// Bài 2: Nhap danh sach phan tu bat ky. Tim so luong phan tu >= 5
// int main(){
//     cout <<"Nhap so luong phan tu cua mang: ";
//     int n;
//     cin >> n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cout <<"Nhap phan tu thu "<< i + 1 <<":";
//         cin >> a[i];
//     }
//     int cnt = 0;
//     for(int i=0;i<n;i++){
//         if(a[i]>=5){
//             cnt++;
//         }
//     }
//     cout <<"So luong phan tu >=5 la: "<<cnt;
// }

// Bài 3: Nhap day cac diem so cua SINHVIEN(Ten va Diem)
// Tim SV co diem >=8 và Tim SV co diem Min va Max
// struct HOCSINH{  
//     string Ten;
//     double Diem;
// };
// // ham chinh 
// int main(){
//     // bien nhap 
//     int n;
//     cin >> n;
//     HOCSINH a[n];
//     // nhap lieu 
//     for(int i=0;i<n;i++){
//         cout <<"Nhap ten hoc sinh thu "<<i+1 <<": ";
//         cin >> a[i].Ten;
//         cout <<"Nhap diem hoc sinh thu "<<i+1 <<": ";
//         cin >> a[i].Diem;
//     } 
//     // Xu ly sinh vien co diem > 8
//     for(int i=0;i<n;i++){
//         if(a[i].Diem >= 8){
//             cout << "Sinh vien co diem >8 la: "<<a[i].Ten<<endl;
//         }
//     }
//     // Xu ly sinh vien co diem cao nhat va thap nhat 
//     float diemMin = a[0].Diem;
//     float diemMax = a[0].Diem;
//     for (int i = 1; i < n; i++) {
//         if(a[i].Diem < diemMin){
//             diemMin = a[i].Diem;
//         }
//         if(a[i].Diem > diemMax){
//             diemMax = a[i].Diem;
//         }
//     }
//     cout << "Diem min: " << diemMin << endl;
//     cout << "Diem max: " << diemMax << endl;
// }

// Bài 4: Nhap ds HCN (dai rong)
// Tinh dien tich va tim hcn co dien tich >= 50m^2
// struct HinhChunhat{  
//     double Dai;
//     double Rong;
//     double DienTich;
// };
// // ham chinh 
// int main(){
//     // bien nhap 
//     int n;
//     cin >> n;
//     HinhChunhat a[n];
//     // nhap lieu 
//     for(int i=0;i<n;i++){
//         cout <<"Nhap vao chieu dai thu "<<i+1 <<": ";
//         cin >> a[i].Dai;
//         cout <<"Nhap vao chieu rong thu "<<i+1 <<": ";
//         cin >> a[i].Rong;
//     } 
//     // Xu ly tinh dien tich HCN 
//     for(int i=0;i<n;i++){
//         a[i].DienTich = a[i].Dai * a[i].Rong;
//         cout <<"Dien tich hinh chu nhat thu: "<<i + 1 <<": "<<a[i].DienTich<<endl;
//     }
//     // Xu ly dien tich HCN >= 50m^2
//     for(int i=0;i<n;i++){
//         if(a[i].DienTich >= 50){
//             cout <<"Dien tich hinh chu nhat >= 50m^2 thu: "<< i + 1<<"la: "<<a[i].DienTich<<endl;
//         }
//     }
// }

// Bài 5: Nhap danh sach cac diem co toa do(x,y,khoangcach)
// Xuat cac diem co khoang cach > 50 so voi toa do tram phat (5,12)
// #include <math.h>
// struct ToaDo{  
//     double x;
//     double y;
//     double KhoangCach;
// };
// // Ham chinh 
// int main(){
//     // bien nhap 
//     int n;
//     cin >> n;
//     ToaDo a[n];
//     // nhap lieu 
//     for(int i=0;i<n;i++){
//         cout <<"Nhap vao toa do x thu "<<i+1 <<": ";
//         cin >> a[i].x;
//         cout <<"Nhap vao toa do y thu "<<i+1 <<": ";
//         cin >> a[i].y;
//         // tinh khoang cach 
//         a[i].KhoangCach = sqrt(pow(5*a[i].x - 12*a[i].y,2) + pow(5*a[i].x - 12*a[i].y,2));
//         cout <<"Khoang cach thu "<<i+1<<": "<<a[i].KhoangCach<<endl;
//     } 
//     // Xu ly cac diem co toa do > 50
//     for(int i=0;i<n;i++){
//         if(a[i].KhoangCach > 50){
//             cout <<"Cac diem co toa do lon hon 50 la: "<<i+1<<a[i].KhoangCach<<endl;
//         }
//     }
// }

// Bài 6: Chèn 1 phần tử 12 vào vị trí i = 3 
// Ham chinh 
int main(){
    // Bien nhap
    int n = 8;
    int a[n];
    int i = 3;
    int x = 12;
    for(int i=0;i<n;i++){
        cin >> a[n];
    }
    // Xu ly
    for (int j = n - 1; j >= i; j--) {
        a[j + 1] = a[j];
    }
    a[i] = x;
    n++;
    // Bien xuat
    for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
}
}