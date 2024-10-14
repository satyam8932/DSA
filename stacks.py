class Stacks:
    def __init__(self, stack):
        self.stack = stack
    
    def push(self, value):
        self.stack.append(value)
    
    def pop(self, value):
        self.stack.pop(value)
    
    def peek(self):
        return self.stack[len(self.stack)-1]
    

stack = []

stack_obj = Stacks(stack)

stack_obj.push(1)
stack_obj.push(2)
stack_obj.push(3)
print(stack_obj.stack)
print(stack_obj.peek())
stack_obj.pop(2)
print(stack_obj.stack)
