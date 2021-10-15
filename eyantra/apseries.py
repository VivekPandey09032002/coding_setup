'''
This script is code stub for CodeChef problem code APLAM1_PY
Filename:      APLAM1_PY_solution.py
Created:       27/09/2021
Last Modified: 27/09/2021
Author:        e-Yantra Team
'''

# Import reduce module
from functools import reduce


# Function to generate the A.P. series
def generate_AP(a1, d, n):

    AP_series = []

    # Complete this function to return A.P. series
    AP_series.append(a1)
    for i in range(1,n):
        a1=a1+d
        AP_series.append(a1)

    return AP_series


# Main function
if __name__ == '__main__':
    
    # take the T (test_cases) input
    test_cases = int(input())

    # Write the code here to take the a1, d and n values
    while test_cases>0:
        a1,d,n=[int(x) for x in input().split()]
        # Once you have all 3 values, call the generate_AP function to find A.P. series and print it
        AP_series = generate_AP(a1, d, n)
        for x in AP_series:
            print(x,end=" ")
        # Using lambda and map functions, find squares of terms in AP series and print it
        print()
        sqr_AP_series = map(lambda x:x*x,AP_series)
        sqr_AP_series=list(sqr_AP_series)
        for x in sqr_AP_series:
            print(x,end=" ")
        

        # Using lambda and reduce functions, find sum of squares of terms in AP series and print it
        print()
        sum_sqr_AP_series = reduce(lambda x,y:x+y,sqr_AP_series)
        print(sum_sqr_AP_series)
        test_cases=test_cases-1