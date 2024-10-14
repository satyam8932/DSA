def is_valid_parentheses(string):
    stack = []

    bracket_map = {')': '(', '}': '{', ']': '['}

    for s in string:
        if s in bracket_map.values():
            stack.append(s)
        
        elif s in bracket_map.keys():
            if stack and stack[-1] == bracket_map[s]:
                stack.pop()

            else:
                return False
    
    return not stack

# Example usage
print(is_valid_parentheses("()[]{}"))  # Output: True
print(is_valid_parentheses("(]")) 