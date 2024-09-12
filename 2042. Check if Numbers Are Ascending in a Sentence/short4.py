def areNumbersAscending(self, s: str) -> bool:
    nums = re.findall(r'\d+', s)
    return all(int(i) < int(j) for i, j in zip(nums, nums[1:]))