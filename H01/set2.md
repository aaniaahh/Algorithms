## Insert the following values in order:
50, 40, 45, 60, 55, 70, 35, 30, 65, 75, 43

------------------------------------------------------------------------------------
## Insert 50
- Insert 50 into the empty tree ; *the root*

## Insert 40
- 40 is less than 50, so 40 is the left child of 50 
  - Balance factor of 50: 1 - 0 = 1 ; *no rotation needed*

## Insert 45
- 45 is less than 50 and greater than 40, so 45 is the left child of 40
  - Balance factor of 50: 2 - 0 = 2 ; *left-right rotation needed*

<img src= "./images/set21.png" width="200">

### After the Left Rotation on 40

<img src= "./images/set22.png" width="200">

### After the Right Rotation on 50

<img src= "./images/set23.png" width="200">

## Insert 60
 - 60 is greater than 45 and 50, so 60 is the right child of 50
   - Balance factor of 45: 1 - 1 = 0 ; *no rotation needed*

## Insert 55
- 55 is great than 45 and 50, but less than 60, so 50 is the left child of 60
   - Balance factor of 45: 0 - 1 = -1 ; *no rotation needed*
   - Balance factor of 50: 1 - 2 = -1 ; *no rotation needed*

## Insert 70
- 70 is greater than 45, 50, and 60, so 70 is the right child of 60
   - Balance factor of 50: 0 - 2 = -2 ; *left rotation at 50 needed*

<img src= "./images/set24.png" width="200">

### After the LL Rotations

<img src= "./images/set25.png" width="200">

## Insert 35
- 35 is less than 45 and 40, so 35 is the left child of 40
  - Balance factor of 45: 2 - 2 =  0 ; *no rotation needed*

## Insert 30
- 30 is less than 45, 40, and 30, so 30 is the left child of 35  
   - Balance factor of 40: 2 - 0 = 2 ; *right rotation at 40 needed*

<img src= "./images/set26.png" width="200">

### After the LL Rotation   

<img src= "./images/set27.png" width="200">

## Insert 65
- 65 is greater than 45 and 60, but less than 70, so 65 is the left child of 70
   - Balance factor of 60: 2 - 2 = 0 ; *no rotation needed*

## Insert 75
- 75 is greater than 45, 60, and 70, so 75 is the right child of 70
   - Balance factor of 60: 2 - 3 = -1 ; *no rotation needed*

## Insert 43
- 43 is less than 45, and greater than 35 and 40, so 43 is the right child of 40
   - Balance factor of 35: 1 - 1 = 0 ; *no rotation needed*
   - Balance factor of 45: 2 - 2 = 0 ; *no rotation needed*  

<img src= "./images/set28.png" width="300">