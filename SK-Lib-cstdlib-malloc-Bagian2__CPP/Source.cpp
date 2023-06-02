#include <cstdlib>
#include <iostream>
#include <conio.h>

/*
    Source by GeeksForGeeks (https://www.geeksforgeeks.org)
    Modified For Learn by RK
    I.D.E : VS2022
*/

using namespace std;

int main() {
    // size_t adalah tipe data integer yang dapat ditetapkan
    // lebih besar dari atau sama dengan 0 nilai bilangan bulat
    size_t s = 0; // s is SIZE

    // malloc declaration/initialization
    int* ptr = (int*)malloc(s);

    // mengembalikan kondisi jika blok memori tidak diinisialisasi
    if (ptr == NULL) {
        cout << "Null pointer has been returned";
    } else { // kondisi mencetak pesan jika memorinya diinisialisasi
        cout << "Memory has been allocated at address " << ptr << endl;
    }

    free(ptr);

    _getch();
    return 0;
}