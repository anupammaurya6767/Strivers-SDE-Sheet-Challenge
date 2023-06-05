from math import *
from collections import *
from sys import *
from os import *

def travel_clockwise(A,left,right,bottom,top):
    temp = A[top][left]
    #L2R
    for i in range(left,right):
        temp, A[top][i+1] = A[top][i+1],temp
    #T2B
    for i in range(top,bottom):
        temp, A[i+1][right] = A[i+1][right],temp
    #R2L
    for i in range(right,left,-1):
        temp, A[bottom][i-1] = A[bottom][i-1],temp
    #B2T                
    for i in range(bottom,top,-1):
        temp, A[i-1][left] = A[i-1][left],temp
    return A
def rotateMatrix(mat, n, m):
    # Write your code here
    left,right,bottom,top = 0,m-1,n-1,0
    while(left<right and top<bottom):
        mat = travel_clockwise(mat,left,right,bottom,top) 
        left+=1
        right-=1
        bottom-=1
        top+=1
    return mat
    pass
