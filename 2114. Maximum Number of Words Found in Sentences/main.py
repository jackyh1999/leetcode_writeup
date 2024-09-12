def mostWordsFound(self, sentences: List[str]) -> int:
    maximum = -1
    for sentence in sentences:
        num = len(sentence.split(' '))
        maximum = max(maximum, num)
    return maximum