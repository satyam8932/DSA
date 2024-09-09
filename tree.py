class TreeNode:
    def __init__(self, data: int):
        self.data = data
        self.left = None
        self.right = None

class BinaryTree:
    def __init__(self, root_data: int):
        self.root = TreeNode(root_data)

    def insert(self, data: int):
        self._insert_recursive(self.root, data)

    def _insert_recursive(self, node: TreeNode, data: int):
        if data < node.data:
            if node.left is None:
                node.left = TreeNode(data)
            else:
                self._insert_recursive(node.left, data)
        else:
            if node.right is None:
                node.right = TreeNode(data)
            else:
                self._insert_recursive(node.right, data)

    def inorder_traversal(self):
        return self._inorder_recursive(self.root, [])

    def _inorder_recursive(self, node: TreeNode, result: list):
        if node is not None:
            self._inorder_recursive(node.left, result)
            result.append(node.data)
            self._inorder_recursive(node.right, result)
        return result

# Example usage:
bt = BinaryTree(10)  # root of the tree is 10
bt.insert(5)
bt.insert(15)
bt.insert(3)
bt.insert(7)

print("Inorder Traversal:", bt.inorder_traversal())
