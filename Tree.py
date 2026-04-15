class Node:
    def __init__(self, value):
        self.value = value
        self.left = None
        self.right = None

def dfs_search(node, target):
    if node is None:
        return False
    if node.value == target:
        return True
    return dfs_search(node.left, target) or dfs_search(node.right, target)

# Construct the tree
root = Node(5)
root.left = Node(3)
root.right = Node(8)
root.left.left = Node(2)
root.left.right = Node(4)
root.right.right = Node(7)

# Search for 7
if dfs_search(root, 7):
    print("Found")
else:
    print("Not Found")