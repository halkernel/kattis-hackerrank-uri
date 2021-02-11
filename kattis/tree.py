
import itertools
class TreeNode(object):

    def __init__(self, val, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

    def children(self):
        return (self.left, self.right)

    def insert(self, val):
        if self.val:
            if val < self.val:
                if self.left is None:
                    self.left = TreeNode(val)
                else:
                    self.left.insert(val)
            elif val > self.val:
                if self.right is None:
                    self.right = TreeNode(val)
                else:
                    self.right.insert(val)
        else:
            self.val = val
         
    def __str__(self):
        return '%s' % (self.val)




def pre(node):
    print(node.val)
    if node.left is not None:
        pre(node.left)    
    if node.right is not None:
        pre(node.right)

def pre_r(node):
    if node is not None:        
        return str(node.val) + str(pre_r(node.right)) + str(pre_r(node.left))
    return ''


def inn(node):
    if node.left is not None:
        pre(node.left)    
    print(node.val)
    if node.right is not None:
        pre(node.right)

def inn_r(node):
    if node is not None:        
        return str(inn_r(node.right)) + str(node.val) + str(inn_r(node.left))
    return ''


def post(node):
    if node.left is not None:
        pre(node.left)    
    if node.right is not None:
        pre(node.right)
    print(node.val)

def post_r(node):
    if node is not None:        
        return str(post_r(node.right)) + str(post_r(node.left)) +  str(node.val)
    return ''



perms = [0, 0, 1, 1, 2, 2]
fun_per = ["Pre", "In", "Post"]
all_perms = list(itertools.permutations(perms, 6))



def find_order(s1, s2, s3,
               f1, f2, f3):

    if s1 == '' and s2 == '' and s3 == '':
        return
    
    if s1 == '': f1 = 3
    if s2 == '': f2 = 3
    if s3 == '': f3 = 3
    if f1 == f2 and s1 != s2: return
    if f1 == f3 and s1 != s3: return
    if f2 == f3 and s2 != s3: return
    ln = len(s1)
    if ln == 0: ln = len(s2)
    if ln == 0: ln = len(s3)
    if ln != len(s2): return
    if ln != len(s3): return

    ss = [s1, s2, s3]
    
    for i in range(ln-1):
        c1 = ''
        if ss[0] != '': c1 = ss[0][0]

        if ss[1] != '':
            c2 = ss[1][i]            
            if c1 != c2: continue            
            c1 = c2             

        if ss[2] != '':
            c2 = ss[2][ln-1]
            if c1 != c2: continue            
            c1 = c2
        
                
        lf = find_order('' if ss[0] == '' else ss[1:i],
                        '' if ss[1] == '' else ss[0:i],
                        '' if ss[2] == '' else ss[0:i],
                        perms[0], 
                        perms[2], 
                        perms[4])

        rt = find_order('' if ss[0] == '' else ss[1+1:],
                        '' if ss[1] == '' else ss[1+i:],
                        '' if ss[2] == '' else ss[i, ln-i-1],
                        perms[1], 
                        perms[3], 
                        perms[5])
        
        cur = TreeNode(c1, lf, rt)
        return cur



    

for perm in all_perms:            
    # print([int(i) for i in perm])
    f_res = find_order("HFBIGEDCJA", "BIGEDCJFAH", "BIGEDCJFAH",
         0, 1, 2)   
    #pre(f_res)


       


        

# s1 = readline()
# s2 = readline()
# s3 = readline()


# root = TreeNode('H')
# root.insert('F')
# root.insert('B')
# root.insert('J')
# root.insert('C')
# root.insert('D')
# root.insert('E')
# root.insert('G')
# root.insert('I')
# root.insert('A')






# res = pre_r(root)
# print(res)
# print(res)
# res = inn_r(root)
# print(res)
# res = post_r(root)
# print(res)

