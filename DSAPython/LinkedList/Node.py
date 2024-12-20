class Node:
    def __init__(self,data=None):
        self.data = data
        self.next = None


# Insert at the beginning of the linked list
def insert_at_beginning(head,data):
    newNode = Node(data)
    newNode.next = head
    return newNode


# Insert after a given node
def insert_after_node(prev_node,data):
    if prev_node is None:
        print("Previous node should not be None")
        return

    newNode = Node(data)
    newNode.next = prev_node.next
    prev_node.next = newNode


# Insert at the end of the linked list
def insert_at_end(head,data):
    if head is None:
        return Node(data)
    
    newNode = Node(data)
    curr = head

    while curr.next:
        curr = curr.next

    curr.next = newNode


# Delete a node from beginning
def delete_from_beginning(head):
    if head is None:
        return None
    
    newHead = head.next
    del head
    return newHead


# Delete a node after a given node
def delete_after_node(prev_node):
    if prev_node is None or prev_node.next is None:
        print("Error: The given node is None or the next node is None")
        return

    node_to_delete = prev_node.next
    prev_node.next = node_to_delete.next
    del node_to_delete


# Delete a node from the end
def delete_from_end(head):
    if head is None:
        return None
    
    if head.next is None:
        del head
        return None
    
    curr = head
    while curr.next.next:
        curr = curr.next

    del_node = curr.next
    curr.next = None
    del del_node


# Traverse the linked list
def traverse(head):
    while head:
        print(f"{head.data} -> ",end="")
        head = head.next
    print("None")

head = None
head = insert_at_beginning(head,10)
head = insert_at_beginning(head,20)
head = insert_at_beginning(head,30)
head = insert_at_beginning(head,40)
traverse(head)