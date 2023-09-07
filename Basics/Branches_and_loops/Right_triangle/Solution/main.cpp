#include <iostream>
#include <algorithm>

int main(){
    unsigned long int a, b, c;
    std::cin >> a >> b >> c;

    if (a > c){
			std::swap(a, c);
    }
    if (b > c){
			std::swap(b, c);
    }

    if ((a * a + b * b == c * c) && (c != 0 && a != 0 && b != 0)){
			std::cout << "YES\n";
    } else if (c < a + b && b < a + c && a < b + c){
      std::cout << "NO";
    } else {
			std::cout << "UNDEFINED";
    }

    return 0;
}
