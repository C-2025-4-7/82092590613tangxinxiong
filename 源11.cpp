//#include <iostream>
//using namespace std;
//
//// 函数：求最大公约数（欧几里得算法）
//int gcd(int a, int b) {
//    while (b != 0) {
//        int temp = b;
//        b = a % b;
//        a = temp;
//    }
//    return a;
//}
//
//// 函数：求最小公倍数（公式：最小公倍数 = 两数乘积 / 最大公约数）
//int lcm(int a, int b, int gcd_val) {
//    return (a * b) / gcd_val;
//}
//
//int main() {
//    int a, b;
//    cout << "请输入两个正整数：";
//    cin >> a >> b;
//
//    int gcd_val = gcd(a, b);
//    int lcm_val = lcm(a, b, gcd_val);
//
//    cout << "最大公约数：" << gcd_val << endl;
//    cout << "最小公倍数：" << lcm_val << endl;
//
//    return 0;
//}