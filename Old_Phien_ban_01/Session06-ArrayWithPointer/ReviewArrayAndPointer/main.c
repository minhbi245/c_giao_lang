#include <stdio.h>
#include <stdlib.h>

void printArray(); // Hàm nãy sẽ in ra 1 mảng các số nguyên

// Vùng nhớ HEAP, oanh tạc tự do!!!
void printArrayHEAP();

void inputArray();

void inputArrayV2(); // version cho nhập linh hoạt số phần tử của mảng

void inputArrayHEAP();  // Chơi kiểu heap

int main()
{

    // printArray();
    // printArrayHEAP();
    // inputArray();
    // inputArrayV2();
    inputArrayHEAP();
    printf("\n");
    return 0;
}

void printArrayHEAP()
{
    int *hari;         // Cần lắm luôn 1 địa chỉ, có thể là trỏ 1 biến int &tranThanh hoặc &tienDat
                       // Cần lắm luôn 1 địa chỉ, có thể là đầu mảng a[] = {...}
                       // Con trỏ có thể trỏ biến đơn hoặc biến đầu mảng
    hari = malloc(20); // Xin 20byte/4 = 5 biến int

    // Strong JAVA thì khi khai báo một instance mới:    
    //  Studen x(x ở đây chính là con trỏ)          =                               new Student(...);
    //vùng nhớ stack(nếu x được khai báo trong hàm)                                  vùng nhớ heap

    hari[0] = 5;
    hari[1] = -10;
    hari[2] = 15;
    hari[3] = 20;
    hari[4] = -25;

    printf("The array has values of(Dynamic array)\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\t", hari[i]);
    }

    // CÂU LỆNH CỰC KÌ QUAN TRONG
    free(hari); // Trả lại vùng ram cho win sau khi chạy xong
                // HEAP trả lại cho windows
                // hari nằm trong stack, Windows chủ động thu lại vùng RAM này

    /*
        - NẾU KHÔNG FREE() VÙNG MALLOC(), MÀ CỨ CHẠY APP CHẠY HÀM NHIỀU LẦN, VÙNG HEAP CỨ TĂNG DẦN
            WINDOWS KO LẤY LẠI ĐƯỢC VÙNG RAM NÀY, RAM GIẢM DUNG LƯỢNG -> RÒ RỈ MEMORY, LEAK MEMORY
    */
}

void inputArrayHEAP() {
    int n;
    printf("How many numbers do you want to input(USING HEAP)?\n");
    scanf("%d", &n);

    int *p = malloc(n * 4); // Bội số của 4 vì lát hồi nhảy 4 - biến int
    // mảng n phần tử

    printf("You are required to input %d numbers\n", n);
    for (int i = 0; i < n; i++) {
        printf("input a[%d]:", (i + 1));
        scanf("%d", (p + i));
    }

    printf("You have just input the following numbers\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t", p[i]);
    }
    free(p);
}

void inputArray() {
    int a[50];
    // Mảng khai báo 50 vậy mình nhập bao nhiêu số??? thích nhiêu thì nhiêu
    printf("You are required to input 10 numbers\n");
    for (int i = 0; i < 10; i++) {
        printf("input a[%d]: ", (i + 1));  // i + 1 lừa đảo chỉ số, lập trình đếm từ 0 nhưng ngoài đời thì lại đếm từ 1
        // scanf("%d", &a[i]);
        scanf("%d", (a + i)); // dùng địa chỉ gửi scanf() kiểu con trỏ (a + i) ~ &a[i]; vì a là địa chỉ đầu tiên trong mảng
    }

    printf("You have just input the following numbers\n");
    for (int i = 0; i < 10; i++) {
        printf("%d\t", a[i]);
    }
}

void inputArrayV2() {
    // Mời bạn nhập 1 mảng từ bàn phím, kích thước mảng sẽ được khai báo sau!!!
    // Sau khi hỏi bạn muốn mấy biến???
    int n;
    printf("How many numbers do you want to input???");
    scanf("%d ", &n);
    int a[n]; // Tùy n là mấy thì mảng là mấy

    printf("You are required to input %d numbers\n", n);
    for (int i = 0; i < n; i++) {
        printf("input a[%d]:", (i + 1));
        scanf("%d", (a + i));
    }

    printf("You have just input the following numbers\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }

}

void printArray()
{
    int a[] = {5, -10, 15, 20, -25};
    //       a[0] a[1] a[2] .....
    printf("The array has values of (using [i])\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", a[i]);
    }

    /*
        Tên mảng còn là con trỏ, bắt buộc nó trỏ/chốt vào a[0]
        Ko cho trỏ lung tung chỗ khác như con trỏ khai báo int *a;
        a = &a[0];
    */

    printf("\nThe array has values of (using *(a + i))\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", *(a + i));
    }

    int *p; // Tức là p = &của-ai-đó -> địa chỉ/con số tọa độ của biến int nào đó;
    p = a;  // ko ai cấm vì a = &a[0] -> a có tọa độ của a[0] (&a[0]) -> p = &a[0] ~ a = &a[0]; -> như nhau

    // Kiểm tra địa chỉ
    printf("Checking the address\n");
    printf("The address of all variables in the array\n");
    for (int i = 0; i < 5; i++)
    {
        printf("address of a[%d]: %u\n", i, &a[i]);
    }

    printf("\n p points to %u\n", p);

    // DÙNG CON TRỎ THUẦN CHỦNG
    printf("\nThe array has values of (using *(p + i V1))\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", *(p + i));
    }

    printf("\nThe array has values of (using p[i] V2)\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", p[i]);
    }

    /*
        p[i] = tức là con trỏ sẽ nhảy 1 nhát ~ với việc nhảy 4 byte lên vùng biến int liền kề nhau trong mảng
        Những cách để chúng ta truy cập lấy giá trị trong một mảng các số nguyên như sau:
            - p[i] -> cách lấy hẳn giá trị ở mỗi vùng biến int số nguyên
            - *(p + i) -> tăng theo chỉ mục `i` [index] index = 1, 2, 3, 4... tùy theo mảng có bao nhiêu phần tử
                biến con trỏ p sẽ tăng lên theo i -> nhảy 4 byte, tuy nhiên chỉ là địa chỉ, tới địa chỉ phải có dấu `*` để lấy giá trị ở vùng biến đó ra
            - *(p++) điều này tương tự với *(p + i) tuy nhiên chỉ thích hợp với con trỏ THUẦN CHỦNG, ĐẶC ÂN RIÊNG, vì `p`,
             là vùng RAM riêng ko bị chốt dính như tên mảng a, ko dùng được cho tên biến của mảng
            -> a[] = {5, 10, 15, 20, 25} -> a ở đây là tên biến của mảng, đồng thời cũng là con trỏ, tuy nhiên sẽ ko thể dùng a++
            Vì a ở đây đã được chốt với tọa độ đầu tiên trong mảng đó -> a = &a[0]; cho nên ko thể tăng tự thân như a++ mà phải là *(a + i)
    */

    printf("\nThe array has values of (using *(p++) V3)\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", *p);
        p++;
    }

    printf("\n finally, p points to %u\n", p);
}