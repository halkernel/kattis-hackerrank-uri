 
def decodeHuff(root, s):
    tmp = root
    res = []
    
    for char in s:
        if char is '0':
            tmp = tmp.left
        else:
            tmp = tmp.right
            
        if tmp.left is None and tmp.right is None:
            res.append(tmp.data)
            tmp = root
            
    print("".join(res))
            
