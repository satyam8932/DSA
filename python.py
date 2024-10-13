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

arryas = Arrays()

arr = [0, 1, 2, 3, 4, 5, 6]
print("Before Reverse: ")
arryas.PrintArray(arr)
arryas.ReverseArray(arr)
print("Reversed Array:")
arryas.PrintArray(arr)