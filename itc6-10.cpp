#include <iostream>
#include <string>
#include "str_easy.h"
using namespace std;
string itc_even_place(string str){//6
    string str2;
    int ind = 0;
    for(int i = 0; i < itc_len(str); i++){
        if(i + 1 % 2 == 0){
            str2[ind] = str[i];
            ind++;
        }
    }
    return str2;
}

double itc_percent_lower_uppercase(string str){//7
    double low = 0;
    double upper = 0;
    for(int i = 0; i < itc_len(str); i++){
        if(str[i] >= 65 && str[i] <= 90)
            upper++;
        if(str[i] >= 97 && str[i] <= 122)
            low++;
    }
    return upper/low * 100;
}

string itc_reverse_str(string str){//8
    string str2 = str;
    for(int i = 0; i < itc_len(str); i++){
        str[i] = str2[itc_len(str)-i];
    }
    return str;
}

string itc_slice_str(string str, int start, int end){//9
    string str2;
    if(start >= itc_len(str))
        return str;
    if(end > itc_len(str))
        end = itc_len(str);
    for(int i = start; i <= end; i++){
        str2[i-start] = str[i];
    }
    return str2;
}

bool itc_equal_reverse(string str){ //10
    bool pal = true;
    for(int i = 0; i < itc_len(str)/2; i++){
        if(str[i] != itc_len(str)-i)
            pal = false;
    }
    return pal;
}
