def minimumTimeToRevert(word, k):
    n = len(word)

    for i in range(1, k + 1):
        prefix = word[:i]
        suffix = word[i:]

        # Check if the remaining suffix is a rotation of the original string
        if suffix + prefix == word:
            return (n + i - 1) // i  # Fix: Return the correct remaining time

    # If no rotation is found for all lengths, return -1
    return (n + k - 1) // k  # Fix: Return the correct remaining time when no rotation is found

# Example usage:
word = "abacaba"
k = 4
result = minimumTimeToRevert(word, k)
print(result)
