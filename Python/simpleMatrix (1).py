 #
#
#

#Set a boolean variable to assume the list we are creating is a Matrix
isMatrix = True

#Create a Matrix as a List of Lists
Matrix = [ [1,2,3], [4,5,6], [7,8,9] ]

#Use the for loop iteration structure to display each row of the Matrix
print 'Print Each Row using iteration:\n'
for eachRow in Matrix :
    print eachRow

#Use an index offset with the for loop to display each row of the Matrix
print '\nPrint Each Row using range() to create an index offset\n'
for r in range( len(Matrix) ):
    print Matrix[r]


#display each element of the matrix using for loop iteration
print '\nPrint each element using for loop iteration:\n'
for eachRow in Matrix :
    for eachColElement in eachRow :
        print eachColElement, ' ',

    print


#display each element using the range function to create an index offset
print '\nPrint each element using range to create an index offset:\n'
for r in range( len(Matrix) ) :
    for c in range( len( Matrix[r] ) ) :
	print Matrix[r][c], ' ',

    print

#Check if our List of Lists is actually a Matrix. 
#By definition, every row in a Matrix must contains the same number of elements

#use for loop construct to check that every column in the matrix contains the same number of columns as the first row
for eachRow in Matrix :
    if len(eachRow) != len( Matrix[0] ) :
        isMatrix = False;
	break;

#use list comprehensions and the all() function to determine if our list is a Matrix
sameNumElements = [ len(eachRow) == len(Matrix[0]) for eachRow in Matrix ]
if not all(sameNumElements) :
    isMatrix = False;

#perform some operations on the Matrix, but only if our list is a Matrix
if isMatrix :
    #Scale a matrix using a traditional nexted for loop structure
    newMatrix = []
    scale = 2
    print '\nScaling matrix by: ', scale, ':\n'
    for r in range( len(Matrix) ):

        #create en emptry list for each row of the new Matrix
        newMatrix.append( [] )

        for eachElement in Matrix[r] :
            newMatrix[r].append( scale * eachElement );

    print newMatrix
    
    #Scale a Matrix using List Comprehensions to construct and populate the scaled Matrix
    print '\nScaling matrix by: ', scale, 'Using List Comprehensions:\n'
    newMatrix = [ [scale*elem for elem in eachrow ] for eachrow in Matrix ]
    print newMatrix

    #Add the scaled matrix to the original matrix

    #Note:
    # since the Matrix we are adding is a scaled matrix of the original, we know it is a Matrix
    # with the same dimensions as the original. If we used a different matrix
    # to add, then we must first check that it is also a matrix and
    # the dimensions of both matrices are the same.

    #set the dimenstions based on the Original Matrix
    nRows = len(Matrix)
    nCols = len(Matrix[0])

    #add two Matrices using a traditional nested for loop structure
    print '\nAdding original Matrix and Scaled matrix using traditional for loop iteration:\n'
    addedMatrix = []

    for r in range(nRows) :
        addedMatrix.append( [] )
        for c in range(nCols) :
            #addedMatrix[r].append(0)
            #addedMatrix[r][c] = Matrix[r][c] + newMatrix[r][c]  
	      # OR
            addedMatrix[r].append( Matrix[r][c] + newMatrix[r][c] ) 
    print Matrix, ' +\n', newMatrix, ' ='
    print addedMatrix

    #adding two Matrices using list comprehensions
    print '\nAdding original Matrix and Scaled matrix using List Comprehension:\n'
    addedMatrix = [ [Matrix[r][c] + newMatrix[r][c]  for c in range(nCols)] for r in range(nRows) ]
    print Matrix, ' +\n', newMatrix, ' ='
    print addedMatrix

    #Multiply two matrices
    #
    #Note:
    # Unlike adding two matrices, the dimensions of both matrices
    # do not need to be the same, however, for two matrices to be multiplied,
    # the number of elements in each row of one matrix must equal the number 
    # of rows in the other matrix
    #
    # See Matrix Algebra Handout for details on multiplying two matrices
    # 
    #
else :
    print 'List ', Matrix, ' is not a matrix\nNo operations were performed'
