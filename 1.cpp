#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
cout � "������� ����� ����� � ��������� �� 1 �� 100" � endl;
int x;
cin � x;
if (x >0 && x <101) {
string y = "� �������� ���";
string z = "�������";
if ((x % 10==1) && (x != 11)) {
cout � y + " " + to_string(x) + z � endl;
}else if ((x%10 <= 4) && (x/10!=1)) {
cout � y.append("�") + to_string(x) + z.append("�") � endl;
}else cout � y.append("�") + to_string(x) + z.append("��") � endl;
} else {
cout � "�������� ����� �� ������ � �������� �� 1 �� 100" � endl;;
}
return 0;
}