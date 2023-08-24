class Solution(object):
    def splitWordsBySeparator(self, words, separator):

        l = []
        for word in words:
            for w in word.split(separator):
                if w:
                    l.append(w)
        

        return l
        """
        :type words: List[str]
        :type separator: str
        :rtype: List[str]
        """