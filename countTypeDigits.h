
#include <string>
#include <iostream>
#include <cstring>

using namespace std;

void countTypeDigits(string stringNumber){

    int n  = stringNumber.length();
    char char_array[n+1];
    int numbers[10] = {0,0,0,0,0,0,0,0,0,0};
    strcpy(char_array, stringNumber.c_str());
    for(int i = 0; i<n; i++){
        switch(char_array[i]){
            case '0':
                numbers[0] += 1;
                break;
            case '1':
                numbers[1] += 1;
                break;
            case '2':
                numbers[2] += 1;
                break;
            case '3':
                numbers[3] += 1;
                break;
            case '4':
                numbers[4] += 1;
                break;
            case '5':
                numbers[5] += 1;
                break;
            case '6':
                numbers[6] += 1;
                break;
            case '7':
                numbers[7] += 1;
                break;
            case '8':
                numbers[8] += 1;
                break;
            case '9':
                numbers[9] += 1;
                break;
        }
    }
    for(int i=0; i<10; i++){
        cout << i << ' ' << numbers[i] << endl;
    }

}