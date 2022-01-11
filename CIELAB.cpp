/*In Ciel's restaurant, a waiter is training. Since the waiter isn't good at arithmetic, sometimes he gives guests wrong change. 
Ciel gives him a simple problem. What is A-B (A minus B) ?
Surprisingly, his answer is wrong. To be more precise, his answer has exactly one wrong digit. Can you imagine this? 
Can you make the same mistake in this problem?

Input
An input contains 2 integers A and B.

Output
Print a wrong answer of A-B. Your answer must be a positive integer containing the same number of digits as the correct answer, and exactly one digit must differ from the correct answer. Leading zeros are not allowed. 
If there are multiple answers satisfying the above conditions, anyone will do.
*/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int z=a-b;
    if(z%10 !=9){
        cout<<z+1;
    }
    else cout<<z-1;
}