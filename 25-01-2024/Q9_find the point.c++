#Consider two points, p (PP) and g (2) We consider the inversion or pom reflection, r() of peint i across pornt y to be a 180° rotation of point r arsund

#Given sets of pants and g. Tindir for each pair of points and print two space separated integers denoting the respective values of r, and ry on a new ivie

#Function Description Complete the flodPoint function in the editor below

#findPaint has the following parameters: • руди, дух and y coordinares for points p and 4

#Returns 22x and y caordinates of the reflected point
#The fest line contains an integer, n, denoting the number of sets of points Each of then subsequent lines contains four space-separated integers that describe the respective values of je and g, defining points p= (PP) and g()
Constraints

# 1≤ n ≤15

#-100P, Py, qz, qy≤100

#Sample Input

#2

#0011

#1122

#Sample Output

#22

#33
  
  
#include <bits/stdc++.h>
using namespace std;
string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);
vector<int> findPoint(int px, int py, int qx, int qy) {
 vector<int> r;
int valuel, value2;
 valuel 2*qx-px;
 value2 2 qy-py;
 r.push back(valuel);
 r.push back(value2);
 return r
 int main()

split(rtrim(first_multiple_input_temp)); vector<string> first_multiple_input


ofstream fout (getenv("OUTPUT_PATH"));

string n temp:

getline(cin, n_temp);

int n stoi(ltrim(rtrim(n_temp)));

for (int nitr0; n_1tr < n; nitr++) {

string first_multiple_input_temp;

getline(cin, first multiple_input_temp);

int px stoi(first_multiple_input[0]);

int py stoi(first_multiple_input[1]);

int qx stoi(first_multiple_input[2]);

int gy stoi(first_multiple_input[3]);

vector<int> result findPoint(px, py, qx, qy);

for (size_t 10; 1 result.size(); 1++) {

fout << result[1];

if (1 != result.size()-1) {

fout << " ";
}
fout << "\n";
fout.close();
return0;
}
string ltrim(const string &str) 
find_if(s.begin(), s.end(), noti (ptr_fun<int, int>(isspace)))
string s(str);
s.erase(
s.begin(),
 );
return s;
string rtrim(const string &str) {
string s(str);
s.erase(
find_if(s.rbegin(), s.rend(), notl(ptr_fun<int, int>(isspace))).base(),
s.end() );
return s;
vector<string> split(const string &str) {
vector<string> tokens;
string::size_type start = 0;
string::size_type end = 0;
while ((end = str.find("", start)) != string::npos) {
tokens.push_back(str.substr(start, end - start));
start end + 1
tokens.push_back(str.substr(start));
return tokens;
