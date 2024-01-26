#Input Format

#A single integer denoting n.

#Constraints

#• 0 < n ≤ 105

#Output Format

#Print an integer denoting the best divisor of n.

#Sample Input 0

#12

#Sample Output 0

#6

#include <bits/stdc++.h

using namespace std;


int digit_sum(int n) {


int sum = 0;


while(n>0) {


sum += n%10;


n=n/10;


}


return sum;

}
int main()


{



int n;cin>>n;


int best=1;


for(int i=1;i<=n;i++) {

if(n%i==0 && digit_sum(i)>digit_sum(best)) {


best=i;

}
}
}

cout << best;
  
