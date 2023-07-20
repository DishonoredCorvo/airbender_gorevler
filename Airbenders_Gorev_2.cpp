#include <iostream>
#include <map>
#include <vector>
#include <string>
int main()
{
    
    std::map<int, std::vector<std::string>> digits = {
        {0, {"", "", ""}},
        {1, {"bir", "on", "yüz"}},
        {2, {"iki", "yirmi", "ikiyüz"}},
        {3, {"üç", "otuz", "üçyüz"}},
        {4, {"dört", "kırk", "dörtyüz"}},
        {5, {"beş", "elli", "beşyüz"}},
        {6, {"altı", "altmış", "altıyüz"}},
        {7, {"yedi", "yetmiş", "yediyüz"}},
        {8, {"sekiz", "seksen", "sekizyüz"}},
        {9, {"dokuz", "doksan", "dokuzyüz"}}
    };
    
    int number;

    std::cout << "Lutfen 1-999 arasý bir sayi giriniz: ";
    std::cin >> number;
    if (number > 999 || number < 1){
        std::cout <<"girdiğiniz sayı belirtilen aralıkta değil";
        return 0;
    }

    int digit1, digit2, digit3;

    digit1 = number % 10;
    number = (number - digit1) / 10;
    digit2 = number % 10;
    number = (number - digit2) / 10;
    digit3 = number % 10;
    
    if (digit3) std::cout << digits[digit3][2];
    if (digit2) std::cout << digits[digit2][1];
    if (digit1) std::cout << digits[digit1][0];
    
}
