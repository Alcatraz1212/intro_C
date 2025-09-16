#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <array>
#include <cstdio>
using namespace std;

int mylen(char s[]){
    int n = 0;
    while (s[n] != '\0'){
        n++;
    }

    return n;
}

int compare_cstrings(char s1[], char s2[]){
    int i = 0;
    while (i< 100000){
        if (s1[i] == '\0' && s2[i] == '\0'){
            return 0;
        }
        else if (s1[i] < s2[i] || s1[i] == '\0'){
            return -1;
        }
        else if (s2[i] < s1[i] || s2[i] == '\0'){
            return 1;
        }
        i++;
    }
    return 0;
}

bool palindrome(char str[]){
    int n = mylen(str);
    for (int i = 0; i<n/2; i++){
        //std::printf("%c : %c \n", str[i], str[n-i-1]);
        if (str[i] != str[n-i-1]){
            return false;
        }
    }
    return true;
}

void reverse(char str[]){
    int n = mylen(str);
    for (int i = 0; i<n/2; i++){
        char c = str[i];
        str[i] = str[n-i-1];
        str[n-i-1] = c;
    }
}

int main(){
    char str[4] = { 'd', 'o', 'g', '\0' };
    char str2[5] = { 'l', 'o', 'o', 'l', '\0' };
    std::printf("%d\n", mylen(str));
    std::printf("%d\n", compare_cstrings(str, str2));
    if (palindrome(str2)){
            std::printf("true\n");
    }
    else{
        std::printf("false\n");
    }
    reverse(str);
    for (int i = 0; i<mylen(str); i++){
        std::printf("%c", str[i]);
    }
    return 0;
}