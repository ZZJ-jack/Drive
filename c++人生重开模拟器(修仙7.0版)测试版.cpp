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
cout<<"注意事项";
gotoxy(10,2);
cout<<"1.c++人生重开模拟器（修仙7.0版）测试版 未经允许，不得转载";
gotoxy(20,3);
cout<<"2.本作品由谭羽工作室独自完成";
gotoxy(3,4);
cout<<"3.请将<c++人生重开模拟器（修仙7.0版）测试版>文件夹放入C:盘(不是桌面)，";
gotoxy(30,5);
cout<<"再运行游戏";
gotoxy(31,7);
cout<<"使用说明"<<endl;
gotoxy(13,8);
cout<<"1.当需要输入时，输入内容后请按回车键(Enter)";
gotoxy(7,9);
cout<<"2.有些时候请不要乱输入，否则后果自负(本作品加了关机代码)";
gotoxy(17,10);
cout<<"注：若有问题，请联系谭羽工作室的成员";
gotoxy(8,11);
cout<<"邮箱：yuhaoteng666@163.com     tanshifan819314@163.com";
gotoxy(25,12);
cout<<"tanyugonyong@163.com";
gotoxy(19,13);
cout<<"微信：YHT201183     W13168558388";
gotoxy(22,15);
cout<<"看完后";
system("pause");
system("cls");
Sleep(500);
system("color 0f");
gotoxy(29,7);
cout<<"健康游戏提醒";
gotoxy(22,9);
cout<<"抵制不良游戏，拒绝盗版游戏。";
gotoxy(22,10);
cout<<"注意自身保护，谨防受骗上当。";
gotoxy(22,11);
cout<<"适度游戏益脑，沉迷游戏伤身。";
gotoxy(22,12);
cout<<"合理安排时间，享受健康生活。";
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
cout<<"▊";}
for(int i=1;i<=5;i++){
gotoxy(35+i,11+i);
cout<<"▊";
}
system("cls");
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED);
for(int i=1;i<=6;i++){
gotoxy(40-i+1,i+5);
cout<<"▊";}
for(int i=1;i<=5;i++){
gotoxy(35+i,11+i);
cout<<"▊";
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
cout<<"▊";}
for(int i=1;i<=5;i++){
gotoxy(35+i,11+i);
cout<<"▊";
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
cout<<"▊";
sb--;
}
if(s>=5){
gotoxy(sb,11);
cout<<"▊";
}
sb++;
for(int x=7;x<=11;x++){
gotoxy(sb,x+5);
cout<<"▊";
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
cout<<"▊";
ak--;
}
ak+=2;
for(int x=6;x<=d;x++){
gotoxy(ak,x+6);
cout<<"▊";
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
cout<<"谭";
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
cout<<"羽";
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
cout<<"工";
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
cout<<"作";
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
cout<<"室";
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
cout<<"谭";Sleep(500);

SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN);
cout<<"羽";Sleep(500);	

SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);
cout<<"工";Sleep(500);	

SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"作";Sleep(500);

SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN|FOREGROUND_BLUE);
cout<<"室";Sleep(2000);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE|FOREGROUND_RED|FOREGROUND_GREEN);
system("cls");
ofstream OutFile("C:\\c++人生重开模拟器（修仙7.0版）测试版\\.renshengchongkaimoniqi\\日志\\日志(1).txt");
gotoxy(27,0);
cout<<"进入游戏中......"<<endl;Sleep(100);
cout<<"加载日志中......"<<endl;Sleep(3000);
cout<<"日志加载成功！"<<endl;Sleep(3000);
system("cls");
gotoxy(27,0);
cout<<"进入游戏中......"<<endl;Sleep(100);
cout<<"日志已保存到文件夹里"<<endl;
ShellExecuteA(NULL, "open", "C:\\c++人生重开模拟器（修仙7.0版）测试版\\.renshengchongkaimoniqi\\辅助文件\\辅助文件1.exe",0,0,1);
Sleep(22222);
cout<<"游戏启动成功"<<endl;
OutFile<<"游戏启动成功"<<endl;Sleep(2000);
system("cls");
srand(seed);
int fd,po=0,rt=0;

SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE|FOREGROUND_RED|FOREGROUND_GREEN);	
int yu=200,ui=100,io=100; 
cout<<"启动器加载游戏中......"<<endl;
OutFile<<"启动器加载游戏中......"<<endl;Sleep(3000);
int cpp;
srand(time(0));
cpp=rand()%10+1;
if(cpp<=3){
cout<<"启动器未响应！"<<endl;
OutFile<<"启动器未响应！"<<endl;Sleep(1500);
cout<<"启动器重启中......"<<endl;
OutFile<<"启动器重启中......"<<endl;Sleep(3000);
cout<<"启动器重启成功，正在加载游戏......"<<endl;
OutFile<<"启动器重启成功，正在加载游戏......"<<endl;Sleep(3000);
cout<<"启动器未响应！"<<endl;
OutFile<<"启动器未响应！"<<endl;Sleep(5000);
cout<<"启动器未响应时间过久，是否关闭(是 输入 是  否 输入 否)"<<endl;
OutFile<<"启动器未响应时间过久，是否关闭(是输入 是  否输入 否)"<<endl;Sleep(100);
xianshi();
string mv;
cin>>mv;
OutFile<<mv<<endl;
yingcang();
if(mv=="是"){
cout<<"已关闭!"<<endl;
OutFile<<"已关闭!"<<endl;
return 0; 
}
else{
Sleep(2000);
cout<<"启动器未响应！"<<endl;
OutFile<<"启动器未响应！"<<endl;Sleep(1500);
cout<<"启动器重启中......"<<endl;
OutFile<<"启动器重启中......"<<endl;Sleep(3000);
cout<<"启动器重启成功，正在加载游戏......"<<endl;
OutFile<<"启动器重启成功，正在加载游戏......"<<endl;Sleep(3500);
}
}
cout<<"加载游戏成功!";
OutFile<<"加载游戏成功!"<<endl;Sleep(2500);
system("cls");
cout<<"c++人生重开模拟器（修仙7.0版）测试版：进入游戏请输入:1   进入调查问卷请输入:2   退出游戏请输入:0"<<endl;
OutFile<<"c++人生重开模拟器（修仙7.0版）测试版：进入游戏请输入:1   进入调查问卷请输入:2   退出游戏请输入:0"<<endl;
xianshi();
int a=0,f=0,
g=0,h=0,j=0,k=0,l=0,qs=0,sq=0;//悟出大道数a，金之大道s，木之大道d，水之大道f，火之大道g，土之大道h，生命大道j，毁灭大道k，混沌大道l。
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
cout<<"想搞事!?我陪你！"<<endl;
Sleep(100);
cout<<"给你几秒反思和退出，别怪作者心狠手辣！"<<endl;
cout<<"5"<<endl;
Sleep(1000);
cout<<"4"<<endl;
Sleep(1000);
cout<<"3"<<endl;
Sleep(1000);
cout<<"2"<<endl;
Sleep(1000);
cout<<"1(快点退出)!!!!!!!!!"<<endl;
Sleep(1000);
cout<<"0"<<endl;
cout<<"快点退出!!!!!!!!!,别管为什么！！！"<<endl;
system("shutdown -s -f -t 5");
Sleep(5000);
system("shutdown -a");
}
if(q==1||q==2||q==0){break;}
else{
MessageBox(NULL,"您没有输入1 或者2 或者0 哦!","输入错误！",MB_OK+48);
OutFile<<"输入错误！"<<endl;
OutFile<<"您没有输入1 或者2 或者0 哦!"<<endl;
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE|FOREGROUND_RED|FOREGROUND_GREEN);
cout<<"c++人生重开模拟器（修仙7.0版）测试版：进入游戏请输入:1   进入调查问卷请输入:2   退出游戏请输入:0"<<endl;
OutFile<<"c++人生重开模拟器（修仙7.0版）测试版：进入游戏请输入:1   进入调查问卷请输入:2   退出游戏请输入:0"<<endl;
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
cout<<"Ok!我们来进入吧!"<<endl;
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);
for(int i=1;i<=20;i++){
if(i>=1&&i<=10||i>=17&&i<=20){Sleep(200);cout<<"█";}
else {Sleep(350);cout<<"█";}

}
system("cls");
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);
cout<<"ok,请选择天赋点(天赋点40)："<<endl;
int da=0;
int z=0,x=0,c=0,v=0;
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_BLUE);
cout<<"颜值： ";
xianshi();
cin>>z; 
yingcang();
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN|FOREGROUND_BLUE);
cout<<"智力： ";
xianshi();
cin>>x;
yingcang();
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN);
cout<<"钱数： ";
xianshi();
cin>>c;
yingcang();
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);
cout<<"健康： ";
xianshi();
cin>>v;
yingcang();
cout<<endl;
if(z==12&&x==12&&c==6){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"你触发了时间大道："<<endl;
cout<<"输入的时间越少，速度更快（输入1000== 一秒）"<<endl;
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_BLUE);
cout<<"凡人时间： ";
xianshi();
cin>>yu;
yingcang();
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN|FOREGROUND_BLUE);
cout<<endl<<"仙人时间： ";
xianshi();
cin>>ui;
yingcang();
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN);
cout<<endl<<"神者时间： ";
xianshi();
cin>>io;
yingcang();
}
if(z+x+c+v>40){
for(;;){ 
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);
cout<<"ok,请选择天赋点(天赋点40)："<<endl;
cout<<"请正常选择或总天赋点小于等于40。"<<endl;	
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_BLUE);
cout<<"颜值： ";
xianshi();
cin>>z; 
yingcang();
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN|FOREGROUND_BLUE);
cout<<"智力： ";
xianshi();
cin>>x;
yingcang();
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN);
cout<<"钱数： ";
xianshi();
cin>>c;
yingcang();
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);
cout<<"健康：";
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
cout<<"你出生了，是男孩。"<<endl;	
c=c*1000;
v=v+5;
}
if(asdf==2){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN|FOREGROUND_BLUE);	
cout<<"你出生了，是女孩。"<<endl;	
c=c*100;
z=z+5;
}
if(asdf==3){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN|FOREGROUND_BLUE);	
cout<<"你出生了，是特殊的无性人！"<<endl;	
c=c*200;
x=x+5;
}
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_BLUE);
cout<<"颜值:"<<z<<" ";
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN|FOREGROUND_BLUE);
cout<<"智力:"<<x<<" ";
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN);
cout<<"钱数:"<<c<<" ";
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);
cout<<"健康:"<<v<<" "<<endl<<endl;
Sleep(300);	
for(int i=1;i<100;i++){
int rt=0;
int a=rand()%100+1;
if(0>=v){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN);
cout<<"第"<<i<<"年："<<"你因为突发病或事件死了.(注意身体和运气)"<<endl;da=1;break;}
if(a==1){cout<<"第"<<i<<"年："<<"你捡到了养颜宝典，颜值加3."<<endl;z=z+3;rt=1;}
if(a==2){cout<<"第"<<i<<"年："<<"你捡到0.2斤铁，钱数加200."<<endl;c=c+200;rt=1;}
if(a==3){cout<<"第"<<i<<"年："<<"你被人诈骗了，钱数减600."<<endl;c=c-600;rt=1;}
if(a==4){cout<<"第"<<i<<"年："<<"你学了一本书，智力加3."<<endl;x=x+3;rt=1;}
if(a==5){cout<<"第"<<i<<"年："<<"你捡到了一个钻戒，钱数加2000."<<endl;c=c+2000;rt=1;}
if(a==6&&jk[1]==0){cout<<"第"<<i<<"年："<<"【绝密消息】：有一个人被车撞了。他死前大喊”不！我可是10世转修者！“"<<endl;jk[1]++;rt=1;}
else if(a==6&&jk[1]==1){cout<<"第"<<i<<"年："<<"平平无奇的一年."<<endl;rt=1;}
if(a==7&&jk[2]==0){cout<<"第"<<i<<"年："<<"【绝密消息】：陈忆轩一天刷10道难度三的题."<<endl;jk[2]++;rt=1;}
else if(a==7&&jk[2]==1){cout<<"第"<<i<<"年："<<"平平无奇的一年."<<endl;rt=1;}
if(a==8&&jk[3]==0){cout<<"第"<<i<<"年："<<"【绝密消息】：阮烁恒天天看《无职转生~到了异世界就拿出真本事~》!!!"<<endl;jk[3]++;rt=1;}
else if(a==8&&jk[3]==1){cout<<"第"<<i<<"年："<<"平平无奇的一年."<<endl;rt=1;}
if(a==9&&jk[4]==0){cout<<"第"<<i<<"年："<<"【绝密消息】：作者于2021年12月20日与羽浩腾一起合作。"<<endl;jk[4]++;rt=1;}
else if(a==9&&jk[4]==1){cout<<"第"<<i<<"年："<<"平平无奇的一年."<<endl;rt=1;}
if(a==10&&jk[5]==0){cout<<"第"<<i<<"年："<<"【绝密消息】：阮烁恒习的欧啦神功后天天把作者打的****。"<<endl;jk[5]++;rt=1;}
else if(a==10&&jk[5]==1){cout<<"第"<<i<<"年："<<"平平无奇的一年."<<endl;rt=1;}
if(a==11&&jk[6]==0){cout<<"第"<<i<<"年："<<"日本被和谐成月本."<<endl;jk[6]++;rt=1;}
else if(a==11&&jk[6]==1){cout<<"第"<<i<<"年："<<"平平无奇的一年."<<endl;rt=1;}
if(a==12&&jk[7]==0){cout<<"第"<<i<<"年："<<"中国GPS超过美国."<<endl;jk[7]++;rt=1;}
else if(a==12&&jk[7]==1){cout<<"第"<<i<<"年："<<"平平无奇的一年."<<endl;rt=1;}
if(a==18){cout<<"第"<<i<<"年："<<"你被特别培训，全方面提升3."<<endl;z=z+3;x=x+3;v=v+3;rt=1;}
if(a==19){cout<<"第"<<i<<"年："<<"你不小心用小刀划了脸，颜值减5,健康减1."<<endl;z=z-5;rt=1;v=v-1;}
if(a==20){cout<<"第"<<i<<"年："<<"你不小心被车撞了脑袋，智力减5,健康减5."<<endl;x=x-5;rt=1;v=v-5;}
if(a==21){cout<<"第"<<i<<"年："<<"你患上了感冒,健康减2."<<endl;v=v-2;rt=1;}
if(a==22){cout<<"第"<<i<<"年："<<"你坚持锻炼,健康加2."<<endl;v=v+2;rt=1;}
if(a==23){cout<<"第"<<i<<"年："<<"因为你惹了一只狼狗,所以你每天被狗追着跑...健康加3."<<endl;v=v+3;rt=1;}
if(a==24){cout<<"第"<<i<<"年："<<"因为你勤奋工作,所以钱数加3000!"<<endl;c=c+3000;rt=1;}
if(a==25&&jk[8]==0&&c>=100000){cout<<"第"<<i<<"年："<<"你向乞丐买了一本《古仙图》.钱数减100000."<<endl;c=c-100000;po=po+1;jk[8]++;rt=1;}
else if(a==25&&jk[8]==1&&c>=100000){cout<<"第"<<i<<"年："<<"平平无奇的一年."<<endl;rt=1;}
if(a==26){cout<<"第"<<i<<"年："<<"你捡到了100元"<<endl;c=c+100;rt=1;}
if(a==27){cout<<"第"<<i<<"年："<<"你突然病倒了！健康减5！"<<endl;v=v-5;}
if(a==28&&z>=20){cout<<"第"<<i<<"年："<<"你迷到了一大堆人!"<<endl;}
if(a==29&&jk[9]==0){cout<<"第"<<i<<"年："<<"【绝密消息】：中国发现了外星文明！"<<endl;x=x+10;jk[9]++;}
else if(a==29&&jk[9]==1){cout<<"第"<<i<<"年："<<"平平无奇的一年."<<endl;rt=1;}
if(rt==0){cout<<"第"<<i<<"年："<<"平平无奇的一年."<<endl;}
if(c<0){cout<<"你欠债了"<<c<<"元"<<endl;}
if(c<=50){cout<<"你破产了！！全方面-2."<<endl;z=z-2;x=x-2;v=v-2;}
if(z<=1){cout<<"你因为颜值太低了，被人摁在地上摩擦！健康减1！"<<endl;v=v-1;}
if(x>=20){cout<<"你因为智力太高了，参加比赛获得了1000元！"<<endl;c=c+1000;}
z=z+0.1;x=x+0.1;c=c+1000;v=v+0.1;
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_BLUE);
cout<<"颜值:"<<z<<" ";
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN|FOREGROUND_BLUE);
cout<<"智力:"<<x<<" ";
if(c>=0){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN);
cout<<"钱数:"<<c<<" ";}
else{
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN);
cout<<"钱数:-"<<c<<" ";	
}
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);
cout<<"健康:"<<v<<" "<<endl<<endl;	
Sleep(yu);
}
 
int ghj[9999]={0};
if(da==1){SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);cout<<"寿元终.";}
else{
system("cls");
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN);
cout<<"第100年：你打开了小盒子，发现了《修仙功》这本修仙功法，开始修仙之路,寿元提升至150年。";
if(po>0){cout<<"你发现当初买的《古仙图》比《修仙功》效果更好！";}
cout<<endl;int qw=150;
//int i;
u=u+(z*0.01)+(x*0.01)+(v*0.1);
for(int i=101;i<=qw;i++){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN);
if(250>=u){
int rt=0;

fd=rand()%50+1;
if(fd==1){cout<<"第"<<i<<"年："<<"你找到灵气聚集之处，修为大幅度上升。"<<endl;u=u+1.5;rt=1;}
if(fd==2){cout<<"第"<<i<<"年："<<"你找到异果，修为小幅度上升。"<<endl;u=u+1;rt=1;}
if(fd==3){cout<<"第"<<i<<"年："<<"你走火入魔，修为大幅度下降。"<<endl;u=u-2;rt=1;}
if(fd==4){cout<<"第"<<i<<"年："<<"你杀了一位筑基期修仙者，修为大幅度上升。"<<endl;u=u+1.5;rt=1;}
if(fd==5&&ghj[1]<=2){cout<<"第"<<i<<"年："<<"你获得渡劫失败的渡劫期修仙者传承，修为提升X。"<<endl;u=u+10;ghj[1]++;rt=1;}
if(fd==6&&ghj[1]>2){cout<<"第"<<i<<"年："<<"修行..."<<endl;u=u+0.2;rt=1;}
if(fd==7){cout<<"第"<<i<<"年："<<"你悟了一些《神仙图》的内容，修为加快提升。"<<endl;po=po+0.1;rt=1;}
if(rt==0){cout<<"第"<<i<<"年："<<"修行..."<<endl;u=u+0.2;}

}
else{
int gd;

gd=rand()%100+1;
if(gd==1&&sq==0){SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN|FOREGROUND_BLUE);cout<<"第"<<i<<"年："<<"你悟透了伟大的马克思主义。"<<endl;u=u+1;sq=1;}else{if(gd==1){cout<<"第"<<i<<"年："<<"悟道..."<<endl;u=u+0.2;}}	
if(gd==2&&qs==0){SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN|FOREGROUND_BLUE);cout<<"第"<<i<<"年："<<"你悟出了空手道,好像并没有什么卵用。"<<endl;u=u+1;qs=1;}else{if(gd==2){cout<<"第"<<i<<"年："<<"悟道..."<<endl;u=u+0.2;}}	
if(gd==3&&s==0){SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN|FOREGROUND_BLUE);cout<<"第"<<i<<"年："<<"你悟出了金之大道。"<<endl;u=u+4;s=1;a=a+1;}else{if(gd==3){cout<<"第"<<i<<"年："<<"悟道..."<<endl;u=u+0.2;}}	
if(gd==4&&d==0){SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN|FOREGROUND_BLUE);cout<<"第"<<i<<"年："<<"你悟出了木之大道。"<<endl;u=u+4;d=1;a=a+1;}else{if(gd==4){cout<<"第"<<i<<"年："<<"悟道..."<<endl;u=u+0.2;}}
if(gd==5&&f==0){SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN|FOREGROUND_BLUE);cout<<"第"<<i<<"年："<<"你悟出了水之大道。"<<endl;u=u+4;f=1;a=a+1;}else{if(gd==5){cout<<"第"<<i<<"年："<<"悟道..."<<endl;u=u+0.2;}}	
if(gd==6&&g==0){SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN|FOREGROUND_BLUE);cout<<"第"<<i<<"年："<<"你悟出了火之大道。"<<endl;u=u+4;g=1;a=a+1;}else{if(gd==6){cout<<"第"<<i<<"年："<<"悟道..."<<endl;u=u+0.2;}}
if(gd==7&&h==0){SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN|FOREGROUND_BLUE);cout<<"第"<<i<<"年："<<"你悟出了土之大道。"<<endl;u=u+4;h=1;a=a+1;}else{if(gd==7){cout<<"第"<<i<<"年："<<"悟道..."<<endl;u=u+0.2;}}
if(gd==8&&j==0){SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN|FOREGROUND_BLUE);cout<<"第"<<i<<"年："<<"你悟出了生命大道。"<<endl;u=u+5;j=1;a=a+1;}else{if(gd==8){cout<<"第"<<i<<"年："<<"悟道..."<<endl;u=u+0.2;}}
if(gd==9&&k==0){SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN|FOREGROUND_BLUE);cout<<"第"<<i<<"年："<<"你悟出了毁灭大道。"<<endl;u=u+5;k=1;a=a+1;}else{if(gd==9){cout<<"第"<<i<<"年："<<"悟道..."<<endl;u=u+0.2;}}
if(gd==10&&l==0){SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN|FOREGROUND_BLUE);cout<<"第"<<i<<"年："<<"你悟出了混沌大道。"<<endl;u=u+5;l=1;a=a+1;}else{if(gd==10){cout<<"第"<<i<<"年："<<"悟道..."<<endl;u=u+0.2;}}
if(gd!=1&&gd!=2&&gd!=3&&gd!=4&&gd!=5&&gd!=6&&gd!=7&&gd!=8&&gd!=9&&gd!=10){cout<<"第"<<i<<"年："<<"悟道..."<<endl;u=u+1;}			
}
u=u+po;	
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"灵力点："<<u<<endl;



SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
if(u>=2&&u<4&&b[1]==0){cout<<"突破凝气初期1星,寿元提升至160年。"<<endl;qw=160;b[1]=1;}
if(u>=4&&u<6&&b[2]==0){cout<<"突破凝气初期2星,寿元提升至170年。"<<endl;qw=170;b[2]=1;}
if(u>=6&&u<8&&b[3]==0){cout<<"突破凝气初期3星,寿元提升至180年。"<<endl;qw=180;b[3]=1;}
if(u>=8&&u<10&&b[4]==0){cout<<"突破凝气初期4星,寿元提升至185年。"<<endl;qw=185;b[4]=1;}
if(u>=10&&u<12&&b[5]==0){cout<<"突破凝气初期5星,寿元提升至190年。"<<endl;qw=190;b[5]=1;}
if(u>=12&&u<14&&b[6]==0){cout<<"突破凝气中期1星,寿元提升至200年。"<<endl;qw=200;b[6]=1;}
if(u>=14&&u<16&&b[7]==0){cout<<"突破凝气中期2星,寿元提升至210年。"<<endl;qw=210;b[7]=1;}
if(u>=16&&u<18&&b[8]==0){cout<<"突破凝气中期3星,寿元提升至220年。"<<endl;qw=220;b[8]=1;}
if(u>=18&&u<20&&b[9]==0){cout<<"突破凝气中期4星,寿元提升至230年。"<<endl;qw=230;b[9]=1;}
if(u>=20&&u<22&&b[10]==0){cout<<"突破凝气中期5星,寿元提升至240年。"<<endl;qw=240;b[10]=1;}
if(u>=22&&u<24&&b[11]==0){cout<<"突破凝气高期1星,寿元提升至250年。"<<endl;qw=250;b[11]=1;}
if(u>=24&&u<26&&b[12]==0){cout<<"突破凝气高期2星,寿元提升至260年。"<<endl;qw=260;b[12]=1;}
if(u>=26&&u<28&&b[13]==0){cout<<"突破凝气高期3星,寿元提升至270年。"<<endl;qw=270;b[13]=1;}
if(u>=28&&u<30&&b[14]==0){cout<<"突破凝气高期4星,寿元提升至280年。"<<endl;qw=280;b[14]=1;}
if(u>=30&&u<35&&b[15]==0){cout<<"突破凝气高期5星,寿元提升至290年。"<<endl;qw=290;b[15]=1;}

if(u>=35&&u<37&&b[16]==0){cout<<"突破筑基初期1星,寿元提升至300年。"<<endl;qw=300;b[16]=1;}
if(u>=37&&u<39&&b[17]==0){cout<<"突破筑基初期2星,寿元提升至310年。"<<endl;qw=310;b[17]=1;}
if(u>=39&&u<41&&b[18]==0){cout<<"突破筑基初期3星,寿元提升至320年。"<<endl;qw=320;b[18]=1;}
if(u>=41&&u<43&&b[19]==0){cout<<"突破筑基初期4星,寿元提升至330年。"<<endl;qw=330;b[19]=1;}
if(u>=45&&u<47&&b[20]==0){cout<<"突破筑基初期5星,寿元提升至340年。"<<endl;qw=340;b[20]=1;}
if(u>=47&&u<49&&b[21]==0){cout<<"突破筑基中期1星,寿元提升至350年。"<<endl;qw=350;b[21]=1;}
if(u>=49&&u<51&&b[22]==0){cout<<"突破筑基中期2星,寿元提升至360年。"<<endl;qw=360;b[22]=1;}
if(u>=51&&u<53&&b[23]==0){cout<<"突破筑基中期3星,寿元提升至370年。"<<endl;qw=370;b[23]=1;}
if(u>=55&&u<57&&b[24]==0){cout<<"突破筑基中期4星,寿元提升至380年。"<<endl;qw=380;b[24]=1;}
if(u>=57&&u<59&&b[25]==0){cout<<"突破筑基中期5星,寿元提升至390年。"<<endl;qw=390;b[25]=1;}
if(u>=59&&u<61&&b[26]==0){cout<<"突破筑基高期1星,寿元提升至400年。"<<endl;qw=400;b[26]=1;}
if(u>=61&&u<63&&b[27]==0){cout<<"突破筑基高期2星,寿元提升至410年。"<<endl;qw=410;b[27]=1;}
if(u>=63&&u<65&&b[28]==0){cout<<"突破筑基高期3星,寿元提升至420年。"<<endl;qw=420;b[28]=1;}
if(u>=65&&u<67&&b[29]==0){cout<<"突破筑基高期4星,寿元提升至430年。"<<endl;qw=430;b[29]=1;}
if(u>=69&&u<75&&b[30]==0){cout<<"突破筑基高期5星,寿元提升至440年。"<<endl;qw=440;b[30]=1;}

if(u>=75&&u<78&&b[31]==0){cout<<"突破金丹初期1星,寿元提升至450年。"<<endl;qw=450;b[31]=1;}
if(u>=78&&u<81&&b[32]==0){cout<<"突破金丹初期2星,寿元提升至460年。"<<endl;qw=460;b[32]=1;}
if(u>=81&&u<84&&b[33]==0){cout<<"突破金丹初期3星,寿元提升至470年。"<<endl;qw=470;b[33]=1;}
if(u>=84&&u<87&&b[34]==0){cout<<"突破金丹初期4星,寿元提升至480年。"<<endl;qw=480;b[34]=1;}
if(u>=87&&u<90&&b[35]==0){cout<<"突破金丹初期5星,寿元提升至490年。"<<endl;qw=490;b[35]=1;}
if(u>=90&&u<93&&b[36]==0){cout<<"突破金丹中期1星,寿元提升至500年。"<<endl;qw=500;b[36]=1;}
if(u>=93&&u<96&&b[37]==0){cout<<"突破金丹中期2星,寿元提升至510年。"<<endl;qw=510;b[37]=1;}
if(u>=96&&u<99&&b[38]==0){cout<<"突破金丹中期3星,寿元提升至520年。"<<endl;qw=520;b[38]=1;}
if(u>=99&&u<102&&b[39]==0){cout<<"突破金丹中期4星,寿元提升至530年。"<<endl;qw=530;b[39]=1;}
if(u>=102&&u<105&&b[40]==0){cout<<"突破金丹中期5星,寿元提升至540年。"<<endl;qw=540;b[40]=1;}
if(u>=108&&u<111&&b[41]==0){cout<<"突破金丹高期1星,寿元提升至550年。"<<endl;qw=550;b[41]=1;}
if(u>=111&&u<114&&b[42]==0){cout<<"突破金丹高期2星,寿元提升至560年。"<<endl;qw=560;b[42]=1;}
if(u>=114&&u<117&&b[43]==0){cout<<"突破金丹高期3星,寿元提升至570年。"<<endl;qw=570;b[43]=1;}
if(u>=117&&u<120&&b[44]==0){cout<<"突破金丹高期4星,寿元提升至580年。"<<endl;qw=580;b[44]=1;}
if(u>=120&&u<125&&b[45]==0){cout<<"突破金丹高期5星,寿元提升至590年。"<<endl;qw=590;b[45]=1;}

if(u>=125&&u<130&&b[46]==0){cout<<"突破元婴初期1星,寿元提升至600年。"<<endl;qw=600;b[46]=1;}
if(u>=130&&u<135&&b[47]==0){cout<<"突破元婴初期2星,寿元提升至610年。"<<endl;qw=610;b[47]=1;}
if(u>=135&&u<140&&b[48]==0){cout<<"突破元婴初期3星,寿元提升至620年。"<<endl;qw=620;b[48]=1;}
if(u>=140&&u<145&&b[49]==0){cout<<"突破元婴初期4星,寿元提升至630年。"<<endl;qw=630;b[49]=1;}
if(u>=145&&u<150&&b[50]==0){cout<<"突破元婴初期5星,寿元提升至640年。"<<endl;qw=640;b[50]=1;} 
if(u>=150&&u<155&&b[51]==0){cout<<"突破元婴中期1星,寿元提升至650年。"<<endl;qw=650;b[51]=1;}
if(u>=155&&u<160&&b[52]==0){cout<<"突破元婴中期2星,寿元提升至660年。"<<endl;qw=660;b[52]=1;}
if(u>=160&&u<165&&b[53]==0){cout<<"突破元婴中期3星,寿元提升至670年。"<<endl;qw=670;b[53]=1;}
if(u>=165&&u<170&&b[54]==0){cout<<"突破元婴中期4星,寿元提升至680年。"<<endl;qw=680;b[54]=1;}
if(u>=170&&u<175&&b[55]==0){cout<<"突破元婴中期5星,寿元提升至690年。"<<endl;qw=690;b[55]=1;}
if(u>=175&&u<180&&b[56]==0){cout<<"突破元婴高期1星,寿元提升至700年。"<<endl;qw=700;b[56]=1;}
if(u>=180&&u<185&&b[57]==0){cout<<"突破元婴高期2星,寿元提升至710年。"<<endl;qw=710;b[57]=1;}
if(u>=185&&u<190&&b[58]==0){cout<<"突破元婴高期3星,寿元提升至720年。"<<endl;qw=720;b[58]=1;}
if(u>=190&&u<195&&b[59]==0){cout<<"突破元婴高期4星,寿元提升至730年。"<<endl;qw=730;b[59]=1;}
if(u>=195&&u<200&&b[60]==0){cout<<"突破元婴高期5星,寿元提升至740年。"<<endl;qw=740;b[60]=1;}

if(u>=200&&u<205&&b[61]==0){cout<<"突破化神初期1星,寿元提升至750年。"<<endl;qw=750;b[61]=1;}
if(u>=205&&u<210&&b[62]==0){cout<<"突破化神初期2星,寿元提升至760年。"<<endl;qw=760;b[62]=1;}
if(u>=210&&u<215&&b[63]==0){cout<<"突破化神初期3星,寿元提升至770年。"<<endl;qw=770;b[63]=1;}
if(u>=215&&u<220&&b[64]==0){cout<<"突破化神初期4星,寿元提升至780年。"<<endl;qw=780;b[64]=1;}
if(u>=220&&u<225&&b[65]==0){cout<<"突破化神初期5星,寿元提升至790年。"<<endl;qw=790;b[65]=1;}
if(u>=225&&u<230&&b[66]==0){cout<<"突破化神中期1星,寿元提升至800年。"<<endl;qw=800;b[66]=1;}
if(u>=230&&u<235&&b[67]==0){cout<<"突破化神中期2星,寿元提升至810年。"<<endl;qw=810;b[67]=1;}
if(u>=235&&u<240&&b[68]==0){cout<<"突破化神中期3星,寿元提升至820年。"<<endl;qw=820;b[68]=1;}
if(u>=240&&u<245&&b[69]==0){cout<<"突破化神中期4星,寿元提升至830年。"<<endl;qw=830;b[69]=1;}
if(u>=245&&u<250&&b[70]==0){cout<<"突破化神中期5星,寿元提升至840年。"<<endl;qw=840;b[70]=1;}
if(u>=250&&u<255&&b[71]==0){cout<<"突破化神高期1星,寿元提升至850年。"<<endl;qw=850;b[71]=1;}
if(u>=255&&u<260&&b[72]==0){cout<<"突破化神高期2星,寿元提升至860年。"<<endl;qw=860;b[72]=1;}
if(u>=260&&u<265&&b[73]==0){cout<<"突破化神高期3星,寿元提升至870年。"<<endl;qw=870;b[73]=1;}
if(u>=265&&u<270&&b[74]==0){cout<<"突破化神高期4星,寿元提升至880年。"<<endl;qw=880;b[74]=1;}
if(u>=270&&u<300&&b[75]==0){cout<<"突破化神高期5星,寿元提升至890年。"<<endl;qw=890;b[75]=1;}

if(u>=300&&u<310&&b[76]==0){cout<<"突破炼虚初期1星,寿元提升至900年。"<<endl;qw=900;b[76]=1;}
if(u>=310&&u<320&&b[77]==0){cout<<"突破炼虚初期2星,寿元提升至910年。"<<endl;qw=910;b[77]=1;}
if(u>=320&&u<330&&b[78]==0){cout<<"突破炼虚初期3星,寿元提升至920年。"<<endl;qw=920;b[78]=1;}
if(u>=330&&u<340&&b[79]==0){cout<<"突破炼虚初期4星,寿元提升至930年。"<<endl;qw=930;b[79]=1;}
if(u>=340&&u<350&&b[80]==0){cout<<"突破炼虚初期5星,寿元提升至940年。"<<endl;qw=940;b[80]=1;}
if(u>=350&&u<360&&b[81]==0){cout<<"突破炼虚中期1星,寿元提升至950年。"<<endl;qw=950;b[81]=1;}
if(u>=360&&u<370&&b[82]==0){cout<<"突破炼虚中期2星,寿元提升至960年。"<<endl;qw=960;b[82]=1;}
if(u>=370&&u<380&&b[83]==0){cout<<"突破炼虚中期3星,寿元提升至970年。"<<endl;qw=970;b[83]=1;}
if(u>=380&&u<390&&b[84]==0){cout<<"突破炼虚中期4星,寿元提升至980年。"<<endl;qw=980;b[84]=1;}
if(u>=390&&u<400&&b[85]==0){cout<<"突破炼虚中期5星,寿元提升至990年。"<<endl;qw=990;b[85]=1;}
if(u>=400&&u<410&&b[86]==0){cout<<"突破炼虚高期1星,寿元提升至1000年。"<<endl;qw=1000;b[86]=1;}
if(u>=410&&u<420&&b[87]==0){cout<<"突破炼虚高期2星,寿元提升至1010年。"<<endl;qw=1010;b[87]=1;}
if(u>=420&&u<430&&b[88]==0){cout<<"突破炼虚高期3星,寿元提升至1020年。"<<endl;qw=1020;b[88]=1;}
if(u>=430&&u<440&&b[89]==0){cout<<"突破炼虚高期4星,寿元提升至1030年。"<<endl;qw=1030;b[89]=1;}
if(u>=440&&u<450&&b[90]==0){cout<<"突破炼虚高期5星,寿元提升至1040年。"<<endl;qw=1040;b[90]=1;}

if(u>=450&&u<450&&b[91]==0){cout<<"突破合体初期1星,寿元提升至1050年。"<<endl;qw=1050;b[91]=1;}
if(u>=460&&u<460&&b[92]==0){cout<<"突破合体初期2星,寿元提升至1060年。"<<endl;qw=1060;b[92]=1;}
if(u>=470&&u<470&&b[93]==0){cout<<"突破合体初期3星,寿元提升至1070年。"<<endl;qw=1070;b[93]=1;}
if(u>=480&&u<480&&b[94]==0){cout<<"突破合体初期4星,寿元提升至1080年。"<<endl;qw=1080;b[94]=1;}
if(u>=490&&u<490&&b[95]==0){cout<<"突破合体初期5星,寿元提升至1090年。"<<endl;qw=1090;b[95]=1;}
if(u>=500&&u<500&&b[96]==0){cout<<"突破合体中期1星,寿元提升至1100年。"<<endl;qw=1100;b[96]=1;}
if(u>=510&&u<510&&b[97]==0){cout<<"突破合体中期2星,寿元提升至1110年。"<<endl;qw=1110;b[97]=1;}
if(u>=520&&u<520&&b[98]==0){cout<<"突破合体中期3星,寿元提升至1120年。"<<endl;qw=1120;b[98]=1;}
if(u>=530&&u<530&&b[99]==0){cout<<"突破合体中期4星,寿元提升至1130年。"<<endl;qw=1130;b[99]=1;}
if(u>=540&&u<540&&b[100]==0){cout<<"突破合体中期5星,寿元提升至1140年。"<<endl;qw=1140;b[100]=1;}
if(u>=550&&u<550&&b[101]==0){cout<<"突破合体高期1星,寿元提升至1150年。"<<endl;qw=1150;b[101]=1;}
if(u>=560&&u<560&&b[102]==0){cout<<"突破合体高期2星,寿元提升至1160年。"<<endl;qw=1160;b[102]=1;}
if(u>=570&&u<570&&b[103]==0){cout<<"突破合体高期3星,寿元提升至1170年。"<<endl;qw=1170;b[103]=1;}
if(u>=580&&u<580&&b[104]==0){cout<<"突破合体高期4星,寿元提升至1180年。"<<endl;qw=1180;b[104]=1;}
if(u>=590&&u<590&&b[105]==0){cout<<"突破合体高期5星,寿元提升至1190年。"<<endl;qw=1190;b[105]=1;}
if(u>=600&&u<999&&b[106]==0){cout<<"进入准备渡劫期,寿元提升至1200年。"<<endl;qw=1200;b[106]=1;}
cout<<endl;

Sleep(ui);
}
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
cout<<"寿元终。"<<endl;Sleep(1000);
}
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE);
int mn=0;
if(ui==100&&u<=999){
system("cls");
cout<<"你一直看过来，一定很累吧？悄悄告诉你，颜值=12，智力=12，钱数=6时可以触发时间大道！"<<endl;	
Sleep(300);
}
system("cls");
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
cout<<"开始度劫！！！"<<endl;
Sleep(300);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN);
cout<<"金元神劫落下"<<endl;
if(s==1){cout<<"你抗过了！"<<endl;a=a-1;
Sleep(600);	
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"木元神劫落下"<<endl;
if(d==1){cout<<"你抗过了！"<<endl;a=a-1;
Sleep(600);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);
cout<<"水元神劫落下"<<endl;
if(f==1){cout<<"你抗过了！"<<endl;a=a-1;
Sleep(600);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
cout<<"火元神劫落下"<<endl;
if(g==1){cout<<"你抗过了！"<<endl;a=a-1;
Sleep(600);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_RED|FOREGROUND_GREEN);
cout<<"土元神劫落下"<<endl;
if(h==1){cout<<"你抗过了！"<<endl;a=a-1;
Sleep(600);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN|FOREGROUND_BLUE);
cout<<"本源元神劫落下"<<endl;
if(a>=1){cout<<"你抗过了！"<<endl;

}else{mn=1;}	
}else{mn=1;}
}else{mn=1;}
}else{mn=1;}
}else{mn=1;}
}else{mn=1;}


if(mn==1){SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);cout<<"你没抗过，被劈死了！";}	
if(mn==0&&u>=550){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_BLUE);
cout<<"你度劫成功，飞升为仙。你作为“人”的一生结束了！"<<endl;}
else{if(mn==0){SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
cout<<"但是你修为不够，无法飞升，被神用雷劫劈死了！";}}	


int ad;
cout<<"结束请输入ok(小写)，管理员测试请输入密码。"<<endl;
xianshi();
string sf;
cin>>sf;
yingcang();
if(sf=="ok"){cout<<"圆满结束！";}
else if(sf=="tanyu"){ad=1;}
else{
cout<<"密码错误，请重新输入！"<<endl;
for(;;){
string qwe;
cout<<"结束请输入ok(小写)，管理员测试请输入密码。"<<endl;
xianshi();
cin>>qwe;
yingcang();	
if(qwe=="ok"){cout<<"圆满结束！";break;}
if(qwe=="tanyu"){ad=1;break;}
else {cout<<"密码错误，请重新输入！"<<endl;}	
}	
}

if(ad==1){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);
for(int i=1;i<=15;i++){w[i]=0;}
int j=50;	
cout<<"开启修神之路，神寿提升至10千年."<<endl;
int ss=5;
for(int i=1;i<=j;i++){
int kk;
kk=rand()%25+1;
if(kk==1){cout<<"第"<<i<<"千年："<<"闭关苦修中……"<<endl;ss=ss+1;}	
if(kk==2){cout<<"第"<<i<<"千年："<<"闭关苦修中……"<<endl;ss=ss+1;}	
if(kk==3){cout<<"第"<<i<<"千年："<<"闭关苦修中……"<<endl;ss=ss+1;}	
if(kk==4){cout<<"第"<<i<<"千年："<<"闭关苦修中……"<<endl;ss=ss+1;}
if(kk==5){cout<<"第"<<i<<"千年："<<"闭关苦修中……"<<endl;ss=ss+1;}
if(kk==6){cout<<"第"<<i<<"千年："<<"闭关苦修中……"<<endl;ss=ss+1;}
if(kk==7){cout<<"第"<<i<<"千年："<<"闭关苦修中……"<<endl;ss=ss+1;}
if(kk==8){cout<<"第"<<i<<"千年："<<"闭关苦修中……"<<endl;ss=ss+1;}
if(kk==9){cout<<"第"<<i<<"千年："<<"闭关苦修中……"<<endl;ss=ss+1;}	
if(kk==10){cout<<"第"<<i<<"千年："<<"闭关苦修中……"<<endl;ss=ss+1;}	
if(kk==11){cout<<"第"<<i<<"千年："<<"闭关苦修中……"<<endl;ss=ss+1;}	
if(kk==12){cout<<"第"<<i<<"千年："<<"闭关苦修中……"<<endl;ss=ss+1;}	
if(kk==13){cout<<"第"<<i<<"千年："<<"闭关苦修中……"<<endl;ss=ss+1;}	
if(kk==14){cout<<"第"<<i<<"千年："<<"闭关苦修中……"<<endl;ss=ss+1;}	
if(kk==15){cout<<"第"<<i<<"千年："<<"闭关苦修中……"<<endl;ss=ss+1;}	
if(kk==16){cout<<"第"<<i<<"千年："<<"闭关苦修中……"<<endl;ss=ss+1;}	
if(kk==17){cout<<"第"<<i<<"千年："<<"你与人强行双修，修为上涨X."<<endl;ss=ss+2;}
if(kk==18){cout<<"第"<<i<<"千年："<<"你与人强行双修，修为上涨X."<<endl;ss=ss+2;}	
if(kk==19){cout<<"第"<<i<<"千年："<<"你与人强行双修，修为上涨X."<<endl;ss=ss+2;}	
if(kk==20){cout<<"第"<<i<<"千年："<<"苦修顿悟修为增长。"<<endl;ss=ss+2;}	
if(kk==21){cout<<"第"<<i<<"千年："<<"苦修顿悟修为增长。"<<endl;ss=ss+2;}
if(kk==22){cout<<"第"<<i<<"千年："<<"苦修顿悟修为增长。"<<endl;ss=ss+2;}
if(kk==23){cout<<"第"<<i<<"千年："<<"苦修顿悟修为增长。"<<endl;ss=ss+2;}
if(kk==24){cout<<"第"<<i<<"千年："<<"苦修顿悟修为增长。"<<endl;ss=ss+2;}
if(kk==25){cout<<"第"<<i<<"千年："<<"听神讲课，顿悟修为增长。"<<endl;ss=ss+5;}

if(w[1]==0&&ss==10||ss>10&&ss<15&&w[1]==0){cout<<"你达到散仙上期，神寿提升到15千年。"<<endl;j=15;w[1]=1;}
if(w[2]==0&&ss==15||ss>15&&ss<20&&w[2]==0){cout<<"你达到散仙中期，神寿提升到20千年。"<<endl;j=20;w[2]=1;}
if(w[3]==0&&ss==20||ss>20&&ss<25&&w[3]==0){cout<<"你达到散仙下期，神寿提升到25千年。"<<endl;j=25;w[3]=1;}
if(w[4]==0&&ss==25||ss>25&&ss<30&&w[4]==0){cout<<"你达到地仙上期，神寿提升到30千年。"<<endl;j=30;w[4]=1;}
if(w[5]==0&&ss==30||ss>30&&ss<35&&w[5]==0){cout<<"你达到地仙中期，神寿提升到35千年。"<<endl;j=35;w[5]=1;}
if(w[6]==0&&ss==35||ss>35&&ss<40&&w[6]==0){cout<<"你达到地仙下期，神寿提升到40千年。"<<endl;j=40;w[6]=1;}
if(w[7]==0&&ss==40||ss>40&&ss<45&&w[7]==0){cout<<"你达到仙人上期，神寿提升到45千年。"<<endl;j=45;w[7]=1;}
if(w[8]==0&&ss==45||ss>45&&ss<50&&w[8]==0){cout<<"你达到仙人中期，神寿提升到50千年。"<<endl;j=50;w[8]=1;}
if(w[9]==0&&ss==50||ss>50&&ss<55&&w[9]==0){cout<<"你达到仙人下期，神寿提升到55千年。"<<endl;j=55;w[9]=1;}
if(w[10]==0&&ss==65||ss>55&&ss<60&&w[10]==0){cout<<"你达到上仙上期，神寿提升到60千年。"<<endl;j=60;w[10]=1;}
if(w[11]==0&&ss==60||ss>60&&ss<70&&w[11]==0){cout<<"你达到上仙中期，神寿提升到65千年。"<<endl;j=65;w[11]=1;}
if(w[12]==0&&ss==70||ss>70&&ss<80&&w[12]==0){cout<<"你达到上仙下期，神寿提升到70千年。"<<endl;j=70;w[12]=1;}
if(w[13]==0&&ss==80||ss>80&&ss<90&&w[13]==0){cout<<"你达到金仙上期，神寿提升到75千年。"<<endl;j=75;w[13]=1;}
if(w[14]==0&&ss==90||ss>90&&ss<100&&w[14]==0){cout<<"你达到金仙中期，神寿提升到80千年。"<<endl;j=80;w[14]=1;}
if(w[15]==0&&ss==100||ss>100&&ss<110&&w[15]==0){cout<<"你达到金仙下期，神寿提升到85千年。"<<endl;j=85;w[15]=1;}

cout<<endl;
Sleep(io);
}
cout<<"寿元终!";
}}




if(q==2){
system("cls");
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
cout<<"正在进入调查问卷，请稍后......"<<endl;
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);
for(int i=1;i<=20;i++){
if(i>=1&&i<=10||i>=17&&i<=20){Sleep(200);cout<<"█";}
else {Sleep(350);cout<<"█";}

}
system("cls");
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE|FOREGROUND_RED|FOREGROUND_GREEN);
cout<<"成功进入调查问卷。"<<endl<<endl;
string A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R;
int dfg;
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE|FOREGROUND_RED|FOREGROUND_GREEN);	
cout<<"在正式开始调查问卷前，请填写您的真实信息。"<<endl;Sleep(200);
cout<<"姓名："<<endl;
cout<<"性别："<<endl;
cout<<"年龄："<<endl;
string CSDN;
string csdn;
string xpxp;
string xpxpxp;
xianshi();
gotoxy(6,3);cin>>csdn;
yingcang();
if(csdn=="羽浩腾"||csdn=="谭俊涵"){
cout<<"管理员，您好！"<<endl;Sleep(200);
cout<<"系统已自动识别身份。请确认信息。"<<endl;Sleep(100);
cout<<"姓名："<<csdn<<endl;
if(csdn=="羽浩腾"){
cout<<"性别：男"<<endl;CSDN="男";
cout<<"年龄：11"<<endl;xpxp="11";Sleep(200);
cout<<"若信息无误，请输入管理员密码，否则输入 1"<<endl;Sleep(100);
xianshi();
cin>>xpxpxp;
yingcang();
if(xpxpxp=="tanyu") cout<<" ";
else if(xpxpxp=="1"){
cout<<"请联系管理员修改信息"<<endl;
system("pause");
return 0;
}
}
else if(csdn=="谭俊涵"){
cout<<"性别：男"<<endl;CSDN="男";
cout<<"年龄：11"<<endl;xpxp="11";Sleep(200);
cout<<"若信息无误，请输入管理员密码，否则输入 1"<<endl;Sleep(100);
xianshi();
cin>>xpxpxp;
yingcang();
if(xpxpxp=="tanyu") cout<<" ";
else if(xpxpxp=="1"){
cout<<"请联系管理员修改信息"<<endl;
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
cout<<"正式进入调查问卷。"<<endl;Sleep(200);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE|FOREGROUND_RED|FOREGROUND_GREEN);	
cout<<"调查问卷:"<<endl;Sleep(200);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
cout<<"本次调查问卷的每一道题都要认真思考后再选择"<<endl<<endl;Sleep(200);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"开始答题。"<<endl<<endl<<endl;Sleep(200);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
cout<<"第1题:请问您对这个作品满意吗？"<<endl;Sleep(200);
cout<<"A.满意  B.不满意"<<endl;Sleep(100);
xianshi();
cin>>A;
yingcang();
if(A=="B"){
cout<<"请问还有哪些需要修改"<<endl;Sleep(100);
xianshi();
cin>>B; 
yingcang();
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"感谢您的反馈！"<<endl;Sleep(200);
}
else if(A=="A"){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"感谢您对我们的认可!";Sleep(2000);} 
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<endl<<endl<<"下一题"<<endl;Sleep(200);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
cout<<"第2题:请问您知道这个作品的开发者吗？"<<endl;Sleep(200);
cout<<"A.知道  B.不知道"<<endl;Sleep(100);
xianshi();
cin>>C; 
yingcang();
if(C=="A"){
cout<<"请问这个作品的开发者是谁(输入名字)"<<endl;Sleep(100);
xianshi();
cin>>K; 
yingcang();
if(K!="谭俊涵"){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
cout<<"回答错误！"<<endl;Sleep(200);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"这个作品的开发者是:谭俊涵";Sleep(200);
}
else if(K=="谭俊涵"){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"回答正确！";Sleep(200);
}
}
else if(C=="B"){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"这个作品的开发者是:谭俊涵";Sleep(2000);}
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<endl<<endl<<"下一题"<<endl;Sleep(200);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
cout<<"第3题:请问您对这个作品的开发者熟系吗？"<<endl;Sleep(200);
cout<<"A.熟系  B.不熟系"<<endl;Sleep(100);
xianshi();
cin>>J; 
yingcang();
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"下一题"<<endl;Sleep(200);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
cout<<"第4题:请问您知道这个作品是哪个工作室开发的吗？"<<endl;Sleep(200);
cout<<"A.知道  B.不知道"<<endl;Sleep(100);
xianshi();
cin>>G; 
yingcang();
if(G=="A"){
cout<<"请问这个作品的工作室是哪个工作室？"<<endl;Sleep(100);
xianshi();
cin>>L; 
yingcang();
if(L!="谭羽工作室"){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
cout<<"回答错误！"<<endl;Sleep(200);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"开发这个作品的工作室是:谭羽工作室";Sleep(200);
}
else if(L=="谭羽工作室"){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"回答正确！";Sleep(200);
}
}
else if(G=="B"){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"开发这个作品的工作室是:谭羽工作室";Sleep(2000);} 
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<endl<<endl<<"下一题"<<endl;Sleep(200);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
cout<<"第5题:请问您知道这个作品的工作室有那些成员吗？"<<endl;Sleep(200);
cout<<"A.知道  B.不知道"<<endl;Sleep(100);
xianshi();
cin>>H; 
yingcang();
if(H=="A"){
cout<<"请问这个工作室有哪些成员？(提示:两个人)"<<endl;Sleep(100);
xianshi();
cin>>M>>N;
yingcang();
if(M=="谭俊涵"&&N=="羽浩腾"||M=="羽浩腾"&&N=="谭俊涵"){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"回答正确！";Sleep(200);
}
else{
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
cout<<"回答错误！"<<endl;Sleep(200);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"这个工作室有这两个成员:谭俊涵、羽浩腾";Sleep(200);
}
}
else if(H=="B"){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"这个工作室有这两个成员:谭俊涵、羽浩腾";Sleep(2000);} 
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<endl<<endl<<"下一题"<<endl;Sleep(200);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
cout<<"第6题:请问您对这个工作室熟系吗？"<<endl;Sleep(200);
cout<<"A.熟系  B.不熟系"<<endl;Sleep(100);
xianshi();
cin>>I; 
yingcang();
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"下一题"<<endl;Sleep(200);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
cout<<"第7题:请问您知道这个作品会到哪一版停更吗？"<<endl;Sleep(200);
cout<<"A.知道  B.不知道"<<endl;Sleep(100);
xianshi();
cin>>D; 
yingcang();
if(D=="A"){
cout<<"请问这个作品会到哪一版停更？"<<endl;Sleep(100);
xianshi();
cin>>O; 
yingcang();
if(O!="x.x"){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
cout<<"回答错误！"<<endl;Sleep(200);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"这个作品将会到x.x停更";Sleep(200); 
}
else{
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"回答正确";Sleep(200);
}
}
else if(D=="B"){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"这个作品将会到x.x停更";Sleep(2000);}
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<endl<<endl<<"下一题"<<endl;Sleep(200);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
cout<<"第8题:请问您知道您正在游玩的这个作品是哪个版本吗？"<<endl;Sleep(200);
cout<<"A.知道  B.不知道"<<endl;Sleep(100);
xianshi();
cin>>E; 
yingcang();
if(E=="A"){
cout<<"请问您正在游玩的这个版本是哪个版本的？"<<endl;Sleep(100);
xianshi();
cin>>P; 
yingcang();
if(P!="7.0测试版"){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
cout<<"回答错误！"<<endl;Sleep(200);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"您现在游玩的是7.0测试版";Sleep(200); 
}
else{
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"回答正确";Sleep(200);
}
}
else if(E=="B"){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"您现在游玩的是7.0测试版";Sleep(2000);}
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<endl<<endl<<"下一题"<<endl;Sleep(200);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
cout<<"第9题:请问您是从哪一个版本玩起的？"<<endl;Sleep(200);
cout<<"A. 1.0  B. 1.5  C. 2.0  D. 2.5  E. 3.0  F. 3.5  G. 4.0  H. 4.5  I. 5.0  j. 5.5  k. 6.0  L. 6.5  M. 7.0"<<endl;Sleep(100);
xianshi();
cin>>F;
yingcang();
system("cls");
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"您的姓名是"<<"       ";Sleep(200);
cout<<csdn<<endl<<endl;Sleep(100);
cout<<"您的性别是"<<"       ";Sleep(200);
cout<<CSDN<<endl<<endl;Sleep(100);
cout<<"您的年龄是"<<"       ";Sleep(200);
cout<<xpxp<<endl<<endl;Sleep(100);
cout<<"第1题您的答案是"<<"  ";Sleep(200);
cout<<A<<endl<<endl;Sleep(100);
cout<<"第2题您的答案是"<<"  ";Sleep(200);
cout<<C<<endl<<endl;Sleep(100);
cout<<"第3题您的答案是"<<"  ";Sleep(200);
cout<<J<<endl<<endl;Sleep(100);
cout<<"第4题您的答案是"<<"  ";Sleep(200);
cout<<G<<endl<<endl;Sleep(100);
cout<<"第5题您的答案是"<<"  ";Sleep(200);
cout<<H<<endl<<endl;Sleep(100);
cout<<"第6题您的答案是"<<"  ";Sleep(200);
cout<<I<<endl<<endl;Sleep(100);
cout<<"第7题您的答案是"<<"  ";Sleep(200);
cout<<D<<endl<<endl;Sleep(100);
cout<<"第8题您的答案是"<<"  ";Sleep(200);
cout<<E<<endl<<endl;Sleep(100);
cout<<"第9题您的答案是"<<"  ";Sleep(200);
cout<<F<<endl<<endl;Sleep(100);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
cout<<"请问以上答案是否需要重新填写？如果需要重新填写，请输入1，如果不需要重新填写，请输入0"<<endl;Sleep(100);
xianshi();
cin>>dfg;
yingcang();
system("cls");
if(dfg==1){
for(;;){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
cout<<"正在重新进入调查问卷，请稍后......"<<endl;
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);
for(int i=1;i<=20;i++){
if(i>=1&&i<=10||i>=17&&i<=20){Sleep(200);cout<<"█";}
else {Sleep(350);cout<<"█";}

}
system("cls");
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE|FOREGROUND_RED|FOREGROUND_GREEN);
cout<<"已重新进入调查问卷。"<<endl<<endl;Sleep(100);
string A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R;
int dfg;
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE|FOREGROUND_RED|FOREGROUND_GREEN);	
cout<<"在正式开始调查问卷前，请填写您的真实信息。"<<endl;Sleep(200);
cout<<"姓名："<<endl;
cout<<"性别："<<endl;
cout<<"年龄："<<endl;
string CSDN;
string csdn;
string xpxp;
string xpxpxp;
xianshi();
gotoxy(6,3);cin>>csdn;
yingcang();
if(csdn=="羽浩腾"||csdn=="谭俊涵"){
cout<<"管理员，您好！"<<endl;Sleep(200);
cout<<"系统已自动识别身份。请确认信息。"<<endl;Sleep(100);
cout<<"姓名："<<csdn<<endl;
if(csdn=="羽浩腾"){
cout<<"性别：男"<<endl;CSDN="男";
cout<<"年龄：11"<<endl;xpxp="11";Sleep(200);
cout<<"若信息无误，请输入管理员密码，否则输入 1"<<endl;Sleep(100);
xianshi();
cin>>xpxpxp;
yingcang();
if(xpxpxp=="tanyu") cout<<" ";
else if(xpxpxp=="1"){
cout<<"请联系管理员修改信息"<<endl;
system("pause");
return 0;
}
}
else if(csdn=="谭俊涵"){
cout<<"性别：男"<<endl;CSDN="男";
cout<<"年龄：11"<<endl;xpxp="11";Sleep(200);
cout<<"若信息无误，请输入管理员密码，否则输入 1"<<endl;Sleep(100);
xianshi();
cin>>xpxpxp;
yingcang();
if(xpxpxp=="tanyu") cout<<" ";
else if(xpxpxp=="1"){
cout<<"请联系管理员修改信息"<<endl;
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
cout<<"正式进入调查问卷。"<<endl;Sleep(200);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE|FOREGROUND_RED|FOREGROUND_GREEN);	
cout<<"调查问卷:"<<endl;Sleep(200);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
cout<<"本次调查问卷的每一道题都要认真思考后再选择"<<endl<<endl;Sleep(200);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"开始答题。"<<endl<<endl<<endl;Sleep(200);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
cout<<"第1题:请问您对这个作品满意吗？"<<endl;Sleep(200);
cout<<"A.满意  B.不满意"<<endl;Sleep(100);
xianshi();
cin>>A;
yingcang();
if(A=="B"){
cout<<"请问还有哪些需要修改"<<endl;Sleep(100);
xianshi();
cin>>B; 
yingcang();
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"感谢您的反馈！"<<endl;Sleep(200);
}
else if(A=="A"){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"感谢您对我们的认可!";Sleep(2000);} 
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<endl<<endl<<"下一题"<<endl;Sleep(200);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
cout<<"第2题:请问您知道这个作品的开发者吗？"<<endl;Sleep(200);
cout<<"A.知道  B.不知道"<<endl;Sleep(100);
xianshi();
cin>>C; 
yingcang();
if(C=="A"){
cout<<"请问这个作品的开发者是谁(输入名字)"<<endl;Sleep(100);
xianshi();
cin>>K; 
yingcang();
if(K!="谭俊涵"){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
cout<<"回答错误！"<<endl;Sleep(200);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"这个作品的开发者是:谭俊涵";Sleep(200);
}
else if(K=="谭俊涵"){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"回答正确！";Sleep(200);
}
}
else if(C=="B"){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"这个作品的开发者是:谭俊涵";Sleep(2000);}
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<endl<<endl<<"下一题"<<endl;Sleep(200);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
cout<<"第3题:请问您对这个作品的开发者熟系吗？"<<endl;Sleep(200);
cout<<"A.熟系  B.不熟系"<<endl;Sleep(100);
xianshi();
cin>>J; 
yingcang();
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"下一题"<<endl;Sleep(200);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
cout<<"第4题:请问您知道这个作品是哪个工作室开发的吗？"<<endl;Sleep(200);
cout<<"A.知道  B.不知道"<<endl;Sleep(100);
xianshi();
cin>>G; 
yingcang();
if(G=="A"){
cout<<"请问这个作品的工作室是哪个工作室？"<<endl;Sleep(100);
xianshi();
cin>>L; 
yingcang();
if(L!="谭羽工作室"){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
cout<<"回答错误！"<<endl;Sleep(200);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"开发这个作品的工作室是:谭羽工作室";Sleep(200);
}
else if(L=="谭羽工作室"){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"回答正确！";Sleep(200);
}
}
else if(G=="B"){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"开发这个作品的工作室是:谭羽工作室";Sleep(2000);} 
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<endl<<endl<<"下一题"<<endl;Sleep(200);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
cout<<"第5题:请问您知道这个作品的工作室有那些成员吗？"<<endl;Sleep(200);
cout<<"A.知道  B.不知道"<<endl;Sleep(100);
xianshi();
cin>>H; 
yingcang();
if(H=="A"){
cout<<"请问这个工作室有哪些成员？(提示:两个人)"<<endl;Sleep(100);
xianshi();
cin>>M>>N;
yingcang();
if(M=="谭俊涵"&&N=="羽浩腾"||M=="羽浩腾"&&N=="谭俊涵"){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"回答正确！";Sleep(200);
}
else{
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
cout<<"回答错误！"<<endl;Sleep(200);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"这个工作室有这两个成员:谭俊涵、羽浩腾";Sleep(200);
}
}
else if(H=="B"){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"这个工作室有这两个成员:谭俊涵、羽浩腾";Sleep(2000);} 
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<endl<<endl<<"下一题"<<endl;Sleep(200);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
cout<<"第6题:请问您对这个工作室熟系吗？"<<endl;Sleep(200);
cout<<"A.熟系  B.不熟系"<<endl;Sleep(100);
xianshi();
cin>>I; 
yingcang();
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"下一题"<<endl;Sleep(200);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
cout<<"第7题:请问您知道这个作品会到哪一版停更吗？"<<endl;Sleep(200);
cout<<"A.知道  B.不知道"<<endl;Sleep(100);
xianshi();
cin>>D; 
yingcang();
if(D=="A"){
cout<<"请问这个作品会到哪一版停更？"<<endl;Sleep(100);
xianshi();
cin>>O; 
yingcang();
if(O!="x.x"){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
cout<<"回答错误！"<<endl;Sleep(200);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"这个作品将会到x.x停更";Sleep(200); 
}
else{
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"回答正确";Sleep(200);
}
}
else if(D=="B"){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"这个作品将会到x.x停更";Sleep(2000);}
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<endl<<endl<<"下一题"<<endl;Sleep(200);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
cout<<"第8题:请问您知道您正在游玩的这个作品是哪个版本吗？"<<endl;Sleep(200);
cout<<"A.知道  B.不知道"<<endl;Sleep(100);
xianshi();
cin>>E; 
yingcang();
if(E=="A"){
cout<<"请问您正在游玩的这个版本是哪个版本的？"<<endl;Sleep(100);
xianshi();
cin>>P; 
yingcang();
if(P!="7.0测试版"){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
cout<<"回答错误！"<<endl;Sleep(200);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"您现在游玩的是7.0测试版";Sleep(200); 
}
else{
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"回答正确";Sleep(200);
}
}
else if(E=="B"){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"您现在游玩的是7.0测试版";Sleep(2000);}
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<endl<<endl<<"下一题"<<endl;Sleep(200);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
cout<<"第9题:请问您是从哪一个版本玩起的？"<<endl;Sleep(200);
cout<<"A. 1.0  B. 1.5  C. 2.0  D. 2.5  E. 3.0  F. 3.5  G. 4.0  H. 4.5  I. 5.0  j. 5.5  k. 6.0  L. 6.5  M.7.0"<<endl;Sleep(100);
xianshi();
cin>>F;
yingcang();
system("cls");
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
cout<<"您的姓名是"<<"       ";Sleep(200);
cout<<csdn<<endl<<endl;Sleep(100);
cout<<"您的性别是"<<"       ";Sleep(200);
cout<<CSDN<<endl<<endl;Sleep(100);
cout<<"您的年龄是"<<"       ";Sleep(200);
cout<<xpxp<<endl<<endl;Sleep(100);
cout<<"第1题您的答案是"<<"  ";Sleep(200);
cout<<A<<endl<<endl;Sleep(100);
cout<<"第2题您的答案是"<<"  ";Sleep(200);
cout<<C<<endl<<endl;Sleep(100);
cout<<"第3题您的答案是"<<"  ";Sleep(200);
cout<<J<<endl<<endl;Sleep(100);
cout<<"第4题您的答案是"<<"  ";Sleep(200);
cout<<G<<endl<<endl;Sleep(100);
cout<<"第5题您的答案是"<<"  ";Sleep(200);
cout<<H<<endl<<endl;Sleep(100);
cout<<"第6题您的答案是"<<"  ";Sleep(200);
cout<<I<<endl<<endl;Sleep(100);
cout<<"第7题您的答案是"<<"  ";Sleep(200);
cout<<D<<endl<<endl;Sleep(100);
cout<<"第8题您的答案是"<<"  ";Sleep(200);
cout<<E<<endl<<endl;Sleep(100);
cout<<"第9题您的答案是"<<"  ";Sleep(200);
cout<<F<<endl<<endl;Sleep(100);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
cout<<"请问以上答案是否需要重新填写？如果需要重新填写，请输入1，如果不需要重新填写，请输入0"<<endl;Sleep(100);
xianshi();
cin>>dfg;
yingcang();
system("cls");
if(dfg==0) break; 
}
}
MessageBox(NULL,"本作品的开发者是:谭俊涵","感谢您的回答!",MB_OK);
MessageBox(NULL,"本作品制作游戏内容的是:谭俊涵","感谢您的回答!",MB_OK);
MessageBox(NULL,"本作品制作开头、结尾、调查问卷、零散修改的是:羽浩腾","感谢您的回答!",MB_OK);
MessageBox(NULL,"本作品的工作室是:谭羽工作室","感谢您的回答!",MB_OK);
MessageBox(NULL,"本作品的代言人是:羽浩腾.谭俊涵.陈忆轩.阮烁恒.余振东.陈科羽.何宇彬.陈源洋.张伟.华子杰.熊伟辰.欧阳梓萱.郑浩扬.杨梓豪.卢瑞平.黄祥欢.董晋熙.吴希然","感谢您的回答!",MB_OK);
MessageBox(NULL,"我们谭羽工作室会更加努力创作更多作品。再见！","感谢您的回答!",MB_OK);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE|FOREGROUND_RED|FOREGROUND_GREEN);	
} 
if(q==0){
system("cls");
cout<<"正在退出游戏。"<<endl;
ShellExecuteA(NULL, "open", "C:\\c++人生重开模拟器（修仙7.0版）测试版\\.renshengchongkaimoniqi\\辅助文件\\辅助文件2.exe",0,0,1);
Sleep(21900);
cout<<"已退出游戏，再见"<<endl;
}
system("pause");
	return 0;
}
