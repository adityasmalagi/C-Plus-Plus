#include <iostream>

int main() {
    long long l,b;
    std::cin >> l >> b;
    long long year = 0;
   while(l <= b){
    l *=3 ;
    b *=2;
    year++;
   }
   std::cout << year << std::endl;
    return 0;
}