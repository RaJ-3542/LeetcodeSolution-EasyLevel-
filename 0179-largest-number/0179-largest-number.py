class Solution:
    def largestNumber(self, nums: List[int]) -> str:
        nums = sorted(nums,key=lambda x:x / (10 ** len(str(x)) - 1 ), reverse=True)
        res = ""
        for a in nums:
            res=res+str(int(a))

        


        return str(int(res))
        