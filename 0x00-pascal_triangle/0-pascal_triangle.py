#!/usr/bin/python3

"""
    Pascal Triangle Module
"""


def pascal_triangle(prmSize):
    """
        Return a list of lists of integers representing
        the Pascal's triangle of prmSize.
    """
    new_list = []

    if prmSize <= 0:
        return new_list

    for row in range(0, prmSize):
        tmp = []
        for column in range(0, row + 1):
            tmp.append(get_binomial(row, column))
        new_list.append(tmp)

    return new_list


def get_binomial(prmN, prmK):
    """
        Return the binomial coefficient, given a prmN (n)
        integer and a prmK (k) integer.
    """
    coeff = 1
    if (prmN - prmK < prmK):
        prmK = prmN - prmK
    for nb in range(0, prmK):
        coeff *= (prmN - nb)
        coeff = coeff // (nb + 1)

    return coeff
