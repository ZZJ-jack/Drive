#ifndef _GLIBCXX_NO_ASSERT
#include <cassert>
#endif
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#if __cplusplus >= 201103L
#include <ccomplex>
#include <cfenv>
#include <cinttypes>
#include <cstdalign>
#include <cstdbool>
#include <cstdint>
#include <ctgmath>
#include <cwchar>
#include <cwctype>
#endif
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>
#if __cplusplus >= 201103L
#include <array>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#endif
#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#define LEN 30
#define WID 25
#include<bits/stdc++.h>
#include<iostream>
#include<fstream>
#include<algorithm>
#include<windows.h>
#include<cstdlib>
#include<ctime>
#include<conio.h>
#include<iostream>
#include<fstream>
#include<algorithm>
#include <string>
#include <Windowsx.h>
#include <cmath>
#include <sstream>
#include <iomanip>
#include <vector>
#include <olectl.h>
#include<cmath>
#include<ctime>
#include<cstdio>
#include<cstdlib>
#include<windows.h>
#include<algorithm>
#include <fstream>
#pragma comment (lib, "User32.lib")
using namespace std;
int w[15],b[9999],u=1,jk[99];
string sbsb="tanyu";
void gotoxy(int x, int y) {
COORD pos = {x,y};
HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleCursorPosition(hOut, pos);
}
int yingcang(){
HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
CONSOLE_CURSOR_INFO CursorInfo;
GetConsoleCursorInfo(handle, &CursorInfo);
CursorInfo.bVisible = false; 
SetConsoleCursorInfo(handle, &CursorInfo);
}
int xianshi(){
HANDLE h_GAME =GetStdHandle(STD_OUTPUT_HANDLE);
CONSOLE_CURSOR_INFO cursor_info;
GetConsoleCursorInfo(h_GAME,&cursor_info);
cursor_info.bVisible=true;
SetConsoleCursorInfo(h_GAME,&cursor_info);
}
int main(){
yingcang();
system("color 0f");
gotoxy(31,1);
cout<<"ע������";
gotoxy(10,2);
cout<<"1.c++�����ؿ�ģ����������7.0�棩���԰� δ����������ת��";
gotoxy(20,3);
cout<<"2.����Ʒ��̷�����Ҷ������";
gotoxy(3,4);
cout<<"3.�뽫<c++�����ؿ�ģ����������7.0�棩���԰�>�ļ��з���C:��(��������)��";
gotoxy(30,5);
cout<<"��������Ϸ";
gotoxy(31,7);
cout<<"ʹ��˵��"<<endl;
gotoxy(13,8);
cout<<"1.����Ҫ����ʱ���������ݺ��밴�س���(Enter)";
gotoxy(7,9);
cout<<"2.��Щʱ���벻Ҫ�����룬�������Ը�(����Ʒ���˹ػ�����)";
gotoxy(17,10);
cout<<"ע���������⣬����ϵ̷�����ҵĳ�Ա";
gotoxy(8,11);
cout<<"���䣺yuhaoteng666@163.com     tanshifan819314@163.com";
gotoxy(25,12);
cout<<"tanyugonyong@163.com";
gotoxy(19,13);
cout<<"΢�ţ�YHT201183     W13168558388";
gotoxy(22,15);
cout<<"�����";
system("pause");
system("cls");
Sleep(500);
system("color 0f");
gotoxy(29,7);
cout<<"������Ϸ����";
gotoxy(22,9);
cout<<"���Ʋ�����Ϸ���ܾ�������Ϸ��";
gotoxy(22,10);
cout<<"ע����������������ƭ�ϵ���";
gotoxy(22,11);
cout<<"�ʶ���Ϸ���ԣ�������Ϸ����";
gotoxy(22,12);
cout<<"������ʱ�䣬���ܽ������";
Sleep(5000);
system("cls");
unsigned seed;
srand(seed);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY);
gotoxy(41,7);
for(int i=1;i<=10;i++){
cout<<"|";
gotoxy(41,6+i);
}
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED);
for(int i=1;i<=6;i++){
gotoxy(40-i+1,i+5);
cout<<"��";}
for(int i=1;i<=5;i++){
gotoxy(35+i,11+i);
cout<<"��";
}
system("cls");
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED);
for(int i=1;i<=6;i++){
gotoxy(40-i+1,i+5);
cout<<"��";}
for(int i=1;i<=5;i++){
gotoxy(35+i,11+i);
cout<<"��";
}
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY);
gotoxy(41,7);
for(int i=1;i<=5;i++){
cout<<"\\"<<"\b";
gotoxy(40+i,6+i);
}
gotoxy(45,11);
cout<<"|";
gotoxy(45-1,12);
for(int i=1;i<=4;i++){
cout<<"/";
gotoxy(44-i,12+i);
}
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY);
for(int i=1;i<=14;i++){
gotoxy(44-i+1,11);
cout<<"-";
}
gotoxy(30,11);
cout<<"<"; 
Sleep(2000);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY);
gotoxy(41,7);
for(int i=1;i<=10;i++){
cout<<"|";
gotoxy(41,6+i);
}
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED);
for(int i=1;i<=6;i++){
gotoxy(40-i+1,i+5);
cout<<"��";}
for(int i=1;i<=5;i++){
gotoxy(35+i,11+i);
cout<<"��";
}
system("cls");
int qaz=45,s=1;
for(int i=1;i<=14;i++){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY);
gotoxy(45,11);
cout<<"|";
for(int i=1;i<=14;i++){
gotoxy(44-i+1,11);
cout<<"-";
}
gotoxy(30,11);
cout<<"<";
for(int x=1;x<=9;x++){
gotoxy(qaz,x+6);
cout<<"|";
}
int sb=qaz-1;
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED);
for(int x=1;x<=5;x++){
gotoxy(sb,x+5);
cout<<"��";
sb--;
}
if(s>=5){
gotoxy(sb,11);
cout<<"��";
}
sb++;
for(int x=7;x<=11;x++){
gotoxy(sb,x+5);
cout<<"��";
sb++;
}
qaz+=2;
s++;
system("cls");
}
int ak=70,d=9,c=1;
for(int i=1;i<=5;i++){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY);
gotoxy(45,11);
cout<<"|";
for(int i=1;i<=14;i++){
gotoxy(44-i+1,11);
cout<<"-";
}
gotoxy(30,11);
cout<<"<";
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED);
for(int x=c;x<=5;x++){
gotoxy(ak,x+6);
cout<<"��";
ak--;
}
ak+=2;
for(int x=6;x<=d;x++){
gotoxy(ak,x+6);
cout<<"��";
ak++;
}
ak=70;
d--;
c++;
system("cls");
}
for(int i=1;i<=10;i++){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY);
gotoxy(45,11);
cout<<"|";
for(int i=1;i<=14;i++){
gotoxy(44-i+1,11);
cout<<"-";
}
gotoxy(30,11);
cout<<"<";
system("cls");
}
for(int i=0;i<=70;i++){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
gotoxy(i,3);
cout<<"̷";
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY);
gotoxy(45,11);
cout<<"|";
for(int i=1;i<=14;i++){
gotoxy(44-i+1,11);
cout<<"-";
}
gotoxy(30,11);
cout<<"<";
system("cls");
}
for(int i=0;i<=70;i++){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN);
gotoxy(i,3);
cout<<"��";
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY);
gotoxy(45,11);
cout<<"|";
for(int i=1;i<=14;i++){
gotoxy(44-i+1,11);
cout<<"-";
}
gotoxy(30,11);
cout<<"<";
system("cls");
}
for(int i=0;i<=70;i++){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);
gotoxy(i,3);
cout<<"��";
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY);
gotoxy(45,11);
cout<<"|";
for(int i=1;i<=14;i++){
gotoxy(44-i+1,11);
cout<<"-";
}
gotoxy(30,11);
cout<<"<";
system("cls");
}
for(int i=0;i<=70;i++){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
gotoxy(i,3);
cout<<"��";
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY);
gotoxy(45,11);
cout<<"|";
for(int i=1;i<=14;i++){
gotoxy(44-i+1,11);
cout<<"-";
}
gotoxy(30,11);
cout<<"<";
system("cls");
}
for(int i=0;i<=70;i++){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN|FOREGROUND_BLUE);
gotoxy(i,3);
cout<<"��";
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY);
gotoxy(45,11);
cout<<"|";
for(int i=1;i<=14;i++){
gotoxy(44-i+1,11);
cout<<"-";
}
gotoxy(30,11);
cout<<"<";
system("cls");
}
gotoxy(30,8);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
cout<<"̷";Sleep(500);

SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN);
cout<<"��";Sleep(500);	

SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);
cout<<"��";Sleep(500);	

SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"��";Sleep(500);

SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN|FOREGROUND_BLUE);
cout<<"��";Sleep(2000);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE|FOREGROUND_RED|FOREGROUND_GREEN);
system("cls");
ofstream OutFile("C:\\c++�����ؿ�ģ����������7.0�棩���԰�\\.renshengchongkaimoniqi\\��־\\��־(1).txt");
gotoxy(27,0);
cout<<"������Ϸ��......"<<endl;Sleep(100);
cout<<"������־��......"<<endl;Sleep(3000);
cout<<"��־���سɹ���"<<endl;Sleep(3000);
system("cls");
gotoxy(27,0);
cout<<"������Ϸ��......"<<endl;Sleep(100);
cout<<"��־�ѱ��浽�ļ�����"<<endl;
ShellExecuteA(NULL, "open", "C:\\c++�����ؿ�ģ����������7.0�棩���԰�\\.renshengchongkaimoniqi\\�����ļ�\\�����ļ�1.exe",0,0,1);
Sleep(22222);
cout<<"��Ϸ�����ɹ�"<<endl;
OutFile<<"��Ϸ�����ɹ�"<<endl;Sleep(2000);
system("cls");
srand(seed);
int fd,po=0,rt=0;

SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE|FOREGROUND_RED|FOREGROUND_GREEN);	
int yu=200,ui=100,io=100; 
cout<<"������������Ϸ��......"<<endl;
OutFile<<"������������Ϸ��......"<<endl;Sleep(3000);
int cpp;
srand(time(0));
cpp=rand()%10+1;
if(cpp<=3){
cout<<"������δ��Ӧ��"<<endl;
OutFile<<"������δ��Ӧ��"<<endl;Sleep(1500);
cout<<"������������......"<<endl;
OutFile<<"������������......"<<endl;Sleep(3000);
cout<<"�����������ɹ������ڼ�����Ϸ......"<<endl;
OutFile<<"�����������ɹ������ڼ�����Ϸ......"<<endl;Sleep(3000);
cout<<"������δ��Ӧ��"<<endl;
OutFile<<"������δ��Ӧ��"<<endl;Sleep(5000);
cout<<"������δ��Ӧʱ����ã��Ƿ�ر�(�� ���� ��  �� ���� ��)"<<endl;
OutFile<<"������δ��Ӧʱ����ã��Ƿ�ر�(������ ��  ������ ��)"<<endl;Sleep(100);
xianshi();
string mv;
cin>>mv;
OutFile<<mv<<endl;
yingcang();
if(mv=="��"){
cout<<"�ѹر�!"<<endl;
OutFile<<"�ѹر�!"<<endl;
return 0; 
}
else{
Sleep(2000);
cout<<"������δ��Ӧ��"<<endl;
OutFile<<"������δ��Ӧ��"<<endl;Sleep(1500);
cout<<"������������......"<<endl;
OutFile<<"������������......"<<endl;Sleep(3000);
cout<<"�����������ɹ������ڼ�����Ϸ......"<<endl;
OutFile<<"�����������ɹ������ڼ�����Ϸ......"<<endl;Sleep(3500);
}
}
cout<<"������Ϸ�ɹ�!";
OutFile<<"������Ϸ�ɹ�!"<<endl;Sleep(2500);
system("cls");
cout<<"c++�����ؿ�ģ����������7.0�棩���԰棺������Ϸ������:1   ��������ʾ�������:2   �˳���Ϸ������:0"<<endl;
OutFile<<"c++�����ؿ�ģ����������7.0�棩���԰棺������Ϸ������:1   ��������ʾ�������:2   �˳���Ϸ������:0"<<endl;
xianshi();
int a=0,f=0,
g=0,h=0,j=0,k=0,l=0,qs=0,sq=0;//��������a����֮���s��ľ֮���d��ˮ֮���f����֮���g����֮���h���������j��������k��������l��
s=0;d=0;
int q;
int as=0;
int zxc=100;
cin>>q;
OutFile<<q;
yingcang();
if(q!=1&&q!=2&&q!=0){
for(int i=1;i<=999999999;i++){
if(i>=4){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
cout<<"�����!?�����㣡"<<endl;
Sleep(100);
cout<<"���㼸�뷴˼���˳�����������ĺ�������"<<endl;
cout<<"5"<<endl;
Sleep(1000);
cout<<"4"<<endl;
Sleep(1000);
cout<<"3"<<endl;
Sleep(1000);
cout<<"2"<<endl;
Sleep(1000);
cout<<"1(����˳�)!!!!!!!!!"<<endl;
Sleep(1000);
cout<<"0"<<endl;
cout<<"����˳�!!!!!!!!!,���Ϊʲô������"<<endl;
system("shutdown -s -f -t 5");
Sleep(5000);
system("shutdown -a");
}
if(q==1||q==2||q==0){break;}
else{
MessageBox(NULL,"��û������1 ����2 ����0 Ŷ!","�������",MB_OK+48);
OutFile<<"�������"<<endl;
OutFile<<"��û������1 ����2 ����0 Ŷ!"<<endl;
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE|FOREGROUND_RED|FOREGROUND_GREEN);
cout<<"c++�����ؿ�ģ����������7.0�棩���԰棺������Ϸ������:1   ��������ʾ�������:2   �˳���Ϸ������:0"<<endl;
OutFile<<"c++�����ؿ�ģ����������7.0�棩���԰棺������Ϸ������:1   ��������ʾ�������:2   �˳���Ϸ������:0"<<endl;
xianshi();
cin>>q;
OutFile<<q;
yingcang();
}
}
}
OutFile.close();
if(q==1){
system("cls");
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN|FOREGROUND_BLUE);
cout<<"Ok!�����������!"<<endl;
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);
for(int i=1;i<=20;i++){
if(i>=1&&i<=10||i>=17&&i<=20){Sleep(200);cout<<"��";}
else {Sleep(350);cout<<"��";}

}
system("cls");
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);
cout<<"ok,��ѡ���츳��(�츳��40)��"<<endl;
int da=0;
int z=0,x=0,c=0,v=0;
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_BLUE);
cout<<"��ֵ�� ";
xianshi();
cin>>z; 
yingcang();
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN|FOREGROUND_BLUE);
cout<<"������ ";
xianshi();
cin>>x;
yingcang();
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN);
cout<<"Ǯ���� ";
xianshi();
cin>>c;
yingcang();
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);
cout<<"������ ";
xianshi();
cin>>v;
yingcang();
cout<<endl;
if(z==12&&x==12&&c==6){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"�㴥����ʱ������"<<endl;
cout<<"�����ʱ��Խ�٣��ٶȸ��죨����1000== һ�룩"<<endl;
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_BLUE);
cout<<"����ʱ�䣺 ";
xianshi();
cin>>yu;
yingcang();
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN|FOREGROUND_BLUE);
cout<<endl<<"����ʱ�䣺 ";
xianshi();
cin>>ui;
yingcang();
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN);
cout<<endl<<"����ʱ�䣺 ";
xianshi();
cin>>io;
yingcang();
}
if(z+x+c+v>40){
for(;;){ 
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);
cout<<"ok,��ѡ���츳��(�츳��40)��"<<endl;
cout<<"������ѡ������츳��С�ڵ���40��"<<endl;	
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_BLUE);
cout<<"��ֵ�� ";
xianshi();
cin>>z; 
yingcang();
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN|FOREGROUND_BLUE);
cout<<"������ ";
xianshi();
cin>>x;
yingcang();
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN);
cout<<"Ǯ���� ";
xianshi();
cin>>c;
yingcang();
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);
cout<<"������";
xianshi();
cin>>v;
yingcang();
cout<<endl;
if(z+x+c<=30){break;}

}	
	
}
int asdf;
srand(time(0));
asdf=rand()%3+1;
if(asdf==1){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN);
cout<<"������ˣ����к���"<<endl;	
c=c*1000;
v=v+5;
}
if(asdf==2){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN|FOREGROUND_BLUE);	
cout<<"������ˣ���Ů����"<<endl;	
c=c*100;
z=z+5;
}
if(asdf==3){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN|FOREGROUND_BLUE);	
cout<<"������ˣ�������������ˣ�"<<endl;	
c=c*200;
x=x+5;
}
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_BLUE);
cout<<"��ֵ:"<<z<<" ";
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN|FOREGROUND_BLUE);
cout<<"����:"<<x<<" ";
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN);
cout<<"Ǯ��:"<<c<<" ";
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);
cout<<"����:"<<v<<" "<<endl<<endl;
Sleep(300);	
for(int i=1;i<100;i++){
int rt=0;
int a=rand()%100+1;
if(0>=v){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN);
cout<<"��"<<i<<"�꣺"<<"����Ϊͻ�������¼�����.(ע�����������)"<<endl;da=1;break;}
if(a==1){cout<<"��"<<i<<"�꣺"<<"��������ձ��䣬��ֵ��3."<<endl;z=z+3;rt=1;}
if(a==2){cout<<"��"<<i<<"�꣺"<<"���0.2������Ǯ����200."<<endl;c=c+200;rt=1;}
if(a==3){cout<<"��"<<i<<"�꣺"<<"�㱻��թƭ�ˣ�Ǯ����600."<<endl;c=c-600;rt=1;}
if(a==4){cout<<"��"<<i<<"�꣺"<<"��ѧ��һ���飬������3."<<endl;x=x+3;rt=1;}
if(a==5){cout<<"��"<<i<<"�꣺"<<"�����һ����䣬Ǯ����2000."<<endl;c=c+2000;rt=1;}
if(a==6&&jk[1]==0){cout<<"��"<<i<<"�꣺"<<"��������Ϣ������һ���˱���ײ�ˡ�����ǰ�󺰡������ҿ���10��ת���ߣ���"<<endl;jk[1]++;rt=1;}
else if(a==6&&jk[1]==1){cout<<"��"<<i<<"�꣺"<<"ƽƽ�����һ��."<<endl;rt=1;}
if(a==7&&jk[2]==0){cout<<"��"<<i<<"�꣺"<<"��������Ϣ����������һ��ˢ10���Ѷ�������."<<endl;jk[2]++;rt=1;}
else if(a==7&&jk[2]==1){cout<<"��"<<i<<"�꣺"<<"ƽƽ�����һ��."<<endl;rt=1;}
if(a==8&&jk[3]==0){cout<<"��"<<i<<"�꣺"<<"��������Ϣ������˸�����쿴����ְת��~������������ó��汾��~��!!!"<<endl;jk[3]++;rt=1;}
else if(a==8&&jk[3]==1){cout<<"��"<<i<<"�꣺"<<"ƽƽ�����һ��."<<endl;rt=1;}
if(a==9&&jk[4]==0){cout<<"��"<<i<<"�꣺"<<"��������Ϣ����������2021��12��20���������һ�������"<<endl;jk[4]++;rt=1;}
else if(a==9&&jk[4]==1){cout<<"��"<<i<<"�꣺"<<"ƽƽ�����һ��."<<endl;rt=1;}
if(a==10&&jk[5]==0){cout<<"��"<<i<<"�꣺"<<"��������Ϣ������˸��ϰ��ŷ���񹦺���������ߴ��****��"<<endl;jk[5]++;rt=1;}
else if(a==10&&jk[5]==1){cout<<"��"<<i<<"�꣺"<<"ƽƽ�����һ��."<<endl;rt=1;}
if(a==11&&jk[6]==0){cout<<"��"<<i<<"�꣺"<<"�ձ�����г���±�."<<endl;jk[6]++;rt=1;}
else if(a==11&&jk[6]==1){cout<<"��"<<i<<"�꣺"<<"ƽƽ�����һ��."<<endl;rt=1;}
if(a==12&&jk[7]==0){cout<<"��"<<i<<"�꣺"<<"�й�GPS��������."<<endl;jk[7]++;rt=1;}
else if(a==12&&jk[7]==1){cout<<"��"<<i<<"�꣺"<<"ƽƽ�����һ��."<<endl;rt=1;}
if(a==18){cout<<"��"<<i<<"�꣺"<<"�㱻�ر���ѵ��ȫ��������3."<<endl;z=z+3;x=x+3;v=v+3;rt=1;}
if(a==19){cout<<"��"<<i<<"�꣺"<<"�㲻С����С������������ֵ��5,������1."<<endl;z=z-5;rt=1;v=v-1;}
if(a==20){cout<<"��"<<i<<"�꣺"<<"�㲻С�ı���ײ���Դ���������5,������5."<<endl;x=x-5;rt=1;v=v-5;}
if(a==21){cout<<"��"<<i<<"�꣺"<<"�㻼���˸�ð,������2."<<endl;v=v-2;rt=1;}
if(a==22){cout<<"��"<<i<<"�꣺"<<"���ֶ���,������2."<<endl;v=v+2;rt=1;}
if(a==23){cout<<"��"<<i<<"�꣺"<<"��Ϊ������һֻ�ǹ�,������ÿ�챻��׷����...������3."<<endl;v=v+3;rt=1;}
if(a==24){cout<<"��"<<i<<"�꣺"<<"��Ϊ���ڷܹ���,����Ǯ����3000!"<<endl;c=c+3000;rt=1;}
if(a==25&&jk[8]==0&&c>=100000){cout<<"��"<<i<<"�꣺"<<"������ؤ����һ��������ͼ��.Ǯ����100000."<<endl;c=c-100000;po=po+1;jk[8]++;rt=1;}
else if(a==25&&jk[8]==1&&c>=100000){cout<<"��"<<i<<"�꣺"<<"ƽƽ�����һ��."<<endl;rt=1;}
if(a==26){cout<<"��"<<i<<"�꣺"<<"�����100Ԫ"<<endl;c=c+100;rt=1;}
if(a==27){cout<<"��"<<i<<"�꣺"<<"��ͻȻ�����ˣ�������5��"<<endl;v=v-5;}
if(a==28&&z>=20){cout<<"��"<<i<<"�꣺"<<"���Ե���һ�����!"<<endl;}
if(a==29&&jk[9]==0){cout<<"��"<<i<<"�꣺"<<"��������Ϣ�����й�����������������"<<endl;x=x+10;jk[9]++;}
else if(a==29&&jk[9]==1){cout<<"��"<<i<<"�꣺"<<"ƽƽ�����һ��."<<endl;rt=1;}
if(rt==0){cout<<"��"<<i<<"�꣺"<<"ƽƽ�����һ��."<<endl;}
if(c<0){cout<<"��Ƿծ��"<<c<<"Ԫ"<<endl;}
if(c<=50){cout<<"���Ʋ��ˣ���ȫ����-2."<<endl;z=z-2;x=x-2;v=v-2;}
if(z<=1){cout<<"����Ϊ��ֵ̫���ˣ��������ڵ���Ħ����������1��"<<endl;v=v-1;}
if(x>=20){cout<<"����Ϊ����̫���ˣ��μӱ��������1000Ԫ��"<<endl;c=c+1000;}
z=z+0.1;x=x+0.1;c=c+1000;v=v+0.1;
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_BLUE);
cout<<"��ֵ:"<<z<<" ";
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN|FOREGROUND_BLUE);
cout<<"����:"<<x<<" ";
if(c>=0){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN);
cout<<"Ǯ��:"<<c<<" ";}
else{
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN);
cout<<"Ǯ��:-"<<c<<" ";	
}
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);
cout<<"����:"<<v<<" "<<endl<<endl;	
Sleep(yu);
}
 
int ghj[9999]={0};
if(da==1){SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);cout<<"��Ԫ��.";}
else{
system("cls");
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN);
cout<<"��100�꣺�����С���ӣ������ˡ����ɹ����Ȿ���ɹ�������ʼ����֮·,��Ԫ������150�ꡣ";
if(po>0){cout<<"�㷢�ֵ�����ġ�����ͼ���ȡ����ɹ���Ч�����ã�";}
cout<<endl;int qw=150;
//int i;
u=u+(z*0.01)+(x*0.01)+(v*0.1);
for(int i=101;i<=qw;i++){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN);
if(250>=u){
int rt=0;

fd=rand()%50+1;
if(fd==1){cout<<"��"<<i<<"�꣺"<<"���ҵ������ۼ�֮������Ϊ�����������"<<endl;u=u+1.5;rt=1;}
if(fd==2){cout<<"��"<<i<<"�꣺"<<"���ҵ��������ΪС����������"<<endl;u=u+1;rt=1;}
if(fd==3){cout<<"��"<<i<<"�꣺"<<"���߻���ħ����Ϊ������½���"<<endl;u=u-2;rt=1;}
if(fd==4){cout<<"��"<<i<<"�꣺"<<"��ɱ��һλ�����������ߣ���Ϊ�����������"<<endl;u=u+1.5;rt=1;}
if(fd==5&&ghj[1]<=2){cout<<"��"<<i<<"�꣺"<<"���öɽ�ʧ�ܵĶɽ��������ߴ��У���Ϊ����X��"<<endl;u=u+10;ghj[1]++;rt=1;}
if(fd==6&&ghj[1]>2){cout<<"��"<<i<<"�꣺"<<"����..."<<endl;u=u+0.2;rt=1;}
if(fd==7){cout<<"��"<<i<<"�꣺"<<"������һЩ������ͼ�������ݣ���Ϊ�ӿ�������"<<endl;po=po+0.1;rt=1;}
if(rt==0){cout<<"��"<<i<<"�꣺"<<"����..."<<endl;u=u+0.2;}

}
else{
int gd;

gd=rand()%100+1;
if(gd==1&&sq==0){SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN|FOREGROUND_BLUE);cout<<"��"<<i<<"�꣺"<<"����͸��ΰ������˼���塣"<<endl;u=u+1;sq=1;}else{if(gd==1){cout<<"��"<<i<<"�꣺"<<"���..."<<endl;u=u+0.2;}}	
if(gd==2&&qs==0){SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN|FOREGROUND_BLUE);cout<<"��"<<i<<"�꣺"<<"������˿��ֵ�,����û��ʲô���á�"<<endl;u=u+1;qs=1;}else{if(gd==2){cout<<"��"<<i<<"�꣺"<<"���..."<<endl;u=u+0.2;}}	
if(gd==3&&s==0){SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN|FOREGROUND_BLUE);cout<<"��"<<i<<"�꣺"<<"������˽�֮�����"<<endl;u=u+4;s=1;a=a+1;}else{if(gd==3){cout<<"��"<<i<<"�꣺"<<"���..."<<endl;u=u+0.2;}}	
if(gd==4&&d==0){SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN|FOREGROUND_BLUE);cout<<"��"<<i<<"�꣺"<<"�������ľ֮�����"<<endl;u=u+4;d=1;a=a+1;}else{if(gd==4){cout<<"��"<<i<<"�꣺"<<"���..."<<endl;u=u+0.2;}}
if(gd==5&&f==0){SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN|FOREGROUND_BLUE);cout<<"��"<<i<<"�꣺"<<"�������ˮ֮�����"<<endl;u=u+4;f=1;a=a+1;}else{if(gd==5){cout<<"��"<<i<<"�꣺"<<"���..."<<endl;u=u+0.2;}}	
if(gd==6&&g==0){SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN|FOREGROUND_BLUE);cout<<"��"<<i<<"�꣺"<<"������˻�֮�����"<<endl;u=u+4;g=1;a=a+1;}else{if(gd==6){cout<<"��"<<i<<"�꣺"<<"���..."<<endl;u=u+0.2;}}
if(gd==7&&h==0){SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN|FOREGROUND_BLUE);cout<<"��"<<i<<"�꣺"<<"���������֮�����"<<endl;u=u+4;h=1;a=a+1;}else{if(gd==7){cout<<"��"<<i<<"�꣺"<<"���..."<<endl;u=u+0.2;}}
if(gd==8&&j==0){SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN|FOREGROUND_BLUE);cout<<"��"<<i<<"�꣺"<<"����������������"<<endl;u=u+5;j=1;a=a+1;}else{if(gd==8){cout<<"��"<<i<<"�꣺"<<"���..."<<endl;u=u+0.2;}}
if(gd==9&&k==0){SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN|FOREGROUND_BLUE);cout<<"��"<<i<<"�꣺"<<"������˻�������"<<endl;u=u+5;k=1;a=a+1;}else{if(gd==9){cout<<"��"<<i<<"�꣺"<<"���..."<<endl;u=u+0.2;}}
if(gd==10&&l==0){SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN|FOREGROUND_BLUE);cout<<"��"<<i<<"�꣺"<<"������˻�������"<<endl;u=u+5;l=1;a=a+1;}else{if(gd==10){cout<<"��"<<i<<"�꣺"<<"���..."<<endl;u=u+0.2;}}
if(gd!=1&&gd!=2&&gd!=3&&gd!=4&&gd!=5&&gd!=6&&gd!=7&&gd!=8&&gd!=9&&gd!=10){cout<<"��"<<i<<"�꣺"<<"���..."<<endl;u=u+1;}			
}
u=u+po;	
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"�����㣺"<<u<<endl;



SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
if(u>=2&&u<4&&b[1]==0){cout<<"ͻ����������1��,��Ԫ������160�ꡣ"<<endl;qw=160;b[1]=1;}
if(u>=4&&u<6&&b[2]==0){cout<<"ͻ����������2��,��Ԫ������170�ꡣ"<<endl;qw=170;b[2]=1;}
if(u>=6&&u<8&&b[3]==0){cout<<"ͻ����������3��,��Ԫ������180�ꡣ"<<endl;qw=180;b[3]=1;}
if(u>=8&&u<10&&b[4]==0){cout<<"ͻ����������4��,��Ԫ������185�ꡣ"<<endl;qw=185;b[4]=1;}
if(u>=10&&u<12&&b[5]==0){cout<<"ͻ����������5��,��Ԫ������190�ꡣ"<<endl;qw=190;b[5]=1;}
if(u>=12&&u<14&&b[6]==0){cout<<"ͻ����������1��,��Ԫ������200�ꡣ"<<endl;qw=200;b[6]=1;}
if(u>=14&&u<16&&b[7]==0){cout<<"ͻ����������2��,��Ԫ������210�ꡣ"<<endl;qw=210;b[7]=1;}
if(u>=16&&u<18&&b[8]==0){cout<<"ͻ����������3��,��Ԫ������220�ꡣ"<<endl;qw=220;b[8]=1;}
if(u>=18&&u<20&&b[9]==0){cout<<"ͻ����������4��,��Ԫ������230�ꡣ"<<endl;qw=230;b[9]=1;}
if(u>=20&&u<22&&b[10]==0){cout<<"ͻ����������5��,��Ԫ������240�ꡣ"<<endl;qw=240;b[10]=1;}
if(u>=22&&u<24&&b[11]==0){cout<<"ͻ����������1��,��Ԫ������250�ꡣ"<<endl;qw=250;b[11]=1;}
if(u>=24&&u<26&&b[12]==0){cout<<"ͻ����������2��,��Ԫ������260�ꡣ"<<endl;qw=260;b[12]=1;}
if(u>=26&&u<28&&b[13]==0){cout<<"ͻ����������3��,��Ԫ������270�ꡣ"<<endl;qw=270;b[13]=1;}
if(u>=28&&u<30&&b[14]==0){cout<<"ͻ����������4��,��Ԫ������280�ꡣ"<<endl;qw=280;b[14]=1;}
if(u>=30&&u<35&&b[15]==0){cout<<"ͻ����������5��,��Ԫ������290�ꡣ"<<endl;qw=290;b[15]=1;}

if(u>=35&&u<37&&b[16]==0){cout<<"ͻ����������1��,��Ԫ������300�ꡣ"<<endl;qw=300;b[16]=1;}
if(u>=37&&u<39&&b[17]==0){cout<<"ͻ����������2��,��Ԫ������310�ꡣ"<<endl;qw=310;b[17]=1;}
if(u>=39&&u<41&&b[18]==0){cout<<"ͻ����������3��,��Ԫ������320�ꡣ"<<endl;qw=320;b[18]=1;}
if(u>=41&&u<43&&b[19]==0){cout<<"ͻ����������4��,��Ԫ������330�ꡣ"<<endl;qw=330;b[19]=1;}
if(u>=45&&u<47&&b[20]==0){cout<<"ͻ����������5��,��Ԫ������340�ꡣ"<<endl;qw=340;b[20]=1;}
if(u>=47&&u<49&&b[21]==0){cout<<"ͻ����������1��,��Ԫ������350�ꡣ"<<endl;qw=350;b[21]=1;}
if(u>=49&&u<51&&b[22]==0){cout<<"ͻ����������2��,��Ԫ������360�ꡣ"<<endl;qw=360;b[22]=1;}
if(u>=51&&u<53&&b[23]==0){cout<<"ͻ����������3��,��Ԫ������370�ꡣ"<<endl;qw=370;b[23]=1;}
if(u>=55&&u<57&&b[24]==0){cout<<"ͻ����������4��,��Ԫ������380�ꡣ"<<endl;qw=380;b[24]=1;}
if(u>=57&&u<59&&b[25]==0){cout<<"ͻ����������5��,��Ԫ������390�ꡣ"<<endl;qw=390;b[25]=1;}
if(u>=59&&u<61&&b[26]==0){cout<<"ͻ����������1��,��Ԫ������400�ꡣ"<<endl;qw=400;b[26]=1;}
if(u>=61&&u<63&&b[27]==0){cout<<"ͻ����������2��,��Ԫ������410�ꡣ"<<endl;qw=410;b[27]=1;}
if(u>=63&&u<65&&b[28]==0){cout<<"ͻ����������3��,��Ԫ������420�ꡣ"<<endl;qw=420;b[28]=1;}
if(u>=65&&u<67&&b[29]==0){cout<<"ͻ����������4��,��Ԫ������430�ꡣ"<<endl;qw=430;b[29]=1;}
if(u>=69&&u<75&&b[30]==0){cout<<"ͻ����������5��,��Ԫ������440�ꡣ"<<endl;qw=440;b[30]=1;}

if(u>=75&&u<78&&b[31]==0){cout<<"ͻ�ƽ𵤳���1��,��Ԫ������450�ꡣ"<<endl;qw=450;b[31]=1;}
if(u>=78&&u<81&&b[32]==0){cout<<"ͻ�ƽ𵤳���2��,��Ԫ������460�ꡣ"<<endl;qw=460;b[32]=1;}
if(u>=81&&u<84&&b[33]==0){cout<<"ͻ�ƽ𵤳���3��,��Ԫ������470�ꡣ"<<endl;qw=470;b[33]=1;}
if(u>=84&&u<87&&b[34]==0){cout<<"ͻ�ƽ𵤳���4��,��Ԫ������480�ꡣ"<<endl;qw=480;b[34]=1;}
if(u>=87&&u<90&&b[35]==0){cout<<"ͻ�ƽ𵤳���5��,��Ԫ������490�ꡣ"<<endl;qw=490;b[35]=1;}
if(u>=90&&u<93&&b[36]==0){cout<<"ͻ�ƽ�����1��,��Ԫ������500�ꡣ"<<endl;qw=500;b[36]=1;}
if(u>=93&&u<96&&b[37]==0){cout<<"ͻ�ƽ�����2��,��Ԫ������510�ꡣ"<<endl;qw=510;b[37]=1;}
if(u>=96&&u<99&&b[38]==0){cout<<"ͻ�ƽ�����3��,��Ԫ������520�ꡣ"<<endl;qw=520;b[38]=1;}
if(u>=99&&u<102&&b[39]==0){cout<<"ͻ�ƽ�����4��,��Ԫ������530�ꡣ"<<endl;qw=530;b[39]=1;}
if(u>=102&&u<105&&b[40]==0){cout<<"ͻ�ƽ�����5��,��Ԫ������540�ꡣ"<<endl;qw=540;b[40]=1;}
if(u>=108&&u<111&&b[41]==0){cout<<"ͻ�ƽ𵤸���1��,��Ԫ������550�ꡣ"<<endl;qw=550;b[41]=1;}
if(u>=111&&u<114&&b[42]==0){cout<<"ͻ�ƽ𵤸���2��,��Ԫ������560�ꡣ"<<endl;qw=560;b[42]=1;}
if(u>=114&&u<117&&b[43]==0){cout<<"ͻ�ƽ𵤸���3��,��Ԫ������570�ꡣ"<<endl;qw=570;b[43]=1;}
if(u>=117&&u<120&&b[44]==0){cout<<"ͻ�ƽ𵤸���4��,��Ԫ������580�ꡣ"<<endl;qw=580;b[44]=1;}
if(u>=120&&u<125&&b[45]==0){cout<<"ͻ�ƽ𵤸���5��,��Ԫ������590�ꡣ"<<endl;qw=590;b[45]=1;}

if(u>=125&&u<130&&b[46]==0){cout<<"ͻ��ԪӤ����1��,��Ԫ������600�ꡣ"<<endl;qw=600;b[46]=1;}
if(u>=130&&u<135&&b[47]==0){cout<<"ͻ��ԪӤ����2��,��Ԫ������610�ꡣ"<<endl;qw=610;b[47]=1;}
if(u>=135&&u<140&&b[48]==0){cout<<"ͻ��ԪӤ����3��,��Ԫ������620�ꡣ"<<endl;qw=620;b[48]=1;}
if(u>=140&&u<145&&b[49]==0){cout<<"ͻ��ԪӤ����4��,��Ԫ������630�ꡣ"<<endl;qw=630;b[49]=1;}
if(u>=145&&u<150&&b[50]==0){cout<<"ͻ��ԪӤ����5��,��Ԫ������640�ꡣ"<<endl;qw=640;b[50]=1;} 
if(u>=150&&u<155&&b[51]==0){cout<<"ͻ��ԪӤ����1��,��Ԫ������650�ꡣ"<<endl;qw=650;b[51]=1;}
if(u>=155&&u<160&&b[52]==0){cout<<"ͻ��ԪӤ����2��,��Ԫ������660�ꡣ"<<endl;qw=660;b[52]=1;}
if(u>=160&&u<165&&b[53]==0){cout<<"ͻ��ԪӤ����3��,��Ԫ������670�ꡣ"<<endl;qw=670;b[53]=1;}
if(u>=165&&u<170&&b[54]==0){cout<<"ͻ��ԪӤ����4��,��Ԫ������680�ꡣ"<<endl;qw=680;b[54]=1;}
if(u>=170&&u<175&&b[55]==0){cout<<"ͻ��ԪӤ����5��,��Ԫ������690�ꡣ"<<endl;qw=690;b[55]=1;}
if(u>=175&&u<180&&b[56]==0){cout<<"ͻ��ԪӤ����1��,��Ԫ������700�ꡣ"<<endl;qw=700;b[56]=1;}
if(u>=180&&u<185&&b[57]==0){cout<<"ͻ��ԪӤ����2��,��Ԫ������710�ꡣ"<<endl;qw=710;b[57]=1;}
if(u>=185&&u<190&&b[58]==0){cout<<"ͻ��ԪӤ����3��,��Ԫ������720�ꡣ"<<endl;qw=720;b[58]=1;}
if(u>=190&&u<195&&b[59]==0){cout<<"ͻ��ԪӤ����4��,��Ԫ������730�ꡣ"<<endl;qw=730;b[59]=1;}
if(u>=195&&u<200&&b[60]==0){cout<<"ͻ��ԪӤ����5��,��Ԫ������740�ꡣ"<<endl;qw=740;b[60]=1;}

if(u>=200&&u<205&&b[61]==0){cout<<"ͻ�ƻ������1��,��Ԫ������750�ꡣ"<<endl;qw=750;b[61]=1;}
if(u>=205&&u<210&&b[62]==0){cout<<"ͻ�ƻ������2��,��Ԫ������760�ꡣ"<<endl;qw=760;b[62]=1;}
if(u>=210&&u<215&&b[63]==0){cout<<"ͻ�ƻ������3��,��Ԫ������770�ꡣ"<<endl;qw=770;b[63]=1;}
if(u>=215&&u<220&&b[64]==0){cout<<"ͻ�ƻ������4��,��Ԫ������780�ꡣ"<<endl;qw=780;b[64]=1;}
if(u>=220&&u<225&&b[65]==0){cout<<"ͻ�ƻ������5��,��Ԫ������790�ꡣ"<<endl;qw=790;b[65]=1;}
if(u>=225&&u<230&&b[66]==0){cout<<"ͻ�ƻ�������1��,��Ԫ������800�ꡣ"<<endl;qw=800;b[66]=1;}
if(u>=230&&u<235&&b[67]==0){cout<<"ͻ�ƻ�������2��,��Ԫ������810�ꡣ"<<endl;qw=810;b[67]=1;}
if(u>=235&&u<240&&b[68]==0){cout<<"ͻ�ƻ�������3��,��Ԫ������820�ꡣ"<<endl;qw=820;b[68]=1;}
if(u>=240&&u<245&&b[69]==0){cout<<"ͻ�ƻ�������4��,��Ԫ������830�ꡣ"<<endl;qw=830;b[69]=1;}
if(u>=245&&u<250&&b[70]==0){cout<<"ͻ�ƻ�������5��,��Ԫ������840�ꡣ"<<endl;qw=840;b[70]=1;}
if(u>=250&&u<255&&b[71]==0){cout<<"ͻ�ƻ������1��,��Ԫ������850�ꡣ"<<endl;qw=850;b[71]=1;}
if(u>=255&&u<260&&b[72]==0){cout<<"ͻ�ƻ������2��,��Ԫ������860�ꡣ"<<endl;qw=860;b[72]=1;}
if(u>=260&&u<265&&b[73]==0){cout<<"ͻ�ƻ������3��,��Ԫ������870�ꡣ"<<endl;qw=870;b[73]=1;}
if(u>=265&&u<270&&b[74]==0){cout<<"ͻ�ƻ������4��,��Ԫ������880�ꡣ"<<endl;qw=880;b[74]=1;}
if(u>=270&&u<300&&b[75]==0){cout<<"ͻ�ƻ������5��,��Ԫ������890�ꡣ"<<endl;qw=890;b[75]=1;}

if(u>=300&&u<310&&b[76]==0){cout<<"ͻ���������1��,��Ԫ������900�ꡣ"<<endl;qw=900;b[76]=1;}
if(u>=310&&u<320&&b[77]==0){cout<<"ͻ���������2��,��Ԫ������910�ꡣ"<<endl;qw=910;b[77]=1;}
if(u>=320&&u<330&&b[78]==0){cout<<"ͻ���������3��,��Ԫ������920�ꡣ"<<endl;qw=920;b[78]=1;}
if(u>=330&&u<340&&b[79]==0){cout<<"ͻ���������4��,��Ԫ������930�ꡣ"<<endl;qw=930;b[79]=1;}
if(u>=340&&u<350&&b[80]==0){cout<<"ͻ���������5��,��Ԫ������940�ꡣ"<<endl;qw=940;b[80]=1;}
if(u>=350&&u<360&&b[81]==0){cout<<"ͻ����������1��,��Ԫ������950�ꡣ"<<endl;qw=950;b[81]=1;}
if(u>=360&&u<370&&b[82]==0){cout<<"ͻ����������2��,��Ԫ������960�ꡣ"<<endl;qw=960;b[82]=1;}
if(u>=370&&u<380&&b[83]==0){cout<<"ͻ����������3��,��Ԫ������970�ꡣ"<<endl;qw=970;b[83]=1;}
if(u>=380&&u<390&&b[84]==0){cout<<"ͻ����������4��,��Ԫ������980�ꡣ"<<endl;qw=980;b[84]=1;}
if(u>=390&&u<400&&b[85]==0){cout<<"ͻ����������5��,��Ԫ������990�ꡣ"<<endl;qw=990;b[85]=1;}
if(u>=400&&u<410&&b[86]==0){cout<<"ͻ���������1��,��Ԫ������1000�ꡣ"<<endl;qw=1000;b[86]=1;}
if(u>=410&&u<420&&b[87]==0){cout<<"ͻ���������2��,��Ԫ������1010�ꡣ"<<endl;qw=1010;b[87]=1;}
if(u>=420&&u<430&&b[88]==0){cout<<"ͻ���������3��,��Ԫ������1020�ꡣ"<<endl;qw=1020;b[88]=1;}
if(u>=430&&u<440&&b[89]==0){cout<<"ͻ���������4��,��Ԫ������1030�ꡣ"<<endl;qw=1030;b[89]=1;}
if(u>=440&&u<450&&b[90]==0){cout<<"ͻ���������5��,��Ԫ������1040�ꡣ"<<endl;qw=1040;b[90]=1;}

if(u>=450&&u<450&&b[91]==0){cout<<"ͻ�ƺ������1��,��Ԫ������1050�ꡣ"<<endl;qw=1050;b[91]=1;}
if(u>=460&&u<460&&b[92]==0){cout<<"ͻ�ƺ������2��,��Ԫ������1060�ꡣ"<<endl;qw=1060;b[92]=1;}
if(u>=470&&u<470&&b[93]==0){cout<<"ͻ�ƺ������3��,��Ԫ������1070�ꡣ"<<endl;qw=1070;b[93]=1;}
if(u>=480&&u<480&&b[94]==0){cout<<"ͻ�ƺ������4��,��Ԫ������1080�ꡣ"<<endl;qw=1080;b[94]=1;}
if(u>=490&&u<490&&b[95]==0){cout<<"ͻ�ƺ������5��,��Ԫ������1090�ꡣ"<<endl;qw=1090;b[95]=1;}
if(u>=500&&u<500&&b[96]==0){cout<<"ͻ�ƺ�������1��,��Ԫ������1100�ꡣ"<<endl;qw=1100;b[96]=1;}
if(u>=510&&u<510&&b[97]==0){cout<<"ͻ�ƺ�������2��,��Ԫ������1110�ꡣ"<<endl;qw=1110;b[97]=1;}
if(u>=520&&u<520&&b[98]==0){cout<<"ͻ�ƺ�������3��,��Ԫ������1120�ꡣ"<<endl;qw=1120;b[98]=1;}
if(u>=530&&u<530&&b[99]==0){cout<<"ͻ�ƺ�������4��,��Ԫ������1130�ꡣ"<<endl;qw=1130;b[99]=1;}
if(u>=540&&u<540&&b[100]==0){cout<<"ͻ�ƺ�������5��,��Ԫ������1140�ꡣ"<<endl;qw=1140;b[100]=1;}
if(u>=550&&u<550&&b[101]==0){cout<<"ͻ�ƺ������1��,��Ԫ������1150�ꡣ"<<endl;qw=1150;b[101]=1;}
if(u>=560&&u<560&&b[102]==0){cout<<"ͻ�ƺ������2��,��Ԫ������1160�ꡣ"<<endl;qw=1160;b[102]=1;}
if(u>=570&&u<570&&b[103]==0){cout<<"ͻ�ƺ������3��,��Ԫ������1170�ꡣ"<<endl;qw=1170;b[103]=1;}
if(u>=580&&u<580&&b[104]==0){cout<<"ͻ�ƺ������4��,��Ԫ������1180�ꡣ"<<endl;qw=1180;b[104]=1;}
if(u>=590&&u<590&&b[105]==0){cout<<"ͻ�ƺ������5��,��Ԫ������1190�ꡣ"<<endl;qw=1190;b[105]=1;}
if(u>=600&&u<999&&b[106]==0){cout<<"����׼���ɽ���,��Ԫ������1200�ꡣ"<<endl;qw=1200;b[106]=1;}
cout<<endl;

Sleep(ui);
}
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
cout<<"��Ԫ�ա�"<<endl;Sleep(1000);
}
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE);
int mn=0;
if(ui==100&&u<=999){
system("cls");
cout<<"��һֱ��������һ�����۰ɣ����ĸ����㣬��ֵ=12������=12��Ǯ��=6ʱ���Դ���ʱ������"<<endl;	
Sleep(300);
}
system("cls");
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
cout<<"��ʼ�Ƚ٣�����"<<endl;
Sleep(300);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN);
cout<<"��Ԫ�������"<<endl;
if(s==1){cout<<"�㿹���ˣ�"<<endl;a=a-1;
Sleep(600);	
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"ľԪ�������"<<endl;
if(d==1){cout<<"�㿹���ˣ�"<<endl;a=a-1;
Sleep(600);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);
cout<<"ˮԪ�������"<<endl;
if(f==1){cout<<"�㿹���ˣ�"<<endl;a=a-1;
Sleep(600);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
cout<<"��Ԫ�������"<<endl;
if(g==1){cout<<"�㿹���ˣ�"<<endl;a=a-1;
Sleep(600);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_RED|FOREGROUND_GREEN);
cout<<"��Ԫ�������"<<endl;
if(h==1){cout<<"�㿹���ˣ�"<<endl;a=a-1;
Sleep(600);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN|FOREGROUND_BLUE);
cout<<"��ԴԪ�������"<<endl;
if(a>=1){cout<<"�㿹���ˣ�"<<endl;

}else{mn=1;}	
}else{mn=1;}
}else{mn=1;}
}else{mn=1;}
}else{mn=1;}
}else{mn=1;}


if(mn==1){SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);cout<<"��û�������������ˣ�";}	
if(mn==0&&u>=550){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_BLUE);
cout<<"��Ƚٳɹ�������Ϊ�ɡ�����Ϊ���ˡ���һ�������ˣ�"<<endl;}
else{if(mn==0){SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
cout<<"��������Ϊ�������޷��������������׽������ˣ�";}}	


int ad;
cout<<"����������ok(Сд)������Ա�������������롣"<<endl;
xianshi();
string sf;
cin>>sf;
yingcang();
if(sf=="ok"){cout<<"Բ��������";}
else if(sf=="tanyu"){ad=1;}
else{
cout<<"����������������룡"<<endl;
for(;;){
string qwe;
cout<<"����������ok(Сд)������Ա�������������롣"<<endl;
xianshi();
cin>>qwe;
yingcang();	
if(qwe=="ok"){cout<<"Բ��������";break;}
if(qwe=="tanyu"){ad=1;break;}
else {cout<<"����������������룡"<<endl;}	
}	
}

if(ad==1){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);
for(int i=1;i<=15;i++){w[i]=0;}
int j=50;	
cout<<"��������֮·������������10ǧ��."<<endl;
int ss=5;
for(int i=1;i<=j;i++){
int kk;
kk=rand()%25+1;
if(kk==1){cout<<"��"<<i<<"ǧ�꣺"<<"�չؿ����С���"<<endl;ss=ss+1;}	
if(kk==2){cout<<"��"<<i<<"ǧ�꣺"<<"�չؿ����С���"<<endl;ss=ss+1;}	
if(kk==3){cout<<"��"<<i<<"ǧ�꣺"<<"�չؿ����С���"<<endl;ss=ss+1;}	
if(kk==4){cout<<"��"<<i<<"ǧ�꣺"<<"�չؿ����С���"<<endl;ss=ss+1;}
if(kk==5){cout<<"��"<<i<<"ǧ�꣺"<<"�չؿ����С���"<<endl;ss=ss+1;}
if(kk==6){cout<<"��"<<i<<"ǧ�꣺"<<"�չؿ����С���"<<endl;ss=ss+1;}
if(kk==7){cout<<"��"<<i<<"ǧ�꣺"<<"�չؿ����С���"<<endl;ss=ss+1;}
if(kk==8){cout<<"��"<<i<<"ǧ�꣺"<<"�չؿ����С���"<<endl;ss=ss+1;}
if(kk==9){cout<<"��"<<i<<"ǧ�꣺"<<"�չؿ����С���"<<endl;ss=ss+1;}	
if(kk==10){cout<<"��"<<i<<"ǧ�꣺"<<"�չؿ����С���"<<endl;ss=ss+1;}	
if(kk==11){cout<<"��"<<i<<"ǧ�꣺"<<"�չؿ����С���"<<endl;ss=ss+1;}	
if(kk==12){cout<<"��"<<i<<"ǧ�꣺"<<"�չؿ����С���"<<endl;ss=ss+1;}	
if(kk==13){cout<<"��"<<i<<"ǧ�꣺"<<"�չؿ����С���"<<endl;ss=ss+1;}	
if(kk==14){cout<<"��"<<i<<"ǧ�꣺"<<"�չؿ����С���"<<endl;ss=ss+1;}	
if(kk==15){cout<<"��"<<i<<"ǧ�꣺"<<"�չؿ����С���"<<endl;ss=ss+1;}	
if(kk==16){cout<<"��"<<i<<"ǧ�꣺"<<"�չؿ����С���"<<endl;ss=ss+1;}	
if(kk==17){cout<<"��"<<i<<"ǧ�꣺"<<"������ǿ��˫�ޣ���Ϊ����X."<<endl;ss=ss+2;}
if(kk==18){cout<<"��"<<i<<"ǧ�꣺"<<"������ǿ��˫�ޣ���Ϊ����X."<<endl;ss=ss+2;}	
if(kk==19){cout<<"��"<<i<<"ǧ�꣺"<<"������ǿ��˫�ޣ���Ϊ����X."<<endl;ss=ss+2;}	
if(kk==20){cout<<"��"<<i<<"ǧ�꣺"<<"���޶�����Ϊ������"<<endl;ss=ss+2;}	
if(kk==21){cout<<"��"<<i<<"ǧ�꣺"<<"���޶�����Ϊ������"<<endl;ss=ss+2;}
if(kk==22){cout<<"��"<<i<<"ǧ�꣺"<<"���޶�����Ϊ������"<<endl;ss=ss+2;}
if(kk==23){cout<<"��"<<i<<"ǧ�꣺"<<"���޶�����Ϊ������"<<endl;ss=ss+2;}
if(kk==24){cout<<"��"<<i<<"ǧ�꣺"<<"���޶�����Ϊ������"<<endl;ss=ss+2;}
if(kk==25){cout<<"��"<<i<<"ǧ�꣺"<<"���񽲿Σ�������Ϊ������"<<endl;ss=ss+5;}

if(w[1]==0&&ss==10||ss>10&&ss<15&&w[1]==0){cout<<"��ﵽɢ�����ڣ�����������15ǧ�ꡣ"<<endl;j=15;w[1]=1;}
if(w[2]==0&&ss==15||ss>15&&ss<20&&w[2]==0){cout<<"��ﵽɢ�����ڣ�����������20ǧ�ꡣ"<<endl;j=20;w[2]=1;}
if(w[3]==0&&ss==20||ss>20&&ss<25&&w[3]==0){cout<<"��ﵽɢ�����ڣ�����������25ǧ�ꡣ"<<endl;j=25;w[3]=1;}
if(w[4]==0&&ss==25||ss>25&&ss<30&&w[4]==0){cout<<"��ﵽ�������ڣ�����������30ǧ�ꡣ"<<endl;j=30;w[4]=1;}
if(w[5]==0&&ss==30||ss>30&&ss<35&&w[5]==0){cout<<"��ﵽ�������ڣ�����������35ǧ�ꡣ"<<endl;j=35;w[5]=1;}
if(w[6]==0&&ss==35||ss>35&&ss<40&&w[6]==0){cout<<"��ﵽ�������ڣ�����������40ǧ�ꡣ"<<endl;j=40;w[6]=1;}
if(w[7]==0&&ss==40||ss>40&&ss<45&&w[7]==0){cout<<"��ﵽ�������ڣ�����������45ǧ�ꡣ"<<endl;j=45;w[7]=1;}
if(w[8]==0&&ss==45||ss>45&&ss<50&&w[8]==0){cout<<"��ﵽ�������ڣ�����������50ǧ�ꡣ"<<endl;j=50;w[8]=1;}
if(w[9]==0&&ss==50||ss>50&&ss<55&&w[9]==0){cout<<"��ﵽ�������ڣ�����������55ǧ�ꡣ"<<endl;j=55;w[9]=1;}
if(w[10]==0&&ss==65||ss>55&&ss<60&&w[10]==0){cout<<"��ﵽ�������ڣ�����������60ǧ�ꡣ"<<endl;j=60;w[10]=1;}
if(w[11]==0&&ss==60||ss>60&&ss<70&&w[11]==0){cout<<"��ﵽ�������ڣ�����������65ǧ�ꡣ"<<endl;j=65;w[11]=1;}
if(w[12]==0&&ss==70||ss>70&&ss<80&&w[12]==0){cout<<"��ﵽ�������ڣ�����������70ǧ�ꡣ"<<endl;j=70;w[12]=1;}
if(w[13]==0&&ss==80||ss>80&&ss<90&&w[13]==0){cout<<"��ﵽ�������ڣ�����������75ǧ�ꡣ"<<endl;j=75;w[13]=1;}
if(w[14]==0&&ss==90||ss>90&&ss<100&&w[14]==0){cout<<"��ﵽ�������ڣ�����������80ǧ�ꡣ"<<endl;j=80;w[14]=1;}
if(w[15]==0&&ss==100||ss>100&&ss<110&&w[15]==0){cout<<"��ﵽ�������ڣ�����������85ǧ�ꡣ"<<endl;j=85;w[15]=1;}

cout<<endl;
Sleep(io);
}
cout<<"��Ԫ��!";
}}




if(q==2){
system("cls");
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
cout<<"���ڽ�������ʾ����Ժ�......"<<endl;
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);
for(int i=1;i<=20;i++){
if(i>=1&&i<=10||i>=17&&i<=20){Sleep(200);cout<<"��";}
else {Sleep(350);cout<<"��";}

}
system("cls");
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE|FOREGROUND_RED|FOREGROUND_GREEN);
cout<<"�ɹ���������ʾ�"<<endl<<endl;
string A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R;
int dfg;
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE|FOREGROUND_RED|FOREGROUND_GREEN);	
cout<<"����ʽ��ʼ�����ʾ�ǰ������д������ʵ��Ϣ��"<<endl;Sleep(200);
cout<<"������"<<endl;
cout<<"�Ա�"<<endl;
cout<<"���䣺"<<endl;
string CSDN;
string csdn;
string xpxp;
string xpxpxp;
xianshi();
gotoxy(6,3);cin>>csdn;
yingcang();
if(csdn=="�����"||csdn=="̷����"){
cout<<"����Ա�����ã�"<<endl;Sleep(200);
cout<<"ϵͳ���Զ�ʶ����ݡ���ȷ����Ϣ��"<<endl;Sleep(100);
cout<<"������"<<csdn<<endl;
if(csdn=="�����"){
cout<<"�Ա���"<<endl;CSDN="��";
cout<<"���䣺11"<<endl;xpxp="11";Sleep(200);
cout<<"����Ϣ�������������Ա���룬�������� 1"<<endl;Sleep(100);
xianshi();
cin>>xpxpxp;
yingcang();
if(xpxpxp=="tanyu") cout<<" ";
else if(xpxpxp=="1"){
cout<<"����ϵ����Ա�޸���Ϣ"<<endl;
system("pause");
return 0;
}
}
else if(csdn=="̷����"){
cout<<"�Ա���"<<endl;CSDN="��";
cout<<"���䣺11"<<endl;xpxp="11";Sleep(200);
cout<<"����Ϣ�������������Ա���룬�������� 1"<<endl;Sleep(100);
xianshi();
cin>>xpxpxp;
yingcang();
if(xpxpxp=="tanyu") cout<<" ";
else if(xpxpxp=="1"){
cout<<"����ϵ����Ա�޸���Ϣ"<<endl;
system("pause");
return 0;
}
}
}
else{
gotoxy(6,4);cin>>CSDN;
gotoxy(6,5);cin>>xpxp;
}
system("cls");
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"��ʽ��������ʾ�"<<endl;Sleep(200);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE|FOREGROUND_RED|FOREGROUND_GREEN);	
cout<<"�����ʾ�:"<<endl;Sleep(200);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
cout<<"���ε����ʾ��ÿһ���ⶼҪ����˼������ѡ��"<<endl<<endl;Sleep(200);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"��ʼ���⡣"<<endl<<endl<<endl;Sleep(200);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
cout<<"��1��:�������������Ʒ������"<<endl;Sleep(200);
cout<<"A.����  B.������"<<endl;Sleep(100);
xianshi();
cin>>A;
yingcang();
if(A=="B"){
cout<<"���ʻ�����Щ��Ҫ�޸�"<<endl;Sleep(100);
xianshi();
cin>>B; 
yingcang();
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"��л���ķ�����"<<endl;Sleep(200);
}
else if(A=="A"){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"��л�������ǵ��Ͽ�!";Sleep(2000);} 
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<endl<<endl<<"��һ��"<<endl;Sleep(200);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
cout<<"��2��:������֪�������Ʒ�Ŀ�������"<<endl;Sleep(200);
cout<<"A.֪��  B.��֪��"<<endl;Sleep(100);
xianshi();
cin>>C; 
yingcang();
if(C=="A"){
cout<<"���������Ʒ�Ŀ�������˭(��������)"<<endl;Sleep(100);
xianshi();
cin>>K; 
yingcang();
if(K!="̷����"){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
cout<<"�ش����"<<endl;Sleep(200);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"�����Ʒ�Ŀ�������:̷����";Sleep(200);
}
else if(K=="̷����"){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"�ش���ȷ��";Sleep(200);
}
}
else if(C=="B"){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"�����Ʒ�Ŀ�������:̷����";Sleep(2000);}
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<endl<<endl<<"��һ��"<<endl;Sleep(200);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
cout<<"��3��:�������������Ʒ�Ŀ�������ϵ��"<<endl;Sleep(200);
cout<<"A.��ϵ  B.����ϵ"<<endl;Sleep(100);
xianshi();
cin>>J; 
yingcang();
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"��һ��"<<endl;Sleep(200);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
cout<<"��4��:������֪�������Ʒ���ĸ������ҿ�������"<<endl;Sleep(200);
cout<<"A.֪��  B.��֪��"<<endl;Sleep(100);
xianshi();
cin>>G; 
yingcang();
if(G=="A"){
cout<<"���������Ʒ�Ĺ��������ĸ������ң�"<<endl;Sleep(100);
xianshi();
cin>>L; 
yingcang();
if(L!="̷������"){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
cout<<"�ش����"<<endl;Sleep(200);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"���������Ʒ�Ĺ�������:̷������";Sleep(200);
}
else if(L=="̷������"){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"�ش���ȷ��";Sleep(200);
}
}
else if(G=="B"){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"���������Ʒ�Ĺ�������:̷������";Sleep(2000);} 
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<endl<<endl<<"��һ��"<<endl;Sleep(200);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
cout<<"��5��:������֪�������Ʒ�Ĺ���������Щ��Ա��"<<endl;Sleep(200);
cout<<"A.֪��  B.��֪��"<<endl;Sleep(100);
xianshi();
cin>>H; 
yingcang();
if(H=="A"){
cout<<"�����������������Щ��Ա��(��ʾ:������)"<<endl;Sleep(100);
xianshi();
cin>>M>>N;
yingcang();
if(M=="̷����"&&N=="�����"||M=="�����"&&N=="̷����"){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"�ش���ȷ��";Sleep(200);
}
else{
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
cout<<"�ش����"<<endl;Sleep(200);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"�������������������Ա:̷�����������";Sleep(200);
}
}
else if(H=="B"){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"�������������������Ա:̷�����������";Sleep(2000);} 
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<endl<<endl<<"��һ��"<<endl;Sleep(200);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
cout<<"��6��:�������������������ϵ��"<<endl;Sleep(200);
cout<<"A.��ϵ  B.����ϵ"<<endl;Sleep(100);
xianshi();
cin>>I; 
yingcang();
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"��һ��"<<endl;Sleep(200);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
cout<<"��7��:������֪�������Ʒ�ᵽ��һ��ͣ����"<<endl;Sleep(200);
cout<<"A.֪��  B.��֪��"<<endl;Sleep(100);
xianshi();
cin>>D; 
yingcang();
if(D=="A"){
cout<<"���������Ʒ�ᵽ��һ��ͣ����"<<endl;Sleep(100);
xianshi();
cin>>O; 
yingcang();
if(O!="x.x"){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
cout<<"�ش����"<<endl;Sleep(200);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"�����Ʒ���ᵽx.xͣ��";Sleep(200); 
}
else{
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"�ش���ȷ";Sleep(200);
}
}
else if(D=="B"){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"�����Ʒ���ᵽx.xͣ��";Sleep(2000);}
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<endl<<endl<<"��һ��"<<endl;Sleep(200);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
cout<<"��8��:������֪������������������Ʒ���ĸ��汾��"<<endl;Sleep(200);
cout<<"A.֪��  B.��֪��"<<endl;Sleep(100);
xianshi();
cin>>E; 
yingcang();
if(E=="A"){
cout<<"�������������������汾���ĸ��汾�ģ�"<<endl;Sleep(100);
xianshi();
cin>>P; 
yingcang();
if(P!="7.0���԰�"){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
cout<<"�ش����"<<endl;Sleep(200);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"�������������7.0���԰�";Sleep(200); 
}
else{
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"�ش���ȷ";Sleep(200);
}
}
else if(E=="B"){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"�������������7.0���԰�";Sleep(2000);}
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<endl<<endl<<"��һ��"<<endl;Sleep(200);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
cout<<"��9��:�������Ǵ���һ���汾����ģ�"<<endl;Sleep(200);
cout<<"A. 1.0  B. 1.5  C. 2.0  D. 2.5  E. 3.0  F. 3.5  G. 4.0  H. 4.5  I. 5.0  j. 5.5  k. 6.0  L. 6.5  M. 7.0"<<endl;Sleep(100);
xianshi();
cin>>F;
yingcang();
system("cls");
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"����������"<<"       ";Sleep(200);
cout<<csdn<<endl<<endl;Sleep(100);
cout<<"�����Ա���"<<"       ";Sleep(200);
cout<<CSDN<<endl<<endl;Sleep(100);
cout<<"����������"<<"       ";Sleep(200);
cout<<xpxp<<endl<<endl;Sleep(100);
cout<<"��1�����Ĵ���"<<"  ";Sleep(200);
cout<<A<<endl<<endl;Sleep(100);
cout<<"��2�����Ĵ���"<<"  ";Sleep(200);
cout<<C<<endl<<endl;Sleep(100);
cout<<"��3�����Ĵ���"<<"  ";Sleep(200);
cout<<J<<endl<<endl;Sleep(100);
cout<<"��4�����Ĵ���"<<"  ";Sleep(200);
cout<<G<<endl<<endl;Sleep(100);
cout<<"��5�����Ĵ���"<<"  ";Sleep(200);
cout<<H<<endl<<endl;Sleep(100);
cout<<"��6�����Ĵ���"<<"  ";Sleep(200);
cout<<I<<endl<<endl;Sleep(100);
cout<<"��7�����Ĵ���"<<"  ";Sleep(200);
cout<<D<<endl<<endl;Sleep(100);
cout<<"��8�����Ĵ���"<<"  ";Sleep(200);
cout<<E<<endl<<endl;Sleep(100);
cout<<"��9�����Ĵ���"<<"  ";Sleep(200);
cout<<F<<endl<<endl;Sleep(100);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
cout<<"�������ϴ��Ƿ���Ҫ������д�������Ҫ������д��������1���������Ҫ������д��������0"<<endl;Sleep(100);
xianshi();
cin>>dfg;
yingcang();
system("cls");
if(dfg==1){
for(;;){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
cout<<"�������½�������ʾ����Ժ�......"<<endl;
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);
for(int i=1;i<=20;i++){
if(i>=1&&i<=10||i>=17&&i<=20){Sleep(200);cout<<"��";}
else {Sleep(350);cout<<"��";}

}
system("cls");
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE|FOREGROUND_RED|FOREGROUND_GREEN);
cout<<"�����½�������ʾ�"<<endl<<endl;Sleep(100);
string A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R;
int dfg;
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE|FOREGROUND_RED|FOREGROUND_GREEN);	
cout<<"����ʽ��ʼ�����ʾ�ǰ������д������ʵ��Ϣ��"<<endl;Sleep(200);
cout<<"������"<<endl;
cout<<"�Ա�"<<endl;
cout<<"���䣺"<<endl;
string CSDN;
string csdn;
string xpxp;
string xpxpxp;
xianshi();
gotoxy(6,3);cin>>csdn;
yingcang();
if(csdn=="�����"||csdn=="̷����"){
cout<<"����Ա�����ã�"<<endl;Sleep(200);
cout<<"ϵͳ���Զ�ʶ����ݡ���ȷ����Ϣ��"<<endl;Sleep(100);
cout<<"������"<<csdn<<endl;
if(csdn=="�����"){
cout<<"�Ա���"<<endl;CSDN="��";
cout<<"���䣺11"<<endl;xpxp="11";Sleep(200);
cout<<"����Ϣ�������������Ա���룬�������� 1"<<endl;Sleep(100);
xianshi();
cin>>xpxpxp;
yingcang();
if(xpxpxp=="tanyu") cout<<" ";
else if(xpxpxp=="1"){
cout<<"����ϵ����Ա�޸���Ϣ"<<endl;
system("pause");
return 0;
}
}
else if(csdn=="̷����"){
cout<<"�Ա���"<<endl;CSDN="��";
cout<<"���䣺11"<<endl;xpxp="11";Sleep(200);
cout<<"����Ϣ�������������Ա���룬�������� 1"<<endl;Sleep(100);
xianshi();
cin>>xpxpxp;
yingcang();
if(xpxpxp=="tanyu") cout<<" ";
else if(xpxpxp=="1"){
cout<<"����ϵ����Ա�޸���Ϣ"<<endl;
system("pause");
return 0;
}
}
}
else{
gotoxy(6,4);cin>>CSDN;
gotoxy(6,5);cin>>xpxp;
}
system("cls");
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"��ʽ��������ʾ�"<<endl;Sleep(200);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE|FOREGROUND_RED|FOREGROUND_GREEN);	
cout<<"�����ʾ�:"<<endl;Sleep(200);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
cout<<"���ε����ʾ��ÿһ���ⶼҪ����˼������ѡ��"<<endl<<endl;Sleep(200);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"��ʼ���⡣"<<endl<<endl<<endl;Sleep(200);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
cout<<"��1��:�������������Ʒ������"<<endl;Sleep(200);
cout<<"A.����  B.������"<<endl;Sleep(100);
xianshi();
cin>>A;
yingcang();
if(A=="B"){
cout<<"���ʻ�����Щ��Ҫ�޸�"<<endl;Sleep(100);
xianshi();
cin>>B; 
yingcang();
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"��л���ķ�����"<<endl;Sleep(200);
}
else if(A=="A"){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"��л�������ǵ��Ͽ�!";Sleep(2000);} 
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<endl<<endl<<"��һ��"<<endl;Sleep(200);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
cout<<"��2��:������֪�������Ʒ�Ŀ�������"<<endl;Sleep(200);
cout<<"A.֪��  B.��֪��"<<endl;Sleep(100);
xianshi();
cin>>C; 
yingcang();
if(C=="A"){
cout<<"���������Ʒ�Ŀ�������˭(��������)"<<endl;Sleep(100);
xianshi();
cin>>K; 
yingcang();
if(K!="̷����"){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
cout<<"�ش����"<<endl;Sleep(200);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"�����Ʒ�Ŀ�������:̷����";Sleep(200);
}
else if(K=="̷����"){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"�ش���ȷ��";Sleep(200);
}
}
else if(C=="B"){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"�����Ʒ�Ŀ�������:̷����";Sleep(2000);}
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<endl<<endl<<"��һ��"<<endl;Sleep(200);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
cout<<"��3��:�������������Ʒ�Ŀ�������ϵ��"<<endl;Sleep(200);
cout<<"A.��ϵ  B.����ϵ"<<endl;Sleep(100);
xianshi();
cin>>J; 
yingcang();
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"��һ��"<<endl;Sleep(200);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
cout<<"��4��:������֪�������Ʒ���ĸ������ҿ�������"<<endl;Sleep(200);
cout<<"A.֪��  B.��֪��"<<endl;Sleep(100);
xianshi();
cin>>G; 
yingcang();
if(G=="A"){
cout<<"���������Ʒ�Ĺ��������ĸ������ң�"<<endl;Sleep(100);
xianshi();
cin>>L; 
yingcang();
if(L!="̷������"){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
cout<<"�ش����"<<endl;Sleep(200);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"���������Ʒ�Ĺ�������:̷������";Sleep(200);
}
else if(L=="̷������"){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"�ش���ȷ��";Sleep(200);
}
}
else if(G=="B"){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"���������Ʒ�Ĺ�������:̷������";Sleep(2000);} 
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<endl<<endl<<"��һ��"<<endl;Sleep(200);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
cout<<"��5��:������֪�������Ʒ�Ĺ���������Щ��Ա��"<<endl;Sleep(200);
cout<<"A.֪��  B.��֪��"<<endl;Sleep(100);
xianshi();
cin>>H; 
yingcang();
if(H=="A"){
cout<<"�����������������Щ��Ա��(��ʾ:������)"<<endl;Sleep(100);
xianshi();
cin>>M>>N;
yingcang();
if(M=="̷����"&&N=="�����"||M=="�����"&&N=="̷����"){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"�ش���ȷ��";Sleep(200);
}
else{
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
cout<<"�ش����"<<endl;Sleep(200);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"�������������������Ա:̷�����������";Sleep(200);
}
}
else if(H=="B"){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"�������������������Ա:̷�����������";Sleep(2000);} 
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<endl<<endl<<"��һ��"<<endl;Sleep(200);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
cout<<"��6��:�������������������ϵ��"<<endl;Sleep(200);
cout<<"A.��ϵ  B.����ϵ"<<endl;Sleep(100);
xianshi();
cin>>I; 
yingcang();
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"��һ��"<<endl;Sleep(200);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
cout<<"��7��:������֪�������Ʒ�ᵽ��һ��ͣ����"<<endl;Sleep(200);
cout<<"A.֪��  B.��֪��"<<endl;Sleep(100);
xianshi();
cin>>D; 
yingcang();
if(D=="A"){
cout<<"���������Ʒ�ᵽ��һ��ͣ����"<<endl;Sleep(100);
xianshi();
cin>>O; 
yingcang();
if(O!="x.x"){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
cout<<"�ش����"<<endl;Sleep(200);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"�����Ʒ���ᵽx.xͣ��";Sleep(200); 
}
else{
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"�ش���ȷ";Sleep(200);
}
}
else if(D=="B"){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"�����Ʒ���ᵽx.xͣ��";Sleep(2000);}
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<endl<<endl<<"��һ��"<<endl;Sleep(200);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
cout<<"��8��:������֪������������������Ʒ���ĸ��汾��"<<endl;Sleep(200);
cout<<"A.֪��  B.��֪��"<<endl;Sleep(100);
xianshi();
cin>>E; 
yingcang();
if(E=="A"){
cout<<"�������������������汾���ĸ��汾�ģ�"<<endl;Sleep(100);
xianshi();
cin>>P; 
yingcang();
if(P!="7.0���԰�"){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
cout<<"�ش����"<<endl;Sleep(200);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"�������������7.0���԰�";Sleep(200); 
}
else{
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"�ش���ȷ";Sleep(200);
}
}
else if(E=="B"){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"�������������7.0���԰�";Sleep(2000);}
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<endl<<endl<<"��һ��"<<endl;Sleep(200);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
cout<<"��9��:�������Ǵ���һ���汾����ģ�"<<endl;Sleep(200);
cout<<"A. 1.0  B. 1.5  C. 2.0  D. 2.5  E. 3.0  F. 3.5  G. 4.0  H. 4.5  I. 5.0  j. 5.5  k. 6.0  L. 6.5  M.7.0"<<endl;Sleep(100);
xianshi();
cin>>F;
yingcang();
system("cls");
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"����������"<<"       ";Sleep(200);
cout<<csdn<<endl<<endl;Sleep(100);
cout<<"�����Ա���"<<"       ";Sleep(200);
cout<<CSDN<<endl<<endl;Sleep(100);
cout<<"����������"<<"       ";Sleep(200);
cout<<xpxp<<endl<<endl;Sleep(100);
cout<<"��1�����Ĵ���"<<"  ";Sleep(200);
cout<<A<<endl<<endl;Sleep(100);
cout<<"��2�����Ĵ���"<<"  ";Sleep(200);
cout<<C<<endl<<endl;Sleep(100);
cout<<"��3�����Ĵ���"<<"  ";Sleep(200);
cout<<J<<endl<<endl;Sleep(100);
cout<<"��4�����Ĵ���"<<"  ";Sleep(200);
cout<<G<<endl<<endl;Sleep(100);
cout<<"��5�����Ĵ���"<<"  ";Sleep(200);
cout<<H<<endl<<endl;Sleep(100);
cout<<"��6�����Ĵ���"<<"  ";Sleep(200);
cout<<I<<endl<<endl;Sleep(100);
cout<<"��7�����Ĵ���"<<"  ";Sleep(200);
cout<<D<<endl<<endl;Sleep(100);
cout<<"��8�����Ĵ���"<<"  ";Sleep(200);
cout<<E<<endl<<endl;Sleep(100);
cout<<"��9�����Ĵ���"<<"  ";Sleep(200);
cout<<F<<endl<<endl;Sleep(100);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
cout<<"�������ϴ��Ƿ���Ҫ������д�������Ҫ������д��������1���������Ҫ������д��������0"<<endl;Sleep(100);
xianshi();
cin>>dfg;
yingcang();
system("cls");
if(dfg==0) break; 
}
}
MessageBox(NULL,"����Ʒ�Ŀ�������:̷����","��л���Ļش�!",MB_OK);
MessageBox(NULL,"����Ʒ������Ϸ���ݵ���:̷����","��л���Ļش�!",MB_OK);
MessageBox(NULL,"����Ʒ������ͷ����β�������ʾ���ɢ�޸ĵ���:�����","��л���Ļش�!",MB_OK);
MessageBox(NULL,"����Ʒ�Ĺ�������:̷������","��л���Ļش�!",MB_OK);
MessageBox(NULL,"����Ʒ�Ĵ�������:�����.̷����.������.��˸��.����.�¿���.�����.��Դ��.��ΰ.���ӽ�.��ΰ��.ŷ������.֣����.������.¬��ƽ.���黶.������.��ϣȻ","��л���Ļش�!",MB_OK);
MessageBox(NULL,"����̷�����һ����Ŭ������������Ʒ���ټ���","��л���Ļش�!",MB_OK);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE|FOREGROUND_RED|FOREGROUND_GREEN);	
} 
if(q==0){
system("cls");
cout<<"�����˳���Ϸ��"<<endl;
ShellExecuteA(NULL, "open", "C:\\c++�����ؿ�ģ����������7.0�棩���԰�\\.renshengchongkaimoniqi\\�����ļ�\\�����ļ�2.exe",0,0,1);
Sleep(21900);
cout<<"���˳���Ϸ���ټ�"<<endl;
}
system("pause");
	return 0;
}
