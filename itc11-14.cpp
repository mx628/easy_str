#include <iostream>
#include <string>
#include "str_easy.h"
using namespace std;

string itc_cmp_str(string str1, string str2, int num){
    int plen = itc_len(str2) + num;
    if(itc_len(str2) + num > itc_len(str1))
        plen = itc_len(str1);
    for(int i = itc_len(str2)-1; i < plen-1; i++){
        str1[i] = str2[i - itc_len(str2)+1];
    }
    return str1;
}

int itc_find_str(string str1, string str2){
    for(int i = 0; i < itc_len(str1); i++){
        if(itc_cmp_str(str1, str2, i) == str1)
            return i;
    }
    return -1;
}

string itc_three_str(string str1, string str2, string str3){
    string str4 = "";
    int pos = itc_find_str(str1, str2);
    if(pos == -1)
        return str1;
    for(int i = 0; i < pos; i++) {
        str4 += str1[i];
    }
    str4 += str3;
    for(int i = pos+itc_len(str2); i < itc_len(str1); i++) {
        str4 += str1[i];
    }
    return str4;
}

int itc_max_char_on_end(string str){
    int maxnum = 0;
    int num = 0;
    for(int i = 0; i < itc_len(str); i++){
        if(str[i] >= 48 && str[i] <= 57){
            num++;
            if(num > maxnum)
                maxnum = num;
        }
        else
            num = 0;
    }
    return maxnum;
}
