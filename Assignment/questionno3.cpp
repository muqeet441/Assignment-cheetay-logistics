#include <iostream>
#include <string>

using namespace std;

bool checkDuplicate(char arr[],char letter)
{
    bool result = false;
    int i=0;
    while(arr[i]!='\0'){
        if(arr[i]==letter)
        {
            result =true;
            break;
        }
    }
    return result;
}

int longestSubstrDitinctChars(string s)
{
    int len = 0;
    char arr[s.length()]={'\0'};
    for(int i=0; i<s.length(); i++){
        if(i == 0){
            arr[0]=s[0];
            len++;
        }
        else{
            if(checkDuplicate(arr,s[i]) != true){
                len++;
                arr[len]=s[i];
            }
        }
    }
    return len;
}

int main()
{
    string S="geeksforgeeks";
    
    cout<<S;
    int length = longestSubstrDitinctChars(S);
    cout<<"Length === length";    
        
    return 0;
}