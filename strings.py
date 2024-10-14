class Strings:
    def ReverseString(self, string : str) -> str:
        strList = list(string)

        left , right = 0, len(strList)-1

        while left < right:
            strList[left], strList[right] = strList[right], strList[left]
            left += 1
            right -= 1
        
        return "".join(strList) # convert to string again
    
    def NonRepeatingChar(self, string : str) -> str:
        char_count = {}  # empty map

        for char in string:
            if char in char_count:
                char_count[char] += 1
            else:
                char_count[char] = 1

        for char in char_count:
            if char_count[char] == 1:
                return char
        return "no unique constraints"



strings = Strings()


input_string = "leetcode"

output_string = strings.NonRepeatingChar(input_string)
print(output_string)