def areNumbersAscending(self, s: str) -> bool:
    num = 0
    tokens = s.split(' ')
    for token in tokens:
        if token.isnumeric():
            if int(token) <= num:
                return False
            num = int(token)
    return True