class TreeNode<T> {
    var value: T
    var left: TreeNode<T>?
    var right: TreeNode<T>?

    init(value: T) {
        self.value = value
    }
}

let root = TreeNode<Int>(value: 5)
root.left = TreeNode<Int>(value: 3)
root.right = TreeNode<Int>(value: 8)
root.left?.left = TreeNode<Int>(value: 1)
root.left?.right = TreeNode<Int>(value: 4)
root.right?.left = TreeNode<Int>(value: 6)
root.right?.right = TreeNode<Int>(value: 10)