Example

n = 4

routes = [3, 4, 5]

There are 3 roads to city 1, 4 roads to city 2 and 5 roads to city 3. The total number of roads is 3 * 4 * 5 mod 1234567 = 60

Note

Pass all the towns T_{j} for i = 1 to n-1 in numerical order to reach T_{n}

Function Description

Complete the connecting Towns function in the editor below.

connecting Towns has the following parameters:

• int n; the number of towns

int routes[n - 1] the number of routes between towns

Returns

•int: the total number of routes, modulo 1234567.

Input Format

The first line contains an integer T, T test-cases follow.

Each test-case has 2 lines.

The first line contains an integer N (the number of towns). The second line contains N-1 space separated integers where the ith integer denotes the number of routes, N is from the town T_{1} to T i + 1

Constraints

1 <= T <= 1000 2 < N <= 100 1 <= routes[i] <= 1000

Sample Input

2

3

13

122

nple Output

3 8
