#include<iostream>
#include<fstream>
#include<string>
using namespace std;

struct Student {
    char msv[10], ten[10], lop[10];
    float diemthcs, diemc;
};

int main() {
    int N;
    cout << "Nhap so luong sinh vien: ";
    cin >> N;
    cin.ignore(); // Ignore the newline after entering N

    Student sv;
    fstream file("Sinhvien.dat", ios::in | ios::out | ios::binary | ios::trunc);  // Open file in read/write mode and clear contents (ios::trunc)

    // Input student data and write to file
    for (int i = 0; i < N; i++) {
        cout << "Nhap ma sinh vien: ";
        cin.getline(sv.msv, 10);
        cout << "Nhap ten sinh vien: ";
        cin.getline(sv.ten, 10);
        cout << "Nhap lop sinh vien: ";
        cin.getline(sv.lop, 10);
        cout << "Nhap diem THCS2: ";
        cin >> sv.diemthcs;
        cout << "Nhap diem C++: ";
        cin >> sv.diemc;
        cin.ignore(); // Ignore newline after the float input
        
        file.write(reinterpret_cast<char*>(&sv), sizeof(Student));  // Write to file
    }

    // Reset the file pointer to the beginning for reading
    file.seekg(0, ios::beg);

    cout << "\nDanh sach sinh vien co diem C++ >= 7.0:\n";
    while (file.read(reinterpret_cast<char*>(&sv), sizeof(Student))) {
        if (sv.diemc >= 7.0) {
            cout << "Ma SV: " << sv.msv << ", Ten: " << sv.ten << ", Lop: " << sv.lop
                 << ", Diem THCS2: " << sv.diemthcs << ", Diem C++: " << sv.diemc << endl;
        }
    }

    file.close();  // Close the file
    return 0;
}
