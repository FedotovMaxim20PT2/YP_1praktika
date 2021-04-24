#include <iostream>
#include <locale>
#include <string>
#include <codecvt>
using namespace std;
wstring decrypt(const wstring text, const int key)
{
 wstring s = L"";
 wstring unshifr;
 for (wchar_t c : text) {
 if (!(c>= L'�' && c<=L'�')) return L"-1";
 if ((c+key) > L'�')
 unshifr += c-key-32;
 else
 unshifr += c-key;
 }
 return unshifr;
}
int main()
{
 locale loc("ru_RU.UTF-8");
 locale::global(loc);
 int key;
 wstring text=L"�����������������";
 wstring text2 = L"";
 wstring untext;
 for(wchar_t & text1: text) {
 text2 += toupper(text1,loc);
 }
 cin>>key;
 untext=decrypt(text2,key);
 if(untext==(L"-1")) wcout<<L"ERROR"<<endl;
 wcout<<L"���������:"<<text<<endl;
 wcout<<L"��������������:"<<untext<<endl;
 return 0;
}