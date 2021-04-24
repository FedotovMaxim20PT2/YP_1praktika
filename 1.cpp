#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
cout « "Введите любое число в диапозоне от 1 до 100" « endl;
int x;
cin » x;
if (x >0 && x <101) {
string y = "В караване был";
string z = "верблюд";
if ((x % 10==1) && (x != 11)) {
cout « y + " " + to_string(x) + z « endl;
}else if ((x%10 <= 4) && (x/10!=1)) {
cout « y.append("о") + to_string(x) + z.append("а") « endl;
}else cout « y.append("о") + to_string(x) + z.append("ов") « endl;
} else {
cout « "Введённое число не входит в диапазон от 1 до 100" « endl;;
}
return 0;
}
