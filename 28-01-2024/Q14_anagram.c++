#task

#s = abccde

#Break s into two parts: 'abc' and 'cde'. Note that all letters have been used, the substrings are contiguous and their lengths are equal. Now you can change 'a' and 'b' in the first substring to 'd' and 'e' to have 'dec' and 'cde' which are anagrams. Two changes were necessary.

#Function Description

#Complete the anagram function in the editor below.

#anagram has the following parameter(s):

# string s: a string

#Returns

#• int: the minimum number of characters to change or -1.

#Input Format

#The first line will contain an integer, q, the number of test cases. Each test case will contain a string s.

#Constraints

#1 <= q <= 100

#1 <= |s| <= 10 ^ 4

#s consists only of characters in the range ascii[a-z].

#Sample Input

#6

#aaabbb

#ab

#abc

#mnop

xyyx


 
  
  
#include <bits/stdc++.h>
using namespace std;

string ltrim(const string &);

 string rtrim(const string &);

 Complete the 'anagram' function below.

int anagram(string s) {

}

 int main()

{

ofstream fout (getenv("OUTPUT_PATH")); 

string q_temp; 

getline(cin, q_temp); 

int q stoi (ltrim(rtrim(q_temp))); 

for (int itr =0: q_itr <q; quitr++) { 

string s; 

 int result anagram(s);

fout.close();
getline(cin, s);

fout << result << "\n";

return 0;

string ltrim(const string &str) {

string s(str); 

s.begin(),  s.erase(

find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace))) 47


);



 return s;
}


 string rtrim(const string &str) {

string s(str); 

s.erase( 

find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),

s.end() 


 );


 return s;

 }

