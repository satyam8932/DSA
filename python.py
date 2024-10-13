class Arrays:
    def ReverseArray(self, array):
        """Using Two Pointer Approach to reverse the array"""

        size = len(array)
        # Loop through half of the array
        for i in range(size//2):
            j = size - i - 1
            # Swap elements
            array[i], array[j] = array[j], array[i]
    
    def PrintArray(self, array):
        """Print the array in the console"""

        for element in array:
            print(element, end=" ")
        print()
    
    def FindMax(self, array):
        """Find the maximum element in the array"""

        max_value = array[0]
        for element in array:
            if element > max_value:
                max_value = element
        return max_value
    
    def FindMin(self, array):
        """Find the minimum element in the array"""

        min_value = array[0]
        for element in array:
            if element < min_value:
                min_value = element
        return min_value
    
    def MoveZeroEnd(self, array):
        """Move all zero elements to the end of the array"""
        size = len(array)
        for i in range(size):
            if array[i] == 0:
                array.append(array.pop(i))
        

arryas = Arrays()

arr = [0, 1, 2, 3, 4, 5, 6]
print("Before Reverse: ")
arryas.PrintArray(arr)
arryas.ReverseArray(arr)
print("Reversed Array:")
arryas.PrintArray(arr)
maximum = arryas.FindMax(arr)
minimum = arryas.FindMin(arr)
print(minimum, maximum)
arr1 = [0, 1, 0, 3, 12]
arryas.MoveZeroEnd(arr1)
arryas.PrintArray(arr1)