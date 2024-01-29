#Given a time in 12 hour AM/FM format, convert it to military (24-hour) time.

#Note:-12:00:00AM on a 12-hour clock is 00:00:00 on a 24-hour clock -12:00:00PM on a 12-hour clock is 12:00:00 on a 24-hour clock.

#Example
#s=^ prime 12/1 / 0 * P * M'

#Retum 12:01:00

#s=^ * 12/1 / 0 * A M^ *

#Retum 00:01:00

#Function Description

#Complete the time Conversion function in the editor below. It should return a new string representing the input time in 24 hour format

#tuneCoriversion has the following parameters

#strings a time in 12 hour format

#Returns

string the time in 24 hour format

#Input Format

#A single string & that represents a time in 12 hour clock format (e: hh:mm:ssАМ ог hh:mm:ssPM).

#Constraints

#All input times are valid

#Sample Input 0

#07:05:45PM

#Sample Output 0

#19:05:45
  
#include <bits/stdc++.h>

using namespace std;

Complete the time Conversion function below.

10

string getString(char x) {

12

13 string s(1, x);

14

15 return s;

16

173

18

19 string timeConversion(string s) (

stoi(s.substr(0,2)); int hr

if(s[s.length()-2] == 'A') (

if(hr 12) [

return "90" + s.substr(2, 5);

20

21

22

23

24

25

26

27

28

29

30

31

32

else return s.substr(0, 8);

EE

34

35

else {

36

37

1f (hr 12) {

38

39

return s.substr(0, 8);

40

}

42

43

else

44

return to_string(hr 12) s.substr(2, 6);

45

46

}

47

481

49

SO int main()

51

52(

53 54

ofstream fout(getenv("OUTPUT_PATH"));

55

56

string s;

57

58

getline(cin, 5);

59

60 string result timeConversion(s);

61

62

fout << result << "\n";

63

64

fout.close();

65

66

67

681

return 0;

