#include <iostream>
#include <string>

using std::string;
using namespace std;




string countLetter(string input){
    int length = input.length();
    int counter = 1;

    //Wszystko zliczane będzie w lowercase
    for(int i = 0; i<length;i++){
        input[i] = tolower(input[i]);
    }
    for(int i=0;i<length;i++){
        if(!input[i]) //aby kod mógł dalej się wykonywać i omijać 0 lub jeśli na początku wyrazu mamy powtórzenie!
        continue;
        for(int j=i+1;j<length;j++){
            if(input[i] == input[j]){
                counter++;
                input[j] = 0;
            }
        }
        printf("\n %c Występuje : %d razy",input[i],counter);
        counter=1;
    }

    return 0;

    
}

int main(){
    countLetter("Hhejo");
}