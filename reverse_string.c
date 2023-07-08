#include <stdio.h>
#include <string.h>

int main() {
    char word[20];
    char temp;
    int j;
    int i;

    fgets(word, 20, stdin);
    j = strlen(word) - 1;
    i = 0;
    while(i < j) {
        temp = word[i];
        word[i] = word[j];
        word[j] = temp;
        i++;
        j--;
    }
    printf("%s\n", word);
    return 0;
}
