#include<iostream>
 #include<process.h>
 using namespace std;
extern void _exit(register int code);
 
_start() {
    cout<<"hello world";
    exit(0);
}
