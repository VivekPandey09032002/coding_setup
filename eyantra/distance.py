'''
This script is code stub for CodeChef problem code DIST1_PY
Filename:      DIST1_PY_solution.py
Created:       27/09/2021
Last Modified: 27/09/2021
Author:        e-Yantra Team
'''

 
# Import any required module/s
import math
# Function to calculate Euclidean distance between two points
def compute_distance(x1, y1, x2, y2):
    d1=math.pow(x2-x1,2)
    d2=math.pow(y2-y1,2)
    distance = math.sqrt(d1+d2)
    return distance


    # Complete this function to return Euclidean distance and
    # print the distance value with precision up to 2 decimal places


# Main function
if __name__ == '__main__':
    
    # Take the T (test_cases) input
    test_cases = int(input())

    # Write the code here to take the x1, y1, x2 and y2 values
    
    while test_cases>0:
        # Once you have all 4 values, call the compute_distance function to find Euclidean distance
        x1,y1,x2,y2=[int(x) for x in input().split()]
        ans=compute_distance(x1, y1, x2, y2)
        ans='{:.2f}'.format(ans)
        print('Distance: {}'.format(ans))
        test_cases=test_cases-1