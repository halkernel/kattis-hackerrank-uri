
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
                f1, f2, f3,
                permutations):    


    if s1 == [] and s2 == [] and s3 == []:
        return None
    

    ret = None    
    
    if s1 == []: f1 = 3
    if s2 == []: f2 = 3
    if s3 == []: f3 = 3
    if f1 == f2 and s1 != s2: return ret
    if f1 == f3 and s1 != s3: return ret
    if f2 == f3 and s2 != s3: return ret
    ln = len(s1)
    if ln == 0: ln = len(s2)
    if ln == 0: ln = len(s3)
    if len(s2) and ln != len(s2): return ret
    if len(s3) and ln != len(s3): return ret

   
    inputs = [[],[],[]]
    inputs[f1] = s1
    inputs[f2] = s2
    inputs[f3] = s3   

    pair = [inputs[0], inputs[1], inputs[2]]
    if pair is not None:
        return pair;
    


    for i in range(len(s1)):

        
        if inputs[0] != []: c1 = inputs[0][0]          
        if inputs[1] != []:            
            c2 = inputs[1][i]
            if c1 != c2: continue
            c1 = c2

        if inputs[2] != []:
            c2 = inputs[2][ln-1];
            if c1 != c2: continue;
            c1 = c2;

        

        
        lst = find_order(inputs[0][1:i], 
                         inputs[1][0:i], 
                         inputs[2][0:i],
                         permutations[0], 
                         permutations[2], 
                         permutations[4],
                         permutations)
        if lst == None: continue

        rst = find_order(inputs[0][1+i:], 
                         inputs[1][1+i:], 
                         inputs[2][i:len(s1)-i-1],
                         permutations[1], 
                         permutations[3], 
                         permutations[5],
                         permutations)
        if rst == None: continue
        
        cur = TreeNode(c1, lst, rst)

        if ret == None or pre_r(cur) < pre_r(ret) or pre_r(cur) == pre_r(ret) and inn_r(cur) < inn_r(ret):
            ret = cur;
        
                
        return TreeNode(c1, lst, rst)

        


for perm in all_perms:            
    print([int(i) for i in perm])
    f_res = find_order("HFBIGEDCJA", "BIGEDCJFAH", "BIGEDCJFAH",
         0, 1, 2, perm)
    print(pre_r(f_res))
    # if pre_r(f_res) == "HFBIGEDCJA":
    #     print(perm)
       



# print("HFBIGEDCJA") #input
# print("HFBJCDEGIA") #output
# print(pre_r(f_res)) #resultado
# print(inn_r(f_res)) #resultado

# print(post_r(f_res)) #resultado




        

# s1 = readline()
# s2 = readline()
# s3 = readline()


# root = TreeNode('A')
# root.insert('B')
# root.insert('C')
# root.insert('D')
# root.insert('E')
# root.insert('F')
# root.insert('G')
# root.insert('H')
# root.insert('I')
# root.insert('J')



# res = pre_r(root)
# print(res)
# res = inn_r(root)
# print(res)
# res = post_r(root)
# print(res)
