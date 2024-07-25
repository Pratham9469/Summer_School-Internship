class Solution {
public:
bool isvowel(char s){
    if(s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u' ||s == 'A' || s == 'E' || s == 'I' || s == 'O' || s == 'U' )
       return true;
       return false;
}
    bool halvesAreAlike(string s) {
        int count0=0,count1=0;
        int n=s.length()/2;
        int j=n;
for(int i=0;i<n;i++){
    if(isvowel(s[i]))
    count0++;
    if(isvowel(s[j]))
    count1++;
    j++;
}
if(count0==count1)
return true;
return false;
       }
};
