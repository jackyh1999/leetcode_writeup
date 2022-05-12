def areNumbersAscending(self, s: str) -> bool:
    nums = re.findall(r'\d+', s)
    return nums == sorted(set(nums), key=int)