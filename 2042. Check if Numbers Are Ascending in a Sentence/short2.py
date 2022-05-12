def areNumbersAscending(self, s: str) -> bool:
    return(eval(re.sub('\D+', '<', f'0 {s} 100')))