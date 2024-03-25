# include <bits/stdc++.h>
using namespace std;
// Bai 1: Cho 1 chuoi String va dao nguoc chuoi do su dung stack 
// Ham chinh 
int main(){
    // Bien nhap
    string Chuoi;
    stack<char> DanhSach;
    // Nhap lieu
    cout <<"Nhap chuoi can dao nguoc: ";
    cin >> Chuoi;
    // Xu ly
    for(int i=0;i<=Chuoi.length();i++){
        DanhSach.push(Chuoi[i]);
    }
    // Ket Xuat
    while(DanhSach.empty()!=true){
        cout << DanhSach.top();
        DanhSach.pop();
    }
}

// Nhap 1 so nguyen n vao chuyen thanh ma nhi phan sau do in ra chuoi 
// Ham con
stack<int> ChuyenNhiPhan(int n){
    stack<int> DS;
    while(n>0){
        DS.push(n%2);
        n/=2;
    }
    return DS;
}
// Ham xuat
void XuatStack(stack<int>DS){
    while(!DS.empty()){
        cout << DS.top();
        DS.top();
    }
}
// Ham Chinh
int main(){
    // Bien nhap, bien xuat
    int n;
    stack<int> DS;
    // Nhap lieu
    cout <<"Nhap so: ";
    cin >> n;
    // Xu ly
    DS = ChuyenNhiPhan(n);
    // Ket xuat
    XuatStack(DS);
}

// Cho mot xau s chi gom cac ky tu viet thuong, viet ham tra ve chuoi ma hoa cua xau nay 
// Ham chinh
int main(){
    // Bien nhap, bien xuat
    string Chuoi;
    stack<char>DS;
    // nhap lieu
    cout <<"Nhap chuoi can ma hoa: ";
    cin >> Chuoi;
    // Xu ly chuoi string thanh mang char
    for(int i=0;i<=Chuoi.length();i++){
        DS.push(Chuoi[i]);
    }
    // Xu ly
    int cnt = 1;
    char KyTuDau,KyTuSau
    while(!DS.empty()){
        KyTuDau = DS.top();
        DS.pop();
        // Kiem tra danh sach rong
        if(DS.empty()){
            break;
        }
        KyTuSau = DS.top();
        if(KyTuDau == KyTuSau){
            cout <<KyTuDau << cnt;
            cnt ++;
        }else{
            cout <<KyTuDau<<cnt;
            cnt = 1;
        }
    }
    cout << KyTuDau << cnt;
}

// Viet chuong trinh tinh tien VeMayBay(TenKh,SoLuong,GiaVe,NgayDangKy) su dung hang doi quere
// Ham chinh
struct VeMayBay{
    string tenKH;
    int SoLuong;
    int DonGia;
    long ThanhTien;
};
// HamChinh
int main(){
    // Bien nhap
    string Chuoi;
    VeMayBay v;
    queue<VeMayBay>DS;
    // Nhap lieu
    do{
        cout<<"Nhap thong tin khach hang: ";
        cin >> Chuoi;
        v.tenKH = Chuoi;
        cout <<"Nhap so luong: ";
        cin >> v.SoLuong;
        cout <<"Nhap don gia: ";
        cin >> v.DonGia;
        DS.push(v);
    }
    while(Chuoi[0]!='e');
    DS.pop();
    // Xu ly, ket xuat
    while(DS.size() != true){
        v = DS.front();
        v.ThanhTien = v.SoLuong * v.DonGia;
        cout <<"Ten hanh khach "<<v.tenKH;
        cout <<"Tong tien: "<<v.ThanhTien;
        DS.pop();
    }
}

// Viet chuong trinh nhap danh sach BenhNhan(Ten,SoluongThuoc,DonGia,NgayKham) va tinh thanh tien cho benh nhan theo thu tu queue 
// Ham chinh
struct BenhNhan{
    string tenKH;
    int SoLuong;
    int DonGia;
    long ThanhTien;
};
// Ham chinh 
int main(){
    // Bien nhap
    string Chuoi;
    BenhNhan v;
    queue<BenhNhan>DS;
    // Nhap lieu
    do{
        cout<<"Nhap thong tin khach hang: ";
        cin >> Chuoi;
        v.tenKH = Chuoi;
        cout <<"Nhap so luong: ";
        cin >> v.SoLuong;
        cout <<"Nhap don gia: ";
        cin >> v.DonGia;
        DS.push(v);
    }
    while(Chuoi[0]!='e');
    DS.pop();
    // Xu ly, ket xuat
    while(DS.size() != true){
        v = DS.front();
        v.ThanhTien = v.SoLuong * v.DonGia;
        cout <<"Ten hanh khach "<<v.tenKH;
        cout <<"Tong tien: "<<v.ThanhTien;
        DS.pop();
    }
    // Xu ly tien thuoc cao nhat 
    BenhNhan Max = DS.front();
    while(!DS.empty()){
        BenhNhan bn = DS.front();
        DS.pop();
        if(bn.ThanhTien > Max.ThanhTien){
            Max = bn;
        }
    }
    cout <<"Khach hang co tien thuoc cao nhat la: "<<Max;
}






