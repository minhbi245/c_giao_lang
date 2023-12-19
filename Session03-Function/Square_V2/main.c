#include <stdio.h>
#include <stdlib.h>

/*
    Viết hàm tính bình phương của một con số nguyên
*/

int fV3(); // int fv4(int x) => giống 100% hàm toán học y = f(x) = x^2

int main()
{
    // fv3(); // chỉ dùng để chạy chơi thôi, chưa có biến hứng lấy giá trị;
           // Vì hàm là 1 giá trị, muốn biết giá trị thì phải in ra

    // int result = fv3(); // Có biến hứng được giá trị từ hảm trả về
    printf("The function y = f(x) = x^2, result = %d\n", fV3());

    // Vì hàm fv3() là 1 value int nào đó. Cho nên ta có thể xài mày ở trong
    // các biểu thức khác, trong các câu lệnh khác!!! -> RE-USE


    return 0;
}

int fV3()
{
    int x, y;
    printf("Input an integer to get ^2: ");
    scanf("%d", &x);
    y = x * x;
    return y; // Đọc là tên hàm = giá trị của y
              // y được ném ra ngoài tên hàm để sử dụng tiếp
              // tên hàm được xem là tên biến vì đặt tên cho biến và có kiểu dữ liệu như biến - khai báo như biến
              // Lệnh return chính là gán giá trị cho biến(hàm)
              // Tên hàm từ nay về sau được xem như là lấy ra value, dùng bất kì đâu(tới bến luôn)
}