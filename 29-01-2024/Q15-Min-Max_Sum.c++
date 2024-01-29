Example

arr = [1, 3, 5, 7, 9]

The minimum sum is 1 + 3 + 5 + 7 = 16 and the maximum sum is 3 + 5 + 7 + 9 = 24 The function prints

16 24

Function Description

Complete the miniMaxSum function in the editor below.

miniMaxSum has the following parameter(s):

• ar an array of 5 integers

Print

Print two space-separated integers on one line: the minimum sum and the maxim of 4 of 5 elements.

Input Format

A single line of five space-separated integers.

Constraints

1 <= arr[i] <= 10 ^ 5
Output Format

Print two space-separated long integers denoting the respective minimum and ma values that can be calculated by summing exactly four of the five integers. (The our be greater than a 32 bit integer.)

Sample Input

1 2

4 5

3

Sample Output

10 14

#include<stdc++.h>
using namespace std;

string ltrim(const string &);

string rtrim(const string &);

vector<string> split(const string &);



 long long min = LLONG_MAX max LLONG MIN, sum;

 for (int 1 = 0 ;1< arr.size(); ++1)

sum
1 + 1 + 1 = - 11

void miniMaxSum(vector<int> arr) {

for (int j = 0 j < arr.size(); ++j)

sum += arr[0];

if (sum max) 

max = sum * 7
if sum < m * 1n )
min sum;
cout << min << " " << max << endl;
 int main()
{
string arr_temp_temp;
getline(cin, arr temp_temp);
vector<string> arr_temp split(rtrim(arr_temp_temp));

vector<int> arr(5);
 for (int 1 =0; 1 < 5 ;1++ {
 int arr_item stol (arr_temp[1]);

arr[1] = arr
miniMaxSum(arr);
return 0;
string trim(const string &str) {
 string s(str);
 s.erase(
 s.begin(),
find_if(s.begin(), s.end(), notl(ptr_fun<int, int>(1sspace)))
);
 return s;
 string rtrim(const string &str) {
string s(str);

s.erase( 
 find_1f(s.rbegin(), s.rend(), notl(ptr_fun<int, int>(isspace))).base(),

s.end()

);

return s;

 vector<string> split(const string &str) (

vector<string> tokens;

string::size type start = 0;

string::size_type end = 0; while ((end str.find("", start)) != string::npos) {

)


tokens.push_back(str.substr(start, end

start end + 1;

tokens.push_back(str.substr(start));

return tokens;

start));
