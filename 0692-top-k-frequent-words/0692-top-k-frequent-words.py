class Solution(object):
    def topKFrequent(self, words, k):
        """
        :type words: List[str]
        :type k: int
        :rtype: List[str]
        """
        result = []
        word_bucket = [[] for _ in range(len(words) + 1)]

        # scss
        # Copy code
        for word, freq in collections.Counter(words).items():
            word_bucket[freq].append(word)

        for bucket in reversed(word_bucket):
            for word in sorted(bucket):
                result.append(word)
                if len(result) == k:
                    return result