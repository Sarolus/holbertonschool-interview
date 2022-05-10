#!/usr/bin/python3
"""
    Minimum Operations
"""


def minOperations(n: int):
    """
        Calculates the fewest number of operations needed
        to result in exactly n H characters in the file.

        Args:
            n (int): Number of characters expected.

        Returns:
            int: Number of operations required.
    """

    if type(n) is not int:
        return 0

    if n <= 1:
        return 0

    coefficient = 2
    result = 0

    while coefficient <= n:
        if n % coefficient == 0:
            result += coefficient
            n = n / coefficient
        else:
            coefficient += 1

    return result
