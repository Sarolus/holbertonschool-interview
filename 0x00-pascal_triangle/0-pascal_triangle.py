
#!/usr/bin/python3

"""
    Pascal Triangle Module
"""

import numpy as np
from scipy.linalg import pascal


def pascal_triangle(n: int):
    """
       Returns a list of lists of integers representing the Pascal’s triangle of n.

        Args:
            n (int): Size of the Pascal Triangle.

        Returns:
            list: List of lists of integers representing the Pascal's triangle.
    """
    result = []
    if n > 0:
        triangle = pascal(n, kind='lower')
        result = []

        for row in triangle:
            result.append(np.delete(row, np.where(row == 0)).tolist())

    return result
