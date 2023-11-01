class Solution(object):
    def compareVersion(self, version1, version2):
        lst1 = map(int,version1.split('.'))
        lst2 = map(int,version2.split('.'))

        # print(lst1)
        # print(lst2)
        if len(lst1)<len(lst2):
             while(len(lst1)<len(lst2)):
                lst1.append(0)
           
        elif len(lst1)>len(lst2):
             while(len(lst2)<len(lst1)):
                lst2.append(0)
            

    

        for i in range(0,min(len(lst1),len(lst2))):
            if lst1[i]<lst2[i]:
                return -1
            elif lst1[i]>lst2[i]:
                return 1

        return 0
        