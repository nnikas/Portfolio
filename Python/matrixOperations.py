#
# Skeleton code for Matrix operation functions
#
def isMatrix( matrix ) :
    isMatrix = True

    return( isMatrix )

def dimensions( matrix ) :
   
    nRows = len(matrix)
    nCols = len(matrix[0])

    #consider how it is possible to return multiple values
    #in one return statement
    return( nRows, nCols )
 

def add( matrixA, matrixB ) :

    return C
 

def multiply( matrixA, matrixB ) : 

    return C

def scale( matrix, scale ) :

    return C


A = [ [3,8], [4,6] ]
B = [ [4,0], [1,-9] ]

print '\nAdding Matrix A and B:\n'
C = add( A, B )
if len(C) != 0 :
    print A, ' + ', B, ' = ', C, '\n'
else :
    print 'Matrices could not be added...\n'
