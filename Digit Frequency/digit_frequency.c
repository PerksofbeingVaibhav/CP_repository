#include <stdio.h>
#include <string.h>
//this is not user input
void solve(char *s){
    int freq[10] = {0};
    for(int i = 0; i < strlen(s); i++){
        if(s[i] >= '0' && s[i] <= '9'){
            freq[s[i] - '0']++ ;    
        }
    }
    for(int i = 0; i<10; i++){
        if(freq[i] > 0)
            printf("(Number %d, Freq %d)\n", i, freq[i]);
    }
}
int main(){
    char *s = "we85abc586wow236h69";
    solve(s);
}