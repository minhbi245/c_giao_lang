#include <stdio.h>
#include <stdlib.h>

/*
    - Cho 1 mảng các số tự nhiên (Nguyên dương)
    - In ra những số nguyên tố xuất hiện trong mảng này
    - Ví dụ: {5, 10, 15, 23, 7, 9, 11, 13}
    -> Nguyên tố: 5, 7, 11, 13, 23

    IPO:
    Input: Nhập vào 1 mảng các số nguyên dương
    Process: Duyệt mảng, đi qua từng phần tử [i] của mảng
                Đều hỏi lại 1 câu, [i] mày có là nguyên tố hem?
    * Vấn đề lớn: tìm và in các nguyên tố
    * Vấn đề nhỏ: tìm 1 số có là nguyên tố hay ko?
    * Mỗi vấn đề nhỏ là 1 cái hàm!!!

    * HÀM KIỂM TRA 1 SỐ CÓ PHẢI LÀ NGUYÊN TỐ HAY KO!!!!

    IPO
    -> INPUT: ĐẦU VÀO/THAM SỐ/agrument/parameter
    -> PROCESS:
    -> OUTPUT: CÓ LÀ NGUYÊN TỐ HEM??? RETURN VALUE HAY KO?????
*/

int isPrime(int n); // hàm loại 4, re-use cực tốt!!!
// mày đưa n tao trả về 1 con int
// quy ước: mày: 0 éo là nguyên tố
// quy ước: 1: mày là nguyên tốt
// y = isPrime(5) = 1
// y = isPrime(10) = 0


void printPrimeList(int a[], int size);

int main()
{
    // printf("23? %d\n", isPrime(23));
    // printf("101? %d\n", isPrime(101));
    // printf("99? %d\n", isPrime(99));

    int a[] = {5, 10, 15, 23, 7, 9, 11, 13};
    printPrimeList(a, 8);
    return 0; 
}

int isPrime(int n)
{
    int divisorCount = 0; // Số ước ban đâu, áp dụng nhồi con heo đất tăng tự thân

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {                   // n có lỡ chia hết cho cháu i từ 1..n ko?
            divisorCount++; // lỡ tay đếm ngay ước số
        }
    }

    if (divisorCount == 2)
    {
        return 1;
    }
    return 0;
}

void printPrimeList(int a[], int size) {

    printf("The array has values of\n");
    for (int i = 0; i < size; i++) {
        printf("%d\t", *(a + i)); // *(a + i) ~ a[i]
    }

    // Chạy vòng lặp để quét mảng, lôi từng đưa ra xét xem có là số nguyên tố ko
    printf("\nThe list of prime numbers in this array is\n");
    for (int i = 0; i < size; i++) {
        if(isPrime(a[i]) == 1) {
            printf("%d\t", a[i]);
        }
    }
    printf("\n");
}

// n là số nguyên tố nếu: nó CHỈ có 2 ước số: 1 và chính nó
/*
    Thuật toán: đếm số ước số!!!
    if n chia hết 1, chia 1 dư 0, % 1 == 0, thì 1 là ước số
    if n chia hết 2, chia 2 dư 0, % 2 == 0, thì 2 là ước số
    if n chia hết 3, ....................., ...............
    if n chia hết 9, ....................., ...............
    if n chia hết 10, ....................., ...............

    Lặp lại nhiều lần kiểm tra chia hết từ 1 đến 10 ko
    Đếm tổng số ước: nếu lớn > 2 thì ko phải số nguyên tố
*/