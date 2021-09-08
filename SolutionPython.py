# Function for sorting
def insertionsort(arr):
    for i in range(1, len(arr)):
        key = arr[i]
        a = i - 1
        while a >= 0 and key < arr[a]:
            arr[a+1] = arr[a]
            a = a - 1
        arr[a+1] = key


# providing the un-sorted array
arr = [12, 11, 13, 5, 6]
insertionsort(arr)

# creating a list of sorted arrays
sortedarr = []
for i in range(len(arr)):
    sortedarr.append(arr[i])

# Printing the list
print(sortedarr)
