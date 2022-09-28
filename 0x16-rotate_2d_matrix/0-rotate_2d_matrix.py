#!/usr/bin/python3
"""
    Script that rotates a 2D matrix 90 degrees clockwise
"""


def rotate_2d_matrix(matrix):
    """
        Rotate a 2D matrix 90 degrees clockwise

        Args:
            matrix (list): 2D matrix
    """
    n = len(matrix)

    matrix_copy = matrix.copy()

    for r in range(n):
        column = [matrix[c][r] for c in range(n)]
        column.reverse()
        matrix_copy[r] = column

    for r in range(n):
        matrix[r] = matrix_copy[r]
