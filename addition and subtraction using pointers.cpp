/* Tripatjot singh
PRN 24070123044
ENTC A2 */

#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter the value of num1 and num2:\n";
    cin >> num1 >> num2;

    int *n1ptr = &num1;
    int *n2ptr = &num2;

    int diff;
        diff = *n1ptr - *n2ptr;
cout<<" the difference is : "<<diff;
int sum;
sum = *n1ptr + *n2ptr
cout<<"\nThe sum is : "<<sum;

}

/* output for this code

Enter the value of num1 and num2:
50 100 
The difference is: -50
The sum is: 150

*/  
