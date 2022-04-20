#!/usr/bin/python3
"""
    Lockboxes Unlocking Module
"""


def canUnlockAll(boxes: list):
    """
        Determine if all boxes can be opened.

        Args:
            boxes (list): List of lists, the boxes to unlock.

        Returns:
            boolean: Return True if all boxes can be opened,
                    else return False.
    """
    unlocked_boxes = [0]
    opened_boxes = []

    # While there is unlocked boxes
    while unlocked_boxes:
        temp_keys = []

        # Browse each box contained in the boxes.
        for box in unlocked_boxes:
            opened_boxes.append(box)
            # Browse each keys in a box.
            for key in boxes[box]:
                # Retrieve the keys if we do not have it.
                if key not in opened_boxes:
                    temp_keys.append(key)

        unlocked_boxes = temp_keys

    return len(opened_boxes) == len(boxes)
