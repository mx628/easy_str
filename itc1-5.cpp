#include <iostream>
#include <string>
#include "str_easy.h"
using namespace std;
string itc_hello_str(string name){//1
    return "Hello " + name;
}

long long itc_len(string str){//2
    long long i = 0, n = 0;
    while(str[i] != 0){
        n++;
        i++;
    }
    return n;
}

void itc_print_copy_str(string str, int number){//3
    for(int i = 0; i < number; i++){
        cout << str << endl;
    }
}

void itc_first_end_three(string str){//4
    if(itc_len(str) <= 5){
        for(int i = 0; i < itc_len(str); i++)
            cout << str[0];
    }
    cout << str[0] << str[1] << str[2] << str[itc_len(str)-1] << str[itc_len(str)-2] << str[itc_len(str)-3];
}

int itc_count_char_in_str(char ch, string str){//5
    int n = 0;
    for(int i = 0; i < itc_len(str); i++){
        if(str[i] == ch)
            n++;
    }
    return ch;
}
