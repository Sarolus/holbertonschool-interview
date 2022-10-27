#!/usr/bin/python3
"""
    Script that determines the fewest number of coins needed to meet a given
    amount total
"""


def makeChange(coins, total):
    """
        Determines the fewest number of coins needed to meet a given amount

        Args:
            coins (list): list of the values of the coins in your possession
            total (int): total value to meet with coins

        Returns:
            int: fewest number of coins needed to meet total
    """

    if total <= 0:
        return 0

    coins.sort(reverse=True)
    count = 0

    for coin in coins:
        if total >= coin:
            count += total // coin
            total %= coin

    return count if total == 0 else -1
