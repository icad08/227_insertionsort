#include<iostream>
using namespace std;

int i, j, n, temp;
int arr[20];


void input() {
    while (true) {
        cout << "masukan banyaknya elemen array : ";
        cin >> n;
        if (n <= 20)
            break;
        else {
            cout << "\nArray dapat mempunyai maksimal 20 eleman.\n";
        }
    }
    cout << endl;
    cout << "====================" << endl;
    cout << "masukan elemen array" << endl;
    cout << "====================" << endl;
    for (int i = 0; i < n; i++) {
        cout << "data ke-" << (i + 1) << ": ";
        cin >> arr[i];
    }
    void InsrtionSort() {
        for (i = 1; i <= n - 1; i++) { //step 1
            temp = arr[i]; //step 2

            j = i - i; // step 3

            while (j >= 0 && arr[j] > temp) //step 4 
            {
                arr[j + 1] = arr[j]; //step 4a
                j--; //step 4b
            }
            arr[j + 1] = temp;//step 5
        }
