/* Problem 
* Write a program that tests whether two words are anagrams (permutations of the same let-
* ters):
* Enter first word: smartest
* Enter second word: mattress
* The words are anagrams.
* Enter first word: dumbest
* Enter second word: stumble
* The words are not anagrams.
* Write a loop that reads the first word, character by character, using an array of 26 integers to
* keep track of how many times each letter has been seen. (For example, after the word smart-
* est has been read, the array should contain the values 1 0 0 0 1 0 0 0 0 0 0 0 1 0 0 0 0 1 2 2 0
* 0 0 0 0 0, reflecting the fact that smartest contains one a, one e, one m, one r, two s’s and
* two t’s.) Use another loop to read the second word, except this time decrementing the corre-
* sponding array element as each letter is read. Both loops should ignore any characters that
* aren’t letters, and both should treat upper-case letters in the same way as lower-case letters.
* After the second word has been read, use a third loop to check whether all the elements in
* the array are zero. If so, the words are anagrams. Hint: You may wish to use functions from
* <ctype.h>, such as isalpha and tolower.
*/

/* Solution */

#include <ctype.h>
#include <stdio.h>

int main()
{
    char ch;
    int a[26] = {0};
    printf("Enter first word: ");
    while ((ch = getchar())!= '\n'){
        switch(tolower(ch)){
            case 'a': a[0]+=1; break;
            case 'b': a[1]+=1; break;
            case 'c': a[2]+=1; break;
            case 'd': a[3]+=1; break;
            case 'e': a[4]+=1; break;
            case 'f': a[5]+=1; break;
            case 'g': a[6]+=1; break;
            case 'h': a[7]+=1; break;
            case 'i': a[8]+=1; break;
            case 'j': a[9]+=1; break;
            case 'k': a[10]+=1; break;
            case 'l': a[11]+=1; break;
            case 'm': a[12]+=1; break;
            case 'n': a[13]+=1; break;
            case 'o': a[14]+=1; break;
            case 'p': a[15]+=1; break;
            case 'q': a[16]+=1; break;
            case 'r': a[17]+=1; break;
            case 's': a[18]+=1; break;
            case 't': a[19]+=1; break;
            case 'u': a[20]+=1; break;
            case 'v': a[21]+=1; break;
            case 'w': a[22]+=1; break;
            case 'x': a[23]+=1; break;
            case 'y': a[24]+=1; break;
            case 'z': a[25]+=1; break;
        }
    }
    printf("Enter second word: ");
    while ((ch = getchar())!= '\n'){
        switch(tolower(ch)){
            case 'a': a[0]-=1; break;
            case 'b': a[1]-=1; break;
            case 'c': a[2]-=1; break;
            case 'd': a[3]-=1; break;
            case 'e': a[4]-=1; break;
            case 'f': a[5]-=1; break;
            case 'g': a[6]-=1; break;
            case 'h': a[7]-=1; break;
            case 'i': a[8]-=1; break;
            case 'j': a[9]-=1; break;
            case 'k': a[10]-=1; break;
            case 'l': a[11]-=1; break;
            case 'm': a[12]-=1; break;
            case 'n': a[13]-=1; break;
            case 'o': a[14]-=1; break;
            case 'p': a[15]-=1; break;
            case 'q': a[16]-=1; break;
            case 'r': a[17]-=1; break;
            case 's': a[18]-=1; break;
            case 't': a[19]-=1; break;
            case 'u': a[20]-=1; break;
            case 'v': a[21]-=1; break;
            case 'w': a[22]-=1; break;
            case 'x': a[23]-=1; break;
            case 'y': a[24]-=1; break;
            case 'z': a[25]-=1; break;
        }
    }
    
    for (int i = 0; i < 26; i++){
        if (a[i] != 0){
            printf("The words are not anagrams\n");
            return 0;
        }
    }
    printf("The words are anagrams\n");
    return 0;
}
