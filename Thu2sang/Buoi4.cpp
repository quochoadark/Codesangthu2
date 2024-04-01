# include <iostream>
# include <vector>
using namespace std;
// Bài 1: Nhập danh sách gồm 8 phân tử dùng Vector
// a) Xuat danh sach ra man hinh  b) Sap xep danh sach theo thuat toan Selection Sort giam dan 
// c) Tinh tong cac phan tu trong danh sach, tim max trong danh sach
// Ham chinh 
int main(){
    // Khai bao vector co 8 phan tu 
    vector<int> v(8);
    // Nhap tung phan tu  
    for(int i=0;i<v.size();i++){
        cin >> v[i];
    }
    cout << "Day vua nhap la: "<<endl;
    for(int i=0;i<v.size();i++){
        cout << v[i] <<" ";
    }

    // Sắp xếp danh sách theo thuật toán Selection Sort giảm dần
    for (int i = 0; i < v.size() - 1; i++) {
        for (int j = i + 1; j < v.size(); j++) {
            if (v[i] < v[j]) {
                int tmp = v[i];
                v[i] = v[j];
                v[j] = tmp;
            }
        }
    }
    cout <<"Sau khi sap xep giam dan la: "<<endl;
    for(int i=0;i<v.size();i++){
        cout << v[i] <<" ";
    }
    // Tính tổng các phần tử trong danh sách
    int sum = 0;
    for (int i = 0; i < v.size(); i++) {
         sum += v[i];
    }

    // Tìm giá trị lớn nhất trong danh sách
    int max = v[0];
    for (int i = 1; i < v.size(); i++) {
        if (v[i] > max) {
            max = v[i];
        }
    }
    cout << "\n\nTong cac gia tri co trong danh sach: " << sum;
    cout << "\n Gia tri lon nhat co trong danh sach: " << max;
}

// Bai 2: Nhap danh sach voi so phan tu bat ky
// a) Them phan tu vao vi tri so 4, xuat danh sach  b) Them day so 2,3,4 vao vi tri so 5, xuat dánh sach
// c) Xoa phan tu so 6, xuat danh sach   d) Xoa phan tu tu vi tri 3 den 5, xuat danh sach 
// Ham chinh
int main(){
    // Bien nhap
    vector<int> v;
    int n;
    cout << "Nhập số phần tử: ";
    cin >> n;

  // Nhập lieu
    for (int i = 0; i < n; i++) {
        int x;
        cout << "Nhập phần tử thứ " << i + 1 << ": ";
        cin >> x;
        v.push_back(x);
    }
    // Thêm phần tử vào vị trí số 4
    int value;
    cout << "Nhập giá trị muốn thêm vào vị trí số 4: ";
    cin >> value;
    v.insert(v.begin() + 4, value);
     // Xuất danh sách  
    cout << "Danh sách sau khi thêm: ";
    for (int i = 0; i < v.size(); i++) {
         cout << v[i] << " ";
    }
    cout << endl;
    // Thêm dãy số 2; 3; 4 vào vị trí số 5
     vector<int> v2 = {2, 3, 4};
     v.insert(v.begin() + 5, v2.begin(), v2.end());

    // Xuất danh sách
    cout << "Danh sách sau khi thêm: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    // Xóa phần tử số 6
    v.erase(v.begin() + 6);
    // Xuất danh sách
    cout << "Danh sách sau khi xóa: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    // Xóa phần tử từ vị trí 3 đến 5
    v.erase(v.begin() + 3, v.begin() + 5);
    // Xuất danh sách
    cout << "Danh sách sau khi xóa: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

// Nhap danh sach gom 8 phan tu HANGHOA (Ten,SoLuong,DonGia,ThanhTien)
// a) Xuat danh sach ra man hinh (DS[i].ThanhTien = DS[i].DonGia * DS[i]SoLuong)
// b) Sap xep Thanh Tien theo Selection Sort giam dan  c) Tinh tong so luong hang trong danh sach, tim max ThanhTien trong danh sach 
// Cau truc tu dinh nghia 
struct HANGHOA {
    string Ten;
    int SoLuong;
    float DonGia;
    float ThanhTien;
};
// Ham chinh
int main(){
    // Bien nhap
    vector<HANGHOA> Ds(8);
    // Nhap lieu 
     for (int i = 0; i < Ds.size(); i++) {
        cout << "Nhập tên hàng hóa " << i + 1 << ": ";
        cin >> Ds[i].Ten;
        cout << "Nhập số lượng hàng hóa " << i + 1 << ": ";
        cin >> Ds[i].SoLuong;
        cout << "Nhập đơn giá hàng hóa " << i + 1 << ": ";
        cin >> Ds[i].DonGia;
        Ds[i].ThanhTien = Ds[i].DonGia * Ds[i].SoLuong;
   }
   // Bien xuat 
    cout << endl << "Danh sách hàng hóa:" << endl;
    for (int i = 0; i < Ds.size(); i++) {
        cout << "STT " << i + 1 << ": " << endl;
        cout << "Tên hàng hóa: " << Ds[i].Ten << endl;
        cout << "Số lượng: " << Ds[i].SoLuong << endl;
        cout << "Đơn giá: " << Ds[i].DonGia << endl;
        cout << "Thành tiền: " << Ds[i].ThanhTien << endl;
   }
    // Sắp xếp danh sách giam dan 
    for (int i = 0; i < Ds.size() - 1; i++) {
         for (int j = i + 1; j < Ds.size(); j++) {
             if (Ds[i].ThanhTien < Ds[j].ThanhTien) {
                 int tmp = Ds[i].ThanhTien;
                 Ds[i].ThanhTien = Ds[j].ThanhTien;
                 Ds[j].ThanhTien = tmp;
             }
         }
    } 
    // Xuất danh sách
    cout << endl << "Danh sách hàng hóa sau khi sắp xếp:" << endl;
    for (int i = 0; i < Ds.size(); i++) {
        cout << "STT " << i + 1 << ": " << endl;
        cout << "Tên hàng hóa: " << Ds[i].Ten << endl;
        cout << "Số lượng: " << Ds[i].SoLuong << endl;
        cout << "Đơn giá: " << Ds[i].DonGia << endl;
        cout << "Thành tiền: " << Ds[i].ThanhTien << endl;
    }

   // Tính tổng số lượng hàng
    int TongSoLuong = 0;
    for (int i = 0; i < Ds.size(); i++) {
        TongSoLuong += Ds[i].SoLuong;
    }

  // Tìm max ThanhTien
     float MaxThanhTien = Ds[0].ThanhTien;
    for (int i = 1; i < Ds.size(); i++) {
        if (Ds[i].ThanhTien > MaxThanhTien) {
            MaxThanhTien = Ds[i].ThanhTien;
        }
   }
   // Xuất kết quả
    cout << endl << "Tổng số lượng hàng: " << TongSoLuong << endl;
    cout << "Hàng hóa có giá trị lớn nhất: " << endl;
    for (int i = 0; i < Ds.size(); i++) {
        if(Ds[i].ThanhTien == MaxThanhTien) {
            cout << "Tên hàng hóa: " << Ds[i].Ten << endl;
            cout << "Số lượng: " << Ds[i].SoLuong << endl;
            cout << "Đơn giá: " << Ds[i].DonGia << endl;
            cout << "Thành tiền: " << Ds[i].ThanhTien << endl;
        }
    }
}

// Bai 4: Nhap danh sach gom vi tri cac diem GPS dung vector
// a) Tim khoang cach cac diem so voi diem goc A (2;3)
// b) Voi cac diem co ban kinh > 10km thi thuc hien xoa. Cho biet cac tram con lai 
// Cau truc tu dinh nghia
struct DiemGPS {
  float x;
  float y;
};
// Ham chinh 
int main(){
    // Bien nhap
     vector<DiemGPS> dsDiem;
    // Nhap lieu 
    int n;
    cout << "Nhap so luong diem GPS: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        DiemGPS diem;
        cout << "Nhap toa do diem GPS thu " << i + 1 << ": ";
        cin >> diem.x >> diem.y;
        dsDiem.push_back(diem);
    }
     // Tìm khoảng cách các điểm so với điểm gốc A (2; 3)
    cout << "\nKhoang cach cac diem so voi diem goc A (2; 3):" << endl;
    for (int i = 0; i < n; i++) {
         float khoangCach = sqrt(pow(dsDiem[i].x - 2, 2) + pow(dsDiem[i].y - 3, 2));
        cout << "Diem " << i + 1 << ": " << khoangCach << "km" << endl;
    }
    // Xóa các điểm có bán kính > 10km
    int soDiemXoa = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (sqrt(pow(dsDiem[i].x - 2, 2) + pow(dsDiem[i].y - 3, 2)) > 10) {
            dsDiem.erase(dsDiem.begin() + i);
            soDiemXoa++;
        }
    }
    // In số lượng trạm còn lại
    cout << "\nSo luong tram con lai: " << n - soDiemXoa << endl;
}